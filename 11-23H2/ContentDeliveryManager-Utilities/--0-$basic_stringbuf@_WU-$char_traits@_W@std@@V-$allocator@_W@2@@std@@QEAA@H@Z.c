/*
 * XREFs of ??0?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18009AE90
 * Callers:
 *     ??0?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18009AD70 (--0-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800BD810 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 * Callees:
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x1800517A8 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstringbuf::wstringbuf(__int64 a1, char a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax

  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(a1);
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  v4 = (4 * ((a2 & 1) == 0)) | 2;
  if ( (a2 & 2) != 0 )
    v4 = 4 * ((a2 & 1) == 0);
  v5 = v4 | 8;
  if ( (a2 & 8) == 0 )
    v5 = v4;
  *(_QWORD *)(a1 + 104) = 0LL;
  v6 = v5 | 0x10;
  if ( (a2 & 4) == 0 )
    v6 = v5;
  *(_DWORD *)(a1 + 112) = v6;
  return a1;
}
