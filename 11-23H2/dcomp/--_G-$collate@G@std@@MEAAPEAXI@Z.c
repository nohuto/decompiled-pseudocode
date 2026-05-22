/*
 * XREFs of ??_G?$collate@G@std@@MEAAPEAXI@Z @ 0x18014F010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$collate@G@std@@MEAA@XZ @ 0x18014EE48 (--1-$collate@G@std@@MEAA@XZ.c)
 */

void **__fastcall std::collate<unsigned short>::`scalar deleting destructor'(void **a1, char a2)
{
  std::collate<unsigned short>::~collate<unsigned short>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
