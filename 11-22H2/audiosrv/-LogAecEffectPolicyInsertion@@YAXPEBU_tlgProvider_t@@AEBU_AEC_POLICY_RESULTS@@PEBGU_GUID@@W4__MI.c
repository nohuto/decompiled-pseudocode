/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005352C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075148 (_lambda_cafd355bc8518bdbec11f1f0c823a855_--operator().c)
 * Callees:
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180053568 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUI.c)
 *     ??$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180148F38 (--$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL_.c)
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
    LogAecEffectPolicy<8>((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v6, a5);
  else
    LogAecEffectPolicy<70368744177672>((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v6, a5);
}
