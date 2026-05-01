/*
 * XREFs of ??_GCVirtualDesktopFactory@@UEAAPEAXI@Z @ 0x1805FB3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x1805FB370 (--1CVirtualDesktopFactory@@UEAA@XZ.c)
 */

CVirtualDesktopFactory *__fastcall CVirtualDesktopFactory::`scalar deleting destructor'(
        CVirtualDesktopFactory *this,
        char a2)
{
  CVirtualDesktopFactory::~CVirtualDesktopFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
