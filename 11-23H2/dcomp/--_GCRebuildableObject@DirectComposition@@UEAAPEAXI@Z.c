/*
 * XREFs of ??_GCRebuildableObject@DirectComposition@@UEAAPEAXI@Z @ 0x1800FAC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::CRebuildableObject *__fastcall DirectComposition::CRebuildableObject::`scalar deleting destructor'(
        DirectComposition::CRebuildableObject *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRebuildableObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
