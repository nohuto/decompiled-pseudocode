/*
 * XREFs of ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180056428
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800562F0 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 * Callees:
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180056390 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180068CAC (-_Init@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::basic_stringbuf<unsigned short>::basic_stringbuf<unsigned short>(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8

  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>((__int64)a1);
  *a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  v6 = (4 * ((a3 & 1) == 0)) | 2;
  if ( (a3 & 2) != 0 )
    v6 = 4 * ((a3 & 1) == 0);
  v7 = v6 | 8;
  if ( (a3 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x10;
  if ( (a3 & 4) == 0 )
    v8 = v7;
  v9 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::wstringbuf::_Init(a1, a2, v9, v8);
  return a1;
}
