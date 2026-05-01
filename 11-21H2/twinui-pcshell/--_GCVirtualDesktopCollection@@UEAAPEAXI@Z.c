/*
 * XREFs of ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x180541110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopCollection@@UEAA@XZ @ 0x180541090 (--1CVirtualDesktopCollection@@UEAA@XZ.c)
 */

CVirtualDesktopCollection *__fastcall CVirtualDesktopCollection::`scalar deleting destructor'(
        CVirtualDesktopCollection *this,
        char a2)
{
  CVirtualDesktopCollection::~CVirtualDesktopCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
