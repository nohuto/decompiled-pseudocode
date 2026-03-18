/*
 * XREFs of HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x1C0083F40
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0075090 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sq @ 0x1C0031D08 (WPP_RECORDER_SF_Sq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1[2];
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v1,
             1LL,
             131097LL,
             0LL,
             &v13);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v4 = 155;
    goto LABEL_4;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
             WdfDriverGlobals,
             0LL,
             0LL,
             &v12);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
               WdfDriverGlobals,
               v13,
               &g_Usb4HostName,
               v12);
    if ( (int)result >= 0 )
    {
      v5 = v12;
      a1[345] = v12;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
                 WdfDriverGlobals,
                 v5,
                 &v11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = WPP_RECORDER_SF_Sq(a1[315], v6, v7, v8, v9, *((const wchar_t **)&v11 + 1));
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 157;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 156;
LABEL_4:
    LODWORD(v10) = result;
    result = WPP_RECORDER_SF_d(a1[315], 2u, 5u, v4, (__int64)&WPP_ec435a79b99d323019775391632c21d3_Traceguids, v10);
  }
LABEL_13:
  if ( v13 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
