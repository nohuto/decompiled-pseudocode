/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180148530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1801464B0 (-UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180146600 (-UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180146754 (-UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801485F4 (-UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  v3 = *((_QWORD *)a2 + 4);
  if ( v3 )
    BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateSupportedFeedback(this, 0, *(_DWORD *)(v3 + 40));
  LOBYTE(a3) = *((_BYTE *)a2 + 40);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsIntensitySupported(this, 0LL, a3);
  LOBYTE(v6) = *((_BYTE *)a2 + 41);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayCountSupported(this, 0LL, v6);
  LOBYTE(v7) = *((_BYTE *)a2 + 42);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayDurationSupported(this, 0LL, v7);
  LOBYTE(v8) = *((_BYTE *)a2 + 43);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsReplayPauseIntervalSupported(this, 0LL, v8);
}
