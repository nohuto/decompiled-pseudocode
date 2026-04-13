/*
 * XREFs of ??_G?$numpunct@_W@std@@MEAAPEAXI@Z @ 0x1800B73B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$numpunct@_W@std@@MEAA@XZ @ 0x1800B71A4 (--1-$numpunct@_W@std@@MEAA@XZ.c)
 */

void **__fastcall std::numpunct<wchar_t>::`scalar deleting destructor'(void **a1, char a2)
{
  std::numpunct<wchar_t>::~numpunct<wchar_t>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
