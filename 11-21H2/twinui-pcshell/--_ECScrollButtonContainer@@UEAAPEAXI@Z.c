/*
 * XREFs of ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x1804D3A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804D39BC (--1CScrollButtonContainer@@UEAA@XZ.c)
 */

CScrollButtonContainer *__fastcall CScrollButtonContainer::`vector deleting destructor'(
        CScrollButtonContainer *this,
        char a2)
{
  CScrollButtonContainer::~CScrollButtonContainer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
