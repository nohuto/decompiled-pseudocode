/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x1C00A2104
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMConfigureDeviceFeedback @ 0x1C00DBFA0 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigurePointerDevice @ 0x1C018A990 (RIMConfigurePointerDevice.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C018C954 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDevicePDOSuppression @ 0x1C019A3DC (RIMSetDevicePDOSuppression.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C020F954 (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 336);
    if ( !(_DWORD)a2 )
    {
      RIMConfigurePointerDevice(*(_QWORD *)(a1 + 336), a1, *(_QWORD *)(a1 + 456));
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL) == 7 )
        ApiSetSetUserPTPEnabledPreference(a1, *(_QWORD *)(a1 + 456), v4);
      if ( (*(_DWORD *)(a1 + 200) & 0x400) != 0 )
      {
        if ( (*(&qword_1C0294F10 + 1) & 0x10000) != 0 )
          v5 = (unsigned int)*((char *)&qword_1C0294F10 + 5);
        else
          v5 = 0LL;
        RIMConfigureDeviceFeedback(a1, v5);
      }
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
      RIMSendLatencyMgtDeviceRequest(a1, v2 != 0);
  }
  if ( gbTtmEnabled )
  {
    LOBYTE(a2) = v2 == 1;
    RIMSetDevicePDOSuppression(a1, a2);
  }
  return 0LL;
}
