/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180035090
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002A59C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A410 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18003CEC8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800480BC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ??1?$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18004DCD0 (--1-$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180083D64 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087514 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008D8D4 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DD24 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18008DF40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008E320 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18008E3CC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18008E5D0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r15d
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int16 v17; // [rsp+68h] [rbp-A0h] BYREF
  char v18; // [rsp+6Ah] [rbp-9Eh] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  _QWORD Block[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v27[48]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v28[128]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v29[24]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v30; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  void *v32; // [rsp+1D8h] [rbp+D0h]
  int v33; // [rsp+1E0h] [rbp+D8h]
  int v34; // [rsp+1E4h] [rbp+DCh]

  v2 = Block;
  v3 = (_QWORD *)((char *)a1 + 216);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC1E0,
        (unsigned __int8 *)dword_1800C49C1,
        0LL,
        0LL,
        2u,
        &UserData);
    v6 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v6 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v28,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v29);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 3232) + 32LL);
    while ( (_QWORD *)*v3 != v3 )
    {
      v8 = *(_QWORD *)(*v3 - 32LL);
      v9 = *(_QWORD *)(v8 + 1320);
      v19 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v8 + 1336)) )
        RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v9, &v19);
      v10 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v8 + 1312));
      if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v13 = *(_QWORD *)(v8 + 1752);
        v23 = *(_QWORD *)(v7 + 128);
        v24 = *(_QWORD *)(v8 + 128);
        v25 = v30;
        v26 = v19;
        *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v8 + 104);
        v21 = v13;
        v18 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v13,
          (unsigned int)&unk_1800C4DC2,
          v11,
          v12,
          (__int64)&EventDescriptor,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v18,
          (__int64)&v21);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v8 + 1312) + 64LL), Block, v8, v27);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(
                  v8,
                  v19,
                  1LL,
                  v28,
                  v29,
                  v27,
                  &v17,
                  (char *)&v17 + 1) < 0 )
        break;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v8, v17 == 0, v10 == 0);
      if ( v17 || v10 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v27);
        break;
      }
      v14 = *(_DWORD *)(v8 + 1332);
      if ( (v14 & 4) == 0 )
      {
        *(_DWORD *)(v8 + 1332) = v14 | 4;
        RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v9, 1u);
      }
      if ( (*(_BYTE *)(v9 + 852) & 1) == 0 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v9) )
        break;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v8, 1u);
    }
    v2 = (__int64 *)Block[0];
  }
  if ( (unsigned int)dword_1800DC1E0 <= 5 || (byte_1800DC1F0 & 1) == 0 || (qword_1800DC1F8 & 1) != qword_1800DC1F8 )
    goto LABEL_7;
  *(_DWORD *)&EventDescriptor.Level = 517;
  UserData.Ptr = (ULONGLONG)off_1800DC1E8;
  *(_DWORD *)&EventDescriptor.Id = 184549376;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
  v32 = &unk_1800C48CC;
  UserData.Reserved = 2;
  v33 = 22;
  v34 = 1;
  LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  while ( 1 )
  {
    v2 = (__int64 *)Block[0];
LABEL_7:
    if ( v2 == Block )
      break;
    v15 = (__int64 *)v2[1];
    v16 = *v2;
    *v15 = *v2;
    *(_QWORD *)(v16 + 8) = v15;
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(v2 + 2);
    operator delete(v2);
  }
  return 0LL;
}
