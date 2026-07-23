/*
 * XREFs of sub_14024DE5C @ 0x14024DE5C
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 * Callees:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_14024DE5C(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v3 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    ++dword_140C29CF0;
    return 0LL;
  }
  v4 = sub_140317A10(a2);
  if ( (v4 & 0x220) != 0x20 )
  {
    ++dword_140C29CF4;
    return 0LL;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  if ( v4 != _InterlockedCompareExchange64(a2, v5, v4) )
  {
    ++dword_140C29CF8;
    return 0LL;
  }
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v3, 0LL, 2LL);
  return v5;
}
