/*
 * XREFs of ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007F8E0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180037980 (CemRcObjectCleanup.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampSystemBamCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x18008E0B0 (-HampSystemBamCleanup@@YAXPEAU_HAM_SESSION@@@Z.c)
 */

void __fastcall HampSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx

  HampSystemBamCleanup(a1);
  v2 = *((_QWORD *)a1 + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
