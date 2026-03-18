/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B2FAC
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x180122B10 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@.c)
 * Callees:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B27B0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1802B5B6C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CDxHandleStereoBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleBitmapRealization *v2; // rdi

  v2 = (CDxHandleStereoBitmapRealization *)((char *)this - 104);
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleStereoBitmapRealization *)((char *)this - 104), a2) )
    CDxHandleBitmapRealization::NotifyInvalidResource(v2, a2);
}
