/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800BA498
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180122650 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180123310 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180123830 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180123B70 (-RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::RemoveResourceNotifier(
        CRenderTargetBitmap *this,
        const struct IDeviceResourceNotify *a2)
{
  CDeviceResource::RemoveResourceNotifier((CRenderTargetBitmap *)((char *)this - 56), a2);
}
