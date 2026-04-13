/*
 * XREFs of ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x180062828
 * Callers:
 *     ??1?$numpunct@G@std@@MEAA@XZ @ 0x18005334C (--1-$numpunct@G@std@@MEAA@XZ.c)
 *     ??1?$numpunct@_W@std@@MEAA@XZ @ 0x1800B71A4 (--1-$numpunct@_W@std@@MEAA@XZ.c)
 *     _std::numpunct_unsigned_short_::_Init_::_1_::catch$0 @ 0x1800D6DBE (_std--numpunct_unsigned_short_--_Init_--_1_--catch$0.c)
 *     _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800DBE32 (_std--numpunct_wchar_t_--_Init_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::numpunct<wchar_t>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
