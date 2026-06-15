/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B63C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800469F8 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_d964387455321ab6cd7bc18fda753d22_::operator() @ 0x1800692D8 (_lambda_d964387455321ab6cd7bc18fda753d22_--operator().c)
 * Callees:
 *     ??$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180142C94 (--$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL_.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180142DF4 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUI.c)
 */

void __fastcall LogAecEffectPolicyInsertion(
        const struct _tlgProvider_t *a1,
        const struct _AEC_POLICY_RESULTS *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5)
{
  bool v5; // zf
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a2 + 15) == 4;
  v6 = (__int128)*a4;
  if ( v5 )
    LogAecEffectPolicy<8>((__int64)a1, (int *)a2, (__int64)a3, (__int64)&v6, a5);
  else
    LogAecEffectPolicy<70368744177672>((__int64)a1, (int *)a2, (__int64)a3, (__int64)&v6, a5);
}
