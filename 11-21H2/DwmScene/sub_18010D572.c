/*
 * XREFs of sub_18010D572 @ 0x18010D572
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010D572(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx

  v3 = (const char *)(*(_QWORD *)(a2 + 64) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_18001F2B4(&stru_1801EA648, 3, v3);
  *(_OWORD *)(a2 + 88) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 224) + 56LL);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2 + 88, a2 + 232);
  sub_180010910(a2 + 88);
  return 0LL;
}
