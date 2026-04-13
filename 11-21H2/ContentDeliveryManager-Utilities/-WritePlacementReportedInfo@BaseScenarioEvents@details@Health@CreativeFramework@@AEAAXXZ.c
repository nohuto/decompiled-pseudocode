/*
 * XREFs of ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180066928
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180052998 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800535F4 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180057F48 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 * Callees:
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x1800532F8 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v4; // [rsp+68h] [rbp+10h] BYREF

  v4 = L"PlacementReported";
  if ( *((_BYTE *)this + 252) && *((_BYTE *)this + 251) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, L"PlacementReported", 0, 3u, (const BYTE *)this + 104, 0x24u) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>((__int64 *)&v4);
    }
    *((_BYTE *)this + 251) = 0;
    if ( hKey )
      RegCloseKey(hKey);
  }
}
