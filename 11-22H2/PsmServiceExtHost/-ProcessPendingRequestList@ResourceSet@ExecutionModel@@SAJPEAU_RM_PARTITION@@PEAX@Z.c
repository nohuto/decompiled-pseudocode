/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000B420
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800086E8 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180011688 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180011FDC (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003C7C0 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040F38 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AAAC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050ED0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008B088 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18008B2A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008B374 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // r15
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbx
  struct _RM_ACTIVITY_HOST *v8; // r9
  unsigned int v9; // esi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  bool v13; // r14
  bool v14; // di
  unsigned int v15; // edx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  bool v20[8]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  _QWORD Block[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v29[48]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v30[128]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v31[24]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v32; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  void *v34; // [rsp+1D8h] [rbp+D0h]
  int v35; // [rsp+1E0h] [rbp+D8h]
  int v36; // [rsp+1E4h] [rbp+DCh]

  v2 = Block;
  v3 = (_QWORD *)((char *)a1 + 216);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB1E0, (int)&dword_1800C5488, 0, 0, 2u, &UserData);
    v5 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v5 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v30,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v31);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 3536) + 32LL);
    while ( (_QWORD *)*v3 != v3 )
    {
      v7 = *(_QWORD *)(*v3 - 16LL);
      v21 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v7 + 1336)) )
        RmpActivityHostQueryCommitDebt(v8, &v21);
      v9 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v7 + 1312));
      if ( (unsigned int)dword_1800DB1E0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
      {
        v12 = *(_QWORD *)(v7 + 1720);
        v25 = *(_QWORD *)(v6 + 128);
        v26 = *(_QWORD *)(v7 + 128);
        v27 = v32;
        v28 = v21;
        *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v7 + 104);
        v23 = v12;
        v20[0] = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v12,
          (unsigned int)&unk_1800C55DB,
          v10,
          v11,
          (__int64)&EventDescriptor,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)v20,
          (__int64)&v23);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v7 + 1320) + 56LL), Block, v7, v29);
      if ( ExecutionModel::ResourceSet::EvaluateResourceRequest(
             (ExecutionModel::ResourceSet *)v7,
             v21,
             (struct _RM_RESOURCE_USAGE_LIMITS *)v30,
             (struct _RM_SYSTEM_MEMORY_METRICS *)v31,
             (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v29,
             &v20[2],
             &v20[1]) < 0 )
        break;
      v13 = v20[2];
      v14 = v20[1];
      if ( v20[2] || (v15 = 1, v20[1]) )
        v15 = 0;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v7, v15, v9 == 0);
      if ( v13 || v14 || v9 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v29);
        break;
      }
      v16 = *(_DWORD *)(v7 + 1332);
      if ( (v16 & 4) == 0 )
        *(_DWORD *)(v7 + 1332) = v16 | 4;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v7, 1u);
    }
    v2 = (__int64 *)Block[0];
  }
  if ( (unsigned int)dword_1800DB1E0 <= 5 || (byte_1800DB1F0 & 1) == 0 || (qword_1800DB1F8 & 1) != qword_1800DB1F8 )
    goto LABEL_29;
  *(_DWORD *)&EventDescriptor.Level = 517;
  UserData.Ptr = (ULONGLONG)off_1800DB1E8;
  *(_DWORD *)&EventDescriptor.Id = 184549376;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
  v34 = &unk_1800C55C4;
  UserData.Reserved = 2;
  v35 = 22;
  v36 = 1;
  LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  while ( 1 )
  {
    v2 = (__int64 *)Block[0];
LABEL_29:
    if ( v2 == Block )
      break;
    v17 = (__int64 *)v2[1];
    v18 = *v2;
    *v17 = *v2;
    *(_QWORD *)(v18 + 8) = v17;
    ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(v2 + 2);
    operator delete(v2);
  }
  return 0LL;
}
