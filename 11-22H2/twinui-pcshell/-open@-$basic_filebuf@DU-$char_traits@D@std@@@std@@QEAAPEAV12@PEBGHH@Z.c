/*
 * XREFs of ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x18064B998
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1806F06A0 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x1803E2EFC (--1locale@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x18064B2FC (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x18064B66C (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 *     ?_Initcvt@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXAEBV?$codecvt@DDU_Mbstatet@@@2@@Z @ 0x18064B724 (-_Initcvt@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXAEBV-$codecvt@DDU_Mbstatet@@@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filebuf::open(__int64 a1, const unsigned __int16 *a2, int a3)
{
  struct _iobuf *v4; // rax
  std::locale *v5; // rax
  struct std::_Facet_base *v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
    return 0LL;
  v4 = std::_Fiopen(a2, a3, 64);
  if ( !v4 )
    return 0LL;
  std::filebuf::_Init(a1, (__int64)v4, 1);
  v5 = (std::locale *)std::streambuf::getloc(a1, v8);
  v6 = std::use_facet<std::codecvt<char,char,_Mbstatet>>(v5);
  std::filebuf::_Initcvt(a1, v6);
  std::locale::~locale((std::locale *)v8);
  return a1;
}
