/*
 * XREFs of UsbhGetHubPowerStatus @ 0x1C002C868
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x1C002C9B4 (UsbhGetMaxPowerPerPort.c)
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhQueryHubState @ 0x1C003912C (UsbhQueryHubState.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbx
  int HubState; // eax
  int v4; // r10d

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  if ( *((_QWORD *)v2 + 328) )
  {
    HubState = UsbhQueryHubState(a1);
    Log(a1, 8, 1752396916, 0LL, HubState);
    if ( v4 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            33,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
      }
      v2[762] = 500;
    }
  }
  else
  {
    v2[762] = 0;
  }
}
