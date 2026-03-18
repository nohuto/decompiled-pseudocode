/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A43B0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z @ 0x18010BAB0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z @ 0x18010BAD0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z @ 0x18010C0D0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A4BAC (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1800FF1C8 (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800FF28C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rsi
  const struct IDeviceResource *v4; // rbx

  v2 = (char *)this - 408;
  v4 = 0LL;
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleBitmapRealization *)((char *)this - 408), a2) )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL))(v2);
    if ( v2 )
      v4 = (CDxHandleBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this - 49) + 20LL) - 392);
    CDeviceResource::NotifyInvalid((CDxHandleBitmapRealization *)((char *)this - 88), v4);
  }
}
