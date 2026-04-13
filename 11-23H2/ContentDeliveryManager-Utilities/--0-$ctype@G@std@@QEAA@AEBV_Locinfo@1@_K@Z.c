/*
 * XREFs of ??0?$ctype@G@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x1800519D0
 * Callers:
 *     ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18006078C (-_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 * Callees:
 *     ?_Init@?$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x180061B9C (-_Init@-$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z.c)
 */

__int64 __fastcall std::ctype<unsigned short>::ctype<unsigned short>(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &std::ctype<unsigned short>::`vftable';
  std::ctype<wchar_t>::_Init();
  return a1;
}
