/*
 * XREFs of ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x180572C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1802E2C56 (--1SwitchItemThumbnailElement@@UEAA@XZ.c)
 */

SwitchItemThumbnailElement *__fastcall SwitchItemThumbnailElement::`vector deleting destructor'(
        SwitchItemThumbnailElement *this,
        char a2)
{
  SwitchItemThumbnailElement::~SwitchItemThumbnailElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
