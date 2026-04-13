/*
 * XREFs of ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800BD810
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800BECD8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ??0?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18009AE90 (--0-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@PEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@1@_N@Z @ 0x1800B6B58 (--0-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@PEAV-$basic_streambuf@_WU-$char_traits@_W.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
  a1[2] = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  a1[19] = &std::wios::`vftable';
  std::wistream::wistream(a1, (__int64)(a1 + 3));
  *(_QWORD *)((char *)a1 + *(int *)(a1[2] + 4LL) + 16) = &std::basic_ostream<unsigned short>::`vftable';
  v2 = *(int *)(a1[2] + 4LL);
  *(_DWORD *)((char *)a1 + v2 + 12) = v2 - 16;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_iostream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 32;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 152;
  std::wstringbuf::wstringbuf((__int64)(a1 + 3), 3);
  return a1;
}
