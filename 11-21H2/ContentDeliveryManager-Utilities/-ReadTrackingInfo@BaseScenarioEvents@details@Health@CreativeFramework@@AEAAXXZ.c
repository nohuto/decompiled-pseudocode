/*
 * XREFs of ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180063164
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005B438 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18005BA30 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 * Callees:
 *     memset_0 @ 0x18002245D (memset_0.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)((char *)this + 216);
  *(_WORD *)((char *)this + 249) = 256;
  v2 = *((_QWORD *)this + 30) < 8uLL;
  v3 = (_DWORD *)((char *)this + 8);
  pcbData = 92;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  if ( RegGetValueW(HKEY_CURRENT_USER, v1, 0LL, 8u, 0LL, (char *)this + 8, &pcbData)
    || pcbData <= 4
    || *(_BYTE *)v3 != 4 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 4;
    memset_0((char *)this + 16, 0, 0x58uLL);
  }
}
