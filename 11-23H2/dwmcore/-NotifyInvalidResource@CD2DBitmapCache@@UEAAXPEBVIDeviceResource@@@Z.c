/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AFD50
 * Callers:
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x180121A90 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z @ 0x180121AB0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z @ 0x180121AD0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BFI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@PA@EAAXPEBVIDeviceResource@@@Z @ 0x180121AF0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@PA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x180121C30 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BHI@EAAXPEBVIDeviceResource@@@Z @ 0x180121DF0 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BHI@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z @ 0x180122390 (-NotifyInvalidResource@CD2DBitmapCache@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CD2DBitmapCache *)((char *)this - 88), a2);
}
