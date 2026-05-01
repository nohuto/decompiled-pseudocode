/*
 * XREFs of ??_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1801A50A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x1801A5044 (--1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ.c)
 */

SearchBoxOnTaskbarSearchAppPositioner *__fastcall SearchBoxOnTaskbarSearchAppPositioner::`vector deleting destructor'(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        char a2)
{
  SearchBoxOnTaskbarSearchAppPositioner::~SearchBoxOnTaskbarSearchAppPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
