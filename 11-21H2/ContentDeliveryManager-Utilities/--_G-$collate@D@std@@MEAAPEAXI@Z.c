/*
 * XREFs of ??_G?$collate@D@std@@MEAAPEAXI@Z @ 0x18001C710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::collate<char>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::collate<char>::`vftable';
  free(a1[3]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
