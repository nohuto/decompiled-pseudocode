/*
 * XREFs of ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1805DCFA8
 * Callers:
 *     ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1805DDE68 (-ReadFileToString@stringutils@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18058C4B0 (--1locale@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805DCEAC (--$use_facet@V-$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     ?_Init@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1805DE1DC (-_Init@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 *     ?_Initcvt@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXAEBV?$codecvt@GDU_Mbstatet@@@2@@Z @ 0x1805DE230 (-_Initcvt@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAAXAEBV-$codecvt@GDU_Mbstatet@@@2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::basic_ifstream<unsigned short>::basic_ifstream<unsigned short>(
        _QWORD *a1,
        const unsigned __int16 *a2)
{
  struct _iobuf *v4; // rax
  std::locale *v5; // rax
  struct std::_Facet_base *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &std::basic_ifstream<unsigned short>::`vbtable';
  std::basic_ios<unsigned short>::basic_ios<unsigned short>(a1 + 22);
  std::basic_istream<unsigned short>::basic_istream<unsigned short>(a1, a1 + 2, 0LL, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_ifstream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 176;
  v8[0] = a1 + 2;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(a1 + 2);
  a1[2] = &std::basic_filebuf<unsigned short>::`vftable';
  std::basic_filebuf<unsigned short>::_Init(a1 + 2, 0LL, 0LL);
  if ( a1[18] || (v4 = std::_Fiopen(a2, 1, 64)) == 0LL )
  {
    std::basic_ios<unsigned short>::setstate((char *)a1 + *(int *)(*a1 + 4LL), 2LL, 0LL);
  }
  else
  {
    std::basic_filebuf<unsigned short>::_Init(a1 + 2, v4, 1LL);
    v5 = (std::locale *)std::basic_streambuf<unsigned short>::getloc(a1 + 2, v8);
    v6 = std::use_facet<std::codecvt<unsigned short,char,_Mbstatet>>(v5);
    std::basic_filebuf<unsigned short>::_Initcvt(a1 + 2, v6);
    std::locale::~locale((std::locale *)v8);
  }
  return a1;
}
