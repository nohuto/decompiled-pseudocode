/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0152AE8
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0152CD0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154170 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0153294 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL);
  v3 = *(_QWORD *)(result + 32);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<81920,320>::Free(v3, a1);
  return result;
}
