/*
 * XREFs of ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18008ECB0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x18001CB40 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001D450 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180029AB0 (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029ADC (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180029BC8 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyEnforcementSettings(struct _RM_ACTIVITY_HOST *P)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  int CommitLevel; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-30h] BYREF

  v9 = 0LL;
  RmpActivityHostQueryCommit(P, 0LL, &v9, &v10);
  RmpActivityHostAggregateCommitValues(P);
  v2 = v9;
  v3 = *((_QWORD *)P + 168);
  v4 = *((_QWORD *)P + 171);
  v5 = v4;
  v11[3] = 1LL;
  v11[2] = v4;
  if ( v9 >= v3 )
  {
    if ( v9 < *((_QWORD *)P + 169) )
    {
      v6 = v3;
      v3 = *((_QWORD *)P + 169);
    }
    else if ( v9 < *((_QWORD *)P + 170) )
    {
      v6 = *((_QWORD *)P + 169);
      v3 = *((_QWORD *)P + 170);
    }
    else
    {
      v6 = *((_QWORD *)P + 170);
      v3 = -1LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  RmpActivityHostComputeCommitEstimate(v9, v4, &v9, &v10);
  if ( v6 <= v9 )
    v6 = v9;
  if ( v2 <= v5 && v3 >= v10 )
    v3 = v10;
  v11[0] = v6;
  v11[1] = v3;
  CommitLevel = RmpActivityHostGetCommitLevel((char *)P + 1344, v2);
  RmpActivityHostPopulateRunnabilitySettings(P, (struct _RM_ENFORCEMENT_SETTINGS *)v11);
  RmpActivityHostUpdateCommitUseState((__int64)P, v2, CommitLevel);
  result = RmpActivityHostApplyEnforcementSettings((char *)P, (struct _RM_ENFORCEMENT_SETTINGS *)v11, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
