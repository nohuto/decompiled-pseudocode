/*
 * XREFs of ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1802D4948
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACC14 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

char __fastcall CToastCenterExperienceManager::ShouldShowWithinWorkArea(CToastCenterExperienceManager *this)
{
  __int64 v2; // r9
  char v3; // bl
  bool v4; // zf
  char v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( !IsPPIEdition() )
  {
    v4 = *((_BYTE *)this + 448) == 0;
    return !v4;
  }
  v4 = *((_BYTE *)this + 448) == 0;
  if ( !*((_BYTE *)this + 448) )
    return !v4;
  v6 = 0;
  v7 = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>((__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE, &v6, (__int64)&v7, v2) < 0
    || !v6
    || !v7 )
  {
    return 1;
  }
  return v3;
}
