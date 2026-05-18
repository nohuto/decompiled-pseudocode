/*
 * XREFs of sub_180044070 @ 0x180044070
 * Callers:
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     sub_180045FB4 @ 0x180045FB4 (sub_180045FB4.c)
 * Callees:
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180044070(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rsi
  __int64 i; // rbx

  v2 = *a2;
  sub_180043668(*a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, a2) )
  {
    v7 = *(_QWORD *)(v2 + 40);
    for ( i = *(_QWORD *)(v2 + 32); i != v7; i += 16LL )
    {
      if ( !(unsigned __int8)sub_180044070(a1, i) )
        return v6;
    }
    return 1;
  }
  return v6;
}
