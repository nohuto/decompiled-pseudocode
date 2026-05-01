/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800080A0
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007EE0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000C110 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x1800395E0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180039F0C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003A090 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18003B010 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18003D480 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AAAC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18008B938 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18008BD64 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::_ResourceInfo *v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // edx
  void **v5; // rbx
  _QWORD *i; // rbx
  __int64 v7; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rcx
  bool v13; // zf
  void **v14; // rdx
  _QWORD *v15; // rax
  char v16; // [rsp+50h] [rbp-B0h] BYREF
  char v17; // [rsp+51h] [rbp-AFh] BYREF
  char v18; // [rsp+52h] [rbp-AEh] BYREF
  char v19[5]; // [rsp+53h] [rbp-ADh] BYREF
  void *Block[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v22[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v23[1136]; // [rsp+90h] [rbp-70h] BYREF

  Block[2] = 0LL;
  Block[0] = Block;
  v1 = (ExecutionModel::_ResourceInfo *)v23;
  Block[1] = Block;
  v3 = 47LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v1);
    v1 = (ExecutionModel::_ResourceInfo *)((char *)v1 + 24);
    --v3;
  }
  while ( v3 );
  if ( *((_DWORD *)this + 4) == 1 )
  {
    RmpPartitionTableActOnActivePartitions(
      (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 312LL),
      v4,
      (int (*)(struct _RM_PARTITION *, void *))ExecutionModel::ResourceSet::ProcessPendingRequestList,
      0LL);
  }
  else
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 5); i != (_QWORD *)((char *)this + 40); i = (_QWORD *)*i )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v21, i[2]);
      if ( *(_DWORD *)(v21 + 1280) == 1 && (int)ExecutionModel::BaseResourceSet::AddToListPrioritized(Block) < 0 )
      {
        ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&v21);
        goto LABEL_5;
      }
      ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(&v21);
    }
    v5 = (void **)Block[0];
    if ( Block[0] == Block )
      goto LABEL_6;
    while ( v5 != Block )
    {
      v7 = (__int64)v5[2];
      v22[0] = v22;
      v8 = v23;
      v22[2] = 0LL;
      v22[1] = v22;
      v9 = 8LL;
      v10 = v7 + 144;
      do
      {
        v8 += 128;
        v11 = *(_OWORD *)v10;
        v10 += 128LL;
        *((_OWORD *)v8 - 8) = v11;
        *((_OWORD *)v8 - 7) = *(_OWORD *)(v10 - 112);
        *((_OWORD *)v8 - 6) = *(_OWORD *)(v10 - 96);
        *((_OWORD *)v8 - 5) = *(_OWORD *)(v10 - 80);
        *((_OWORD *)v8 - 4) = *(_OWORD *)(v10 - 64);
        *((_OWORD *)v8 - 3) = *(_OWORD *)(v10 - 48);
        *((_OWORD *)v8 - 2) = *(_OWORD *)(v10 - 32);
        *((_OWORD *)v8 - 1) = *(_OWORD *)(v10 - 16);
        --v9;
      }
      while ( v9 );
      *(_OWORD *)v8 = *(_OWORD *)v10;
      *((_OWORD *)v8 + 1) = *(_OWORD *)(v10 + 16);
      *((_OWORD *)v8 + 2) = *(_OWORD *)(v10 + 32);
      *((_OWORD *)v8 + 3) = *(_OWORD *)(v10 + 48);
      *((_OWORD *)v8 + 4) = *(_OWORD *)(v10 + 64);
      *((_OWORD *)v8 + 5) = *(_OWORD *)(v10 + 80);
      *((_QWORD *)v8 + 12) = *(_QWORD *)(v10 + 96);
      if ( (int)ExecutionModel::BaseResourceSet::CheckResourceAvailability(
                  (_DWORD)this,
                  47,
                  (unsigned int)v23,
                  *(_DWORD *)(v7 + 8),
                  *(_DWORD *)(v7 + 1288),
                  1,
                  (__int64)&v17,
                  (__int64)&v16,
                  (__int64)v22) < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v22);
        break;
      }
      if ( v16 )
      {
        if ( v17 )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v12, v22);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            (_DWORD)this,
            1,
            47,
            (unsigned int)v23,
            *(_DWORD *)(v7 + 8),
            1,
            (__int64)v19,
            (__int64)&v18,
            0LL,
            v7);
          v13 = (*(_BYTE *)(v7 + 1352) & 2) == 0;
          *(_DWORD *)(v7 + 1280) = 2;
          if ( v13 )
            ExecutionModel::ExternalResourceSet::QueueMessage(v7, 0LL);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v22);
      v5 = (void **)*v5;
    }
  }
LABEL_5:
  while ( 1 )
  {
    v5 = (void **)Block[0];
LABEL_6:
    if ( v5 == Block )
      break;
    v14 = (void **)v5[1];
    v15 = *v5;
    *v14 = *v5;
    v15[1] = v14;
    ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(v5 + 2);
    operator delete(v5);
  }
}
