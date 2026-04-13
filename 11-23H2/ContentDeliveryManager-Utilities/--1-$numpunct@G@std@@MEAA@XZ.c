/*
 * XREFs of ??1?$numpunct@G@std@@MEAA@XZ @ 0x1800532FC
 * Callers:
 *     ??_G?$numpunct@G@std@@MEAAPEAXI@Z @ 0x1800548B0 (--_G-$numpunct@G@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x1800627D8 (-_Tidy@-$numpunct@_W@std@@AEAAXXZ.c)
 */

void **__fastcall std::numpunct<unsigned short>::~numpunct<unsigned short>(_QWORD *a1)
{
  void **result; // rax

  *a1 = &std::numpunct<unsigned short>::`vftable';
  std::numpunct<wchar_t>::_Tidy();
  result = &std::_Facet_base::`vftable';
  *a1 = &std::_Facet_base::`vftable';
  return result;
}
