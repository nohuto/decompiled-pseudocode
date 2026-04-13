/*
 * XREFs of ??_G?$numpunct@G@std@@MEAAPEAXI@Z @ 0x180054900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$numpunct@G@std@@MEAA@XZ @ 0x18005334C (--1-$numpunct@G@std@@MEAA@XZ.c)
 */

_QWORD *__fastcall std::numpunct<unsigned short>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  std::numpunct<unsigned short>::~numpunct<unsigned short>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
