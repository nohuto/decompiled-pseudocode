/*
 * XREFs of Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006E350
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C006DFF8 (Controller_SetDeviceDescription.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

char __fastcall Controller_DriverInstalledDueToCompatibleIdMatch(_QWORD *a1)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS DevicePropertyData; // eax
  int v5; // edx
  int v6; // edi
  const wchar_t **i; // rsi
  ULONG Type; // [rsp+40h] [rbp-238h] BYREF
  ULONG RequiredSize[7]; // [rsp+44h] [rbp-234h] BYREF
  wchar_t Str1[256]; // [rsp+60h] [rbp-218h] BYREF

  v2 = 0;
  Type = 0;
  RequiredSize[0] = 0;
  memset(Str1, 0, 0x1FEuLL);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                                  WdfDriverGlobals,
                                  *a1);
  DevicePropertyData = IoGetDevicePropertyData(
                         v3,
                         &DEVPKEY_Device_MatchingDeviceId,
                         0,
                         0,
                         0x1FCu,
                         Str1,
                         RequiredSize,
                         &Type);
  if ( DevicePropertyData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        a1[9],
        v5,
        4,
        144,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        DevicePropertyData);
    }
  }
  else
  {
    v6 = 0;
    for ( i = (const wchar_t **)XhciCompatibleIdList; _wcsicmp(Str1, *i); ++i )
    {
      if ( (unsigned int)++v6 >= 2 )
        return v2;
    }
    return 1;
  }
  return v2;
}
