/*
 * XREFs of ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x1805FBB10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopCollection@@UEAA@XZ @ 0x1805FBAA8 (--1CVirtualDesktopCollection@@UEAA@XZ.c)
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
