/*
 * XREFs of sub_1800FA428 @ 0x1800FA428
 * Callers:
 *     sub_1800FA560 @ 0x1800FA560 (sub_1800FA560.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FA428(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    LOBYTE(v2) = v3 != a1 + 24;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, v2);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  return sub_180010910(a1);
}
