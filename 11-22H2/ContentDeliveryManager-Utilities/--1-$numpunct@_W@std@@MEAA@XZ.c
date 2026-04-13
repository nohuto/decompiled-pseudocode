/*
 * XREFs of ??1?$numpunct@_W@std@@MEAA@XZ @ 0x1800B71A4
 * Callers:
 *     ??_G?$numpunct@_W@std@@MEAAPEAXI@Z @ 0x1800B73B0 (--_G-$numpunct@_W@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x180062828 (-_Tidy@-$numpunct@_W@std@@AEAAXXZ.c)
 */

void **__fastcall std::numpunct<wchar_t>::~numpunct<wchar_t>(void **a1)
{
  void **result; // rax

  *a1 = &std::numpunct<wchar_t>::`vftable';
  std::numpunct<wchar_t>::_Tidy(a1);
  result = &std::_Facet_base::`vftable';
  *a1 = &std::_Facet_base::`vftable';
  return result;
}
