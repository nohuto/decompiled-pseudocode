/*
 * XREFs of ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00A22D0
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::OkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 1);
  if ( *((_BYTE *)a1 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return 3221225506LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *))(**(_QWORD **)(v2 + 8) + 32LL))(
             *(_QWORD *)(v2 + 8),
             a1);
}
