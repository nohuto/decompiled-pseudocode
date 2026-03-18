/*
 * XREFs of ?AddDeviceResourcesToCache@CWARPDrawListEntry@@UEBAXPEAVCDrawListCache@@@Z @ 0x1801FF940
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z @ 0x1800272A0 (-AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z.c)
 */

void __fastcall CWARPDrawListEntry::AddDeviceResourcesToCache(CWARPDrawListEntry *this, struct CDrawListCache *a2)
{
  CDrawListBitmap::AddDeviceResourceToCache((CWARPDrawListEntry *)((char *)this + 48), a2);
  CDrawListBitmap::AddDeviceResourceToCache((CWARPDrawListEntry *)((char *)this + 128), a2);
}
