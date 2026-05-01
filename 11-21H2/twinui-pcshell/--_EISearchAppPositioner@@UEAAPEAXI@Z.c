/*
 * XREFs of ??_EISearchAppPositioner@@UEAAPEAXI@Z @ 0x1803A03D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ISearchAppPositioner *__fastcall ISearchAppPositioner::`vector deleting destructor'(
        ISearchAppPositioner *this,
        char a2)
{
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
