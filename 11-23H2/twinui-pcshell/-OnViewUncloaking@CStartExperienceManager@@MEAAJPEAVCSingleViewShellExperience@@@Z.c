/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800623D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  bool v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+34h] [rbp-3Ch] BYREF
  struct tagRECT v6; // [rsp+38h] [rbp-38h] BYREF
  _WORD v7[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]

  v5 = 3;
  CStartExperienceManager::GetMonitorInformation(
    (CStartExperienceManager *)((char *)this - 96),
    a2,
    &v6,
    (enum EDGEUI_TRAYSTUCKPLACE *)&v5,
    &v4,
    0LL);
  v7[1] = *((_WORD *)this + 296);
  v7[2] = v5;
  v8 = *((_QWORD *)this + 75);
  v9 = *((_QWORD *)this + 76);
  v10 = *((_QWORD *)this + 77);
  v7[0] = 0;
  v7[3] = 0;
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v7, 32LL);
  return 0LL;
}
