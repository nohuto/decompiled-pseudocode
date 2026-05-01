/*
 * XREFs of ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x18049F660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x18049F5C4 (--1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ.c)
 */

VirtualDesktopThumbnailWindowFilter *__fastcall VirtualDesktopThumbnailWindowFilter::`scalar deleting destructor'(
        VirtualDesktopThumbnailWindowFilter *this,
        char a2)
{
  VirtualDesktopThumbnailWindowFilter::~VirtualDesktopThumbnailWindowFilter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
