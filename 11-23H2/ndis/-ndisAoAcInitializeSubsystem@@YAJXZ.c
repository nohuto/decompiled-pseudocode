/*
 * XREFs of ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x1C01617C0
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS ndisAoAcInitializeSubsystem(void)
{
  NTSTATUS result; // eax
  int v1; // eax
  NTSTATUS v2; // eax
  char v3[8]; // [rsp+28h] [rbp-30h]
  unsigned __int8 OutputBuffer[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF

  OutputBuffer[0] = 0;
  result = ZwPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u);
  if ( result >= 0 )
    ndisAoAcCapable = OutputBuffer[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v5 = 0LL;
    v6 = WNF_PO_SCENARIO_CHANGE;
    v1 = ExSubscribeWnfStateChange(&v5, &v6, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v1 < 0 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = v1;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xBu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        *(_QWORD *)v3);
    }
    v2 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
           0LL,
           0LL);
    if ( v2 < 0 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = v2;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xCu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        *(_QWORD *)v3);
    }
    result = PoRegisterPowerSettingCallback(
               0LL,
               &GUID_LOW_POWER_EPOCH,
               (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
               0LL,
               0LL);
    if ( result < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v3 = result;
        WPP_RECORDER_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0xDu,
          (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
          *(_QWORD *)v3);
      }
      result = 0;
    }
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  return result;
}
