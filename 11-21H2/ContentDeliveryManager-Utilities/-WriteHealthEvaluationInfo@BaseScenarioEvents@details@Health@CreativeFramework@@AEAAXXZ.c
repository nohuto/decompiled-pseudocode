/*
 * XREFs of ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18006682C
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180057F48 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005B438 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x1800532F8 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v4; // [rsp+68h] [rbp+10h] BYREF

  v4 = L"HealthEvaluation";
  if ( *((_BYTE *)this + 254) && *((_BYTE *)this + 253) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, L"HealthEvaluation", 0, 3u, (const BYTE *)this + 144, 0x24u) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>((__int64 *)&v4);
    }
    *((_BYTE *)this + 253) = 0;
    if ( hKey )
      RegCloseKey(hKey);
  }
}
