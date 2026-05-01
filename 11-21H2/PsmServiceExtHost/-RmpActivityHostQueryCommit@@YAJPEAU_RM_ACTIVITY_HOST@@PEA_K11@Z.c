/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpTracingControlCallback @ 0x180047450 (RmpTracingControlCallback.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180079540 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180086D28 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800871F0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180087598 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x18002A4A4 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002A59C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  ModernResourceEnforcer *v7; // r10
  char v8; // al
  unsigned int v9; // ecx
  const unsigned __int16 *v10; // r14
  __int64 result; // rax
  int v12; // eax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  bool v15; // sf
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  int v21; // ecx
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v31; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v32; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  __int64 *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]

  v4 = *((_QWORD *)a1 + 6);
  v31 = a2;
  v32 = a3;
  v7 = *(ModernResourceEnforcer **)(v4 + 40);
  v8 = *((_BYTE *)a1 + 656);
  if ( v8 )
  {
    v9 = 8;
    if ( v8 == 1 )
      v9 = 4;
  }
  else
  {
    v9 = 0;
  }
  v10 = (const unsigned __int16 *)((char *)a1 + 88);
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             v7,
             (const unsigned __int16 *)a1 + 44,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             *((_DWORD *)a1 + 155),
             *((_DWORD *)a1 + 156),
             *((_QWORD *)a1 + 4),
             v9,
             &v23,
             (unsigned __int64 *)&EventDescriptor.Id);
  if ( (int)result >= 0 )
  {
    v12 = RmpActivityHostQueryCommitDebt(a1, &v24);
    v13 = v23;
    v14 = v24;
    v15 = v12 < 0;
    v16 = v23;
    if ( v15 )
      v14 = 0LL;
    v24 = v14;
    if ( v14 < v23 )
      v16 = v14;
    v17 = v23 - v16;
    if ( v23 && v17 <= 1 )
      v17 = 1LL;
    v18 = *(_QWORD *)&EventDescriptor.Id;
    v19 = v17 + *(_QWORD *)&EventDescriptor.Id;
    if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    {
      v22 = *((_DWORD *)a1 + 156);
      v30 = *((_QWORD *)a1 + 4);
      v50 = &v26;
      v48 = &v27;
      v46 = &v28;
      v44 = &v29;
      v42 = &v22;
      v26 = v14;
      v27 = *(_QWORD *)&EventDescriptor.Id;
      v28 = v23;
      v29 = v17 + *(_QWORD *)&EventDescriptor.Id;
      v51 = 8LL;
      v49 = 8LL;
      v47 = 8LL;
      v45 = 8LL;
      v43 = 4LL;
      if ( a1 == (struct _RM_ACTIVITY_HOST *)-88LL )
      {
        v10 = &word_1800B7A9C;
        v21 = 2;
      }
      else
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v10[v20] );
        v21 = 2 * v20 + 2;
      }
      v40 = v21;
      v37 = &v30;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800DC1E8;
      EventDescriptor.Keyword = 1LL;
      v39 = v10;
      v41 = 0;
      v38 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
      v34 = &unk_1800C3A4A;
      v36 = 1;
      UserData.Reserved = 2;
      v35 = 150;
      LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
    if ( v31 )
      *v31 = v17;
    if ( v32 )
      *v32 = v13 + v18;
    if ( a4 )
      *a4 = v19;
    return 0LL;
  }
  return result;
}
