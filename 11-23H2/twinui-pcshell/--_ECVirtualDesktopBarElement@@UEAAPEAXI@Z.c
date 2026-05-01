/*
 * XREFs of ??_ECVirtualDesktopBarElement@@UEAAPEAXI@Z @ 0x18056CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x18056C968 (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 */

CVirtualDesktopBarElement *__fastcall CVirtualDesktopBarElement::`vector deleting destructor'(
        CVirtualDesktopBarElement *this,
        char a2)
{
  CVirtualDesktopBarElement::~CVirtualDesktopBarElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
