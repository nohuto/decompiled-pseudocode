/*
 * XREFs of sub_18010D78B @ 0x18010D78B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010D78B(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  sub_18001F2B4(&stru_1801EA648, 3, "ComputeTangents threw exception");
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 288) = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 280) + 56LL);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, a2 + 80, a2 + 288);
  sub_180010910(a2 + 80);
  return 0LL;
}
