/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800FB520
 * Callers:
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011EBC0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011EBE0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011EC00 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F520 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F6A0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011FFC0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180120720 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180120E00 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801215E0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180122220 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180122240 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180122A00 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180122EE0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B9B84 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

void __fastcall CDeviceResource::AddResourceNotifier(CDeviceResource *this, struct IDeviceResourceNotify *a2)
{
  _BYTE *v3; // rdx
  struct IDeviceResourceNotify *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this - 4);
  if ( v3 == *((_BYTE **)this - 3) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)this - 5,
      v3,
      &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this - 4) += 8LL;
  }
}
