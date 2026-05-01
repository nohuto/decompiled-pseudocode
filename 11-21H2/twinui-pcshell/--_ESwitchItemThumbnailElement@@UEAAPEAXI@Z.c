/*
 * XREFs of ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1804B8090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1802345D6 (--1SwitchItemThumbnailElement@@UEAA@XZ.c)
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
