/*
 * XREFs of ??_EApplicationViewFilteredCollection@@UEAAPEAXI@Z @ 0x1805B5DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805B5B5C (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
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
