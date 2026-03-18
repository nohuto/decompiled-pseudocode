/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C006A688
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006A3FC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 2552);
  if ( (*(_DWORD *)(v2 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(v2 + 136), 0x232043u, 0LL, 0, &v6, 8u, &v5, 1u, 1) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 2568) + 184LL) = v6;
    v3 = *(_QWORD *)(a1 + 2568);
    if ( BYTE4(v6) )
      *(_DWORD *)(v3 + 180) &= ~2u;
    else
      *(_DWORD *)(v3 + 180) |= 2u;
    v4 = *(_QWORD *)(a1 + 2568);
    if ( *(_DWORD *)(v4 + 180) )
      *(_DWORD *)(v4 + 72) |= 0x200000u;
  }
}
