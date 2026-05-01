/*
 * XREFs of sub_180009340 @ 0x180009340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, unsigned int a6)
{
  if ( a6 >= 4 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(a4 + 24))(
      *(_QWORD *)(a4 + 16),
      a4,
      *a5,
      0LL,
      *(_QWORD *)(a4 + 32));
  return 0LL;
}
