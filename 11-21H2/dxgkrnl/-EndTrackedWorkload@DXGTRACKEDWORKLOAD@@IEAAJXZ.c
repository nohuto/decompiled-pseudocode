/*
 * XREFs of ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0344CCC
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0345DD8 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1C004AEA8 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0081D48 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?Scale@RollingStats@@QEAAXN@Z @ 0x1C0081F48 (-Scale@RollingStats@@QEAAXN@Z.c)
 *     ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C0081F8C (-SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z.c)
 *     ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C02CCDC0 (-DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLE.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(DXGTRACKEDWORKLOAD *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rdi
  signed int v7; // r12d
  unsigned int v8; // r15d
  UINT v9; // ecx
  UINT EffectivePowerLevel; // esi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+28h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  unsigned int v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-1Ch] BYREF
  _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL v22; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  LODWORD(v6) = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TrackedWorkloadDirectDeadline__private_reporting,
    0xF20B64u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
  v7 = 0;
  v20 = 0;
  v8 = 0;
  v21 = 0;
  if ( !DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
  {
    if ( !TrackedWorkloadMonitor::GetTargetPowerLevel(
            (DXGTRACKEDWORKLOAD *)((char *)this + 328),
            (DXGTRACKEDWORKLOAD *)((char *)this + 232),
            &v20,
            &v21) )
      return (unsigned int)v6;
    v7 = v20;
    v8 = v21;
  }
  v9 = v8;
  *(_QWORD *)&v22.EffectivePowerLevel = 0LL;
  if ( DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
    v9 = DXGTRACKEDWORKLOAD::m_bypassPowerLevel;
  EffectivePowerLevel = 1;
  v22.PowerLevel = v9;
  if ( *((_DWORD *)this + 270) )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)this + v4 + 71);
      v12 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
              *(ADAPTER_RENDER **)(*(_QWORD *)(v11 + 16) + 16LL),
              *(void **)(v11 + 184),
              &v22);
      v6 = v12;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v19) = v12;
        LODWORD(v18) = v22.EffectivePowerLevel;
        LODWORD(v17) = v8;
        LODWORD(v16) = v7;
        LODWORD(v15) = v4;
        McTemplateK0pqqqqq_EtwWriteTransfer(
          v22.EffectivePowerLevel,
          &TrackedWorkloadSetPowerLevel,
          v13,
          this,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( (int)v6 < 0 )
        break;
      if ( EffectivePowerLevel <= v22.EffectivePowerLevel )
        EffectivePowerLevel = v22.EffectivePowerLevel;
      if ( ++v4 >= *((_DWORD *)this + 270) )
        goto LABEL_13;
    }
    WdLogSingleEntry2(3LL, v6, 1983LL);
  }
  else
  {
LABEL_13:
    TrackedWorkloadMonitor::SetEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328), EffectivePowerLevel, 0);
    RollingStats::Scale((DXGTRACKEDWORKLOAD *)((char *)this + 232), (double)v7 / (double)(int)EffectivePowerLevel);
  }
  return (unsigned int)v6;
}
