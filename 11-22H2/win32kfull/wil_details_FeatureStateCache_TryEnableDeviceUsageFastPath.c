/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0139344
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1C01394F4 (wil_details_IsEnabledFallback.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C013AE0C (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C013B728 (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 *     Feature_ReadClipboardEvent__private_ReportDeviceUsage @ 0x1C013C564 (Feature_ReadClipboardEvent__private_ReportDeviceUsage.c)
 *     Feature_Emrbspi__private_ReportDeviceUsage @ 0x1C013D754 (Feature_Emrbspi__private_ReportDeviceUsage.c)
 *     Feature_Erpsrbspi__private_ReportDeviceUsage @ 0x1C013D7B8 (Feature_Erpsrbspi__private_ReportDeviceUsage.c)
 *     Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C013DDD8 (Feature_InkProcessor__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v5 | v6, v6);
    }
    while ( v7 != v6 );
  }
}
