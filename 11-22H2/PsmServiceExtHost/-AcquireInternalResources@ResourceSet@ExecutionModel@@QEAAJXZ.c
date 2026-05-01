/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050828
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18004F864 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800086E8 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180011688 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180011964 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180011FDC (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@443344@Z @ 0x180029E54 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U2@U2@@-$_tlgWriteTemplat.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180039F0C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003C7C0 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18003D480 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180040F38 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x180050ED0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008B088 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008B374 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // r9
  int v9; // r12d
  int v10; // edi
  bool v11; // si
  bool v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  bool v17[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v26[4]; // [rsp+C0h] [rbp-48h] BYREF
  bool v27; // [rsp+E0h] [rbp-28h]
  bool v28; // [rsp+E4h] [rbp-24h]
  _BYTE v29[128]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v30[24]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v31; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v33; // [rsp+1D8h] [rbp+D0h]
  __int64 v34; // [rsp+1E0h] [rbp+D8h]
  __int64 *v35; // [rsp+1E8h] [rbp+E0h]
  __int64 v36; // [rsp+1F0h] [rbp+E8h]
  __int64 *v37; // [rsp+1F8h] [rbp+F0h]
  __int64 v38; // [rsp+200h] [rbp+F8h]
  __int64 *v39; // [rsp+208h] [rbp+100h]
  __int64 v40; // [rsp+210h] [rbp+108h]
  __int64 *v41; // [rsp+218h] [rbp+110h]
  __int64 v42; // [rsp+220h] [rbp+118h]
  __int64 *v43; // [rsp+228h] [rbp+120h]
  __int64 v44; // [rsp+230h] [rbp+128h]

  v1 = *((_QWORD *)this + 165);
  v2 = *((_QWORD *)this + 8);
  v22[0] = v22;
  v22[1] = v22;
  v4 = 0;
  v5 = *((_QWORD *)this + 3);
  v22[2] = 0LL;
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)(v1 + 56),
    (struct _RM_POLICY *)(*(_QWORD *)(v5 + 128) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v29,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v30);
  v21 = 0LL;
  if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::ResourceSet *)((char *)this + 1336)) )
    RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v1, &v21);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v20 = *(_QWORD *)(v2 + 128);
    v19 = *((_QWORD *)this + 184);
    v18 = v31;
    v24 = *((_QWORD *)this + 181);
    v25 = *((_QWORD *)this + 215);
    v43 = &v20;
    v41 = &v19;
    v39 = &v18;
    v37 = &v23;
    v35 = &v24;
    v33 = &v25;
    v23 = v8;
    v44 = (unsigned int)(v6 - 1);
    v42 = v44;
    v40 = v44;
    v38 = v44;
    v36 = v44;
    v34 = v44;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C5406,
      0LL,
      0LL,
      v44,
      &v32);
  }
  v9 = RmpResourceCheckDestroyPartitionForAcquire(*((struct _RM_RESOURCE_SET **)this + 164), v6, v7);
  RmpPolicyInitializeRevokeContext(*(_QWORD *)(*((_QWORD *)this + 165) + 56LL), (__int64)v22, (__int64)this, v26);
  v10 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
          this,
          v21,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v29,
          (struct _RM_SYSTEM_MEMORY_METRICS *)v30,
          (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v26,
          &v17[1],
          v17);
  v11 = v17[0];
  v12 = v17[1];
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v17[0] = v27;
    v17[1] = v28;
    LODWORD(v18) = *(_DWORD *)(v26[3] + 40LL);
    LODWORD(v19) = *(_DWORD *)(v26[1] + 16LL);
    v17[2] = v9;
    v17[3] = v11;
    v17[4] = v12;
    LODWORD(v20) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (unsigned int)v19,
      byte_1800C530A,
      v13,
      v14,
      (__int64)&v20,
      (__int64)&v17[4],
      (__int64)&v17[3],
      (__int64)&v17[2],
      (__int64)&v19,
      (__int64)&v18,
      (__int64)v17,
      (__int64)&v17[1]);
  }
  if ( v10 >= 0 )
  {
    v15 = 1;
    if ( v12 || v11 || v9 )
      v4 = 1;
    if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized((_QWORD *)(v2 + 40), (__int64)this) >= 0 )
    {
      if ( v4 )
      {
        *((_DWORD *)this + 432) = CempQueryUnbiasedInterruptTimeMs64();
        if ( v12 || v11 )
          v15 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats(this, v15, v9 == 0);
        if ( v12 || v11 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v26);
      }
      else
      {
        *((_DWORD *)this + 320) = 1;
        ExecutionModel::ResourceSet::CompleteAcquire(this, 1);
      }
      v10 = 0;
    }
    else
    {
      v10 = -2147024882;
    }
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v22);
  return (unsigned int)v10;
}
