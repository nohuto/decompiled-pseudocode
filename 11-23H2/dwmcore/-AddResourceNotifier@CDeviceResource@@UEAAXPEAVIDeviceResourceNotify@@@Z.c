/*
 * XREFs of ?AddResourceNotifier@CDeviceResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1800F3640
 * Callers:
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011E890 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@A@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011E8B0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BOI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011E8D0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F1F0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@NI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F370 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BDI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011FC90 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BGA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801203F0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@BEA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180120AD0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@COA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801212B0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@MA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180121EF0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@HA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180121F10 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@JA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801226D0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@KA@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x180122BB0 (-AddResourceNotifier@CDeviceResource@@$4PPPPPPPM@GI@EAAXPEAVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x180097D8C (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
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
