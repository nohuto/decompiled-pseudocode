/*
 * XREFs of ?HampSystemBamCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x18008E0B0
 * Callers:
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007F8E0 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampSystemBamCleanup(struct _HAM_SESSION *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *((_QWORD *)a1 + 14);
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 15);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 160LL))(*((_QWORD *)a1 + 14), *((unsigned int *)a1 + 32));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)a1 + 15) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)a1 + 14) = 0LL;
  }
}
