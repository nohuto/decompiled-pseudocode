/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180050180
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800502D0 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800504C4 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18008CC20 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C670 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18003C590 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18004BC88 (-HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x1800849AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_tl.c)
 */

void __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, int a2, int a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ebx
  int v15; // ebx
  _QWORD v16[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+50h] BYREF
  int v19; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp+60h] BYREF

  v17 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v17);
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64);
  v7 = 4;
  if ( dword_1800DB1E0 )
  {
    HampHostAcquireLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    v8 = v17;
    v9 = (unsigned __int8)HampHostComputeEffectivePriority((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
    HampHostReleaseLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), v10);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v16[0] = *(_QWORD *)(a1 + 32);
      v19 = v9;
      v20 = v8;
      LODWORD(v17) = a3;
      LOBYTE(v18) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1800C40DE,
        v12,
        v13,
        (__int64)v16,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
  v14 = a2 - 1;
  if ( v14 && (v15 = v14 - 1) != 0 )
  {
    if ( v15 == 1 )
      v7 = 3;
  }
  else
  {
    v7 = 1;
  }
  HampHostAcquireLockExclusiveEx(v6, 0);
  HampHostQueueTerminateEx((__int64)v6, v7, (unsigned __int8)a3 | 0x700, 0LL, 3, 0, 0LL, &v18);
  HampHostReleaseLockExclusiveEx(v6);
}
