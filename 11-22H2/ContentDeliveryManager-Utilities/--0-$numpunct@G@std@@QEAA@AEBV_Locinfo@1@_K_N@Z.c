/*
 * XREFs of ??0?$numpunct@G@std@@QEAA@AEBV_Locinfo@1@_K_N@Z @ 0x180051A4C
 * Callers:
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180060934 (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180061C3C (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::numpunct<unsigned short>::numpunct<unsigned short>(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &std::numpunct<unsigned short>::`vftable';
  LOBYTE(a3) = a4;
  std::numpunct<unsigned short>::_Init(a1, a2, a3);
  return a1;
}
