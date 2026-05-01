/*
 * XREFs of ??$wnf_publish_nothrow@USTART_GLOBAL_ANIMATION_DATA@StartExperienceEvents@@@wil@@YAJAEBU_WNF_STATE_NAME@@AEBUSTART_GLOBAL_ANIMATION_DATA@StartExperienceEvents@@@Z @ 0x1802D526C
 * Callers:
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800336F0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::wnf_publish_nothrow<StartExperienceEvents::START_GLOBAL_ANIMATION_DATA>(__int64 a1, __int64 a2)
{
  return RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, a2, 8LL) | 0x10000000;
}
