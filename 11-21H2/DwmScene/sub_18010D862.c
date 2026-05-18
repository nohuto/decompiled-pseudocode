/*
 * XREFs of sub_18010D862 @ 0x18010D862
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010D862(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 168) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 168) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18001F2B4(&stru_1801EA648, 3, v3);
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_OWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 344) = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 336) + 56LL);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2 + 112, a2 + 96, a2 + 344);
  sub_180010910(a2 + 112);
  sub_180010910(a2 + 96);
  return 0LL;
}
