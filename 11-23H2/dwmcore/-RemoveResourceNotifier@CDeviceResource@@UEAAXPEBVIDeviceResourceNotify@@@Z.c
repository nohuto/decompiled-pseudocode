/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800BA4F0
 * Callers:
 *     ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800BA498 (-RemoveResourceNotifier@CRenderTargetBitmap@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011E9F0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011EA10 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011EA30 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F2D0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F850 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011FD90 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801208F0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180120FB0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180121390 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180122330 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180122350 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801228F0 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x180123050 (-RemoveResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18011B674 (memmove_0.c)
 */

void __fastcall CDeviceResource::RemoveResourceNotifier(CDeviceResource *this, const struct IDeviceResourceNotify *a2)
{
  const struct IDeviceResourceNotify **v2; // r8
  const struct IDeviceResourceNotify **v4; // rcx
  const struct IDeviceResourceNotify **v6; // rdx

  v2 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 4);
  v4 = (const struct IDeviceResourceNotify **)*((_QWORD *)this - 5);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this - 4) -= 8LL;
  }
}
