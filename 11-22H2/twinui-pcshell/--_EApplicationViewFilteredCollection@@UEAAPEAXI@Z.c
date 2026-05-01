/*
 * XREFs of ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x180689120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x180688EC4 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 */

ApplicationViewFilteredCollection *__fastcall ApplicationViewFilteredCollection::`vector deleting destructor'(
        ApplicationViewFilteredCollection *this,
        char a2)
{
  ApplicationViewFilteredCollection::~ApplicationViewFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
