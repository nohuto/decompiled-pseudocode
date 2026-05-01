/*
 * XREFs of ??1?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1806E1988
 * Callers:
 *     ??_D?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1806E1DC8 (--_D-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ??_G?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1806E1E3C (--_G-$basic_ifstream@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 *     ?ReadFileToString@stringutils@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x1806E3388 (-ReadFileToString@stringutils@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??1?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1806E193C (--1-$basic_filebuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_ifstream<unsigned short>::~basic_ifstream<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 176) + 4LL) + a1 - 176) = &std::basic_ifstream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 176) + 4LL);
  *(_DWORD *)(v2 + a1 - 180) = v2 - 176;
  std::basic_filebuf<unsigned short>::~basic_filebuf<unsigned short,std::char_traits<unsigned short>>(a1 - 160);
  return std::basic_istream<unsigned short>::~basic_istream<unsigned short,std::char_traits<unsigned short>>(a1 - 152);
}
