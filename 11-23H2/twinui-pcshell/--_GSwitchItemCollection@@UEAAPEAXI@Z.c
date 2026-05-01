/*
 * XREFs of ??_GSwitchItemCollection@@UEAAPEAXI@Z @ 0x1802E0C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SwitchItemCollection@@UEAA@XZ @ 0x1805647C8 (--1SwitchItemCollection@@UEAA@XZ.c)
 */

SwitchItemCollection *__fastcall SwitchItemCollection::`scalar deleting destructor'(
        SwitchItemCollection *this,
        char a2)
{
  SwitchItemCollection::~SwitchItemCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
