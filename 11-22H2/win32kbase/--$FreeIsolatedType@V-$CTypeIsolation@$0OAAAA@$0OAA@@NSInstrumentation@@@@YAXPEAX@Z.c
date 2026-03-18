/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D1708
 * Callers:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00C0900 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C4260 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D1E9C (-Free@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL);
  v3 = *(_QWORD *)(result + 48);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<917504,3584>::Free(v3, a1);
  return result;
}
