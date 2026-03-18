/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800D0A14
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800D0A04 (-RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180108AD0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BNI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180108AF0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BNI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180108C10 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BBI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180109150 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BBI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180109670 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010A170 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CMA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010A790 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@CMA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010AB30 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010BB70 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010BB90 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010C130 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18010C3D0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(CDeviceResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **i; // rcx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 4);
  for ( i = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5); i != v2; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
      *((_QWORD *)this - 4) -= 8LL;
      return;
    }
  }
}
