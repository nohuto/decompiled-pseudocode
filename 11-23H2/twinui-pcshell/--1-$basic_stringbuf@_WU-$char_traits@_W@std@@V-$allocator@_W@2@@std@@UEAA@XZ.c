/*
 * XREFs of ??1?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18076A47C
 * Callers:
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18076A4B0 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??_G?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18076AB40 (--_G-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXXZ @ 0x18076F0A4 (-_Tidy@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::wstringbuf::~wstringbuf(_QWORD *a1)
{
  *a1 = &std::wstringbuf::`vftable';
  std::wstringbuf::_Tidy();
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
