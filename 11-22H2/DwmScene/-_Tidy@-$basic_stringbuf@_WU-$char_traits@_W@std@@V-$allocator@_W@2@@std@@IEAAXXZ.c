/*
 * XREFs of ?_Tidy@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXXZ @ 0x180038430
 * Callers:
 *     ??1?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180031998 (--1-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstringbuf::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::wstreambuf::pptr(a1) )
      v2 = std::wstreambuf::epptr(a1);
    else
      v2 = std::wstreambuf::egptr(a1);
    v3 = (v2 - std::wstreambuf::eback(a1)) >> 1;
    v4 = (void *)std::wstreambuf::eback(a1);
    std::_Deallocate<16,0>(v4, 2 * v3);
  }
  std::wstreambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::wstreambuf::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
