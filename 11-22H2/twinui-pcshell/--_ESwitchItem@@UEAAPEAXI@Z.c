/*
 * XREFs of ??_ESwitchItem@@UEAAPEAXI@Z @ 0x1805707D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x1805705D8 (--1SwitchItem@@UEAA@XZ.c)
 */

SwitchItem *__fastcall SwitchItem::`vector deleting destructor'(SwitchItem *this, char a2)
{
  SwitchItem::~SwitchItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
