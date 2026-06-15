/*
 * XREFs of ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140010AA0 (-ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D48 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x140010EE8 (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoPtr@VCConnectionNode@@@ATL@@QEAA@XZ @ 0x14007095C (--1-$CAutoPtr@VCConnectionNode@@@ATL@@QEAA@XZ.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070BA0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::CreateConnection(
        unsigned __int64 this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  void *v9; // rax
  CConnectionNode *v10; // rax
  CConnectionNode *v11; // rdi
  unsigned __int64 v12; // rcx
  int Connection; // eax
  int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CConnectionNode *v22; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+68h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 56));
  v23 = v3;
  if ( !*(_QWORD *)(this + 40) )
  {
    v8 = -2005139383;
    v16 = 525LL;
    v17 = 2289827913LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)v17,
      v20);
LABEL_16:
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v23);
    return v8;
  }
  v7 = ValidateAPOConnectionDescriptor(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = (unsigned int)v7;
    v16 = 528LL;
    goto LABEL_11;
  }
  v9 = AERTGetDLLRTHeap();
  v10 = (CConnectionNode *)AERTAllocate(0xA8uLL, v9);
  v11 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v22 = 0LL;
    v18 = 2147942414LL;
    v19 = 533LL;
    goto LABEL_15;
  }
  v12 = CConnectionNode::m_LastConnectionHandle;
  *(_QWORD *)v10 = &CConnectionNode::`vftable';
  *((_QWORD *)v10 + 2) = ++v12;
  *((_QWORD *)v10 + 13) = 0LL;
  *((_QWORD *)v10 + 14) = 0LL;
  CConnectionNode::m_LastConnectionHandle = v12;
  *((_QWORD *)v10 + 17) = 0LL;
  *((_QWORD *)v10 + 20) = 0LL;
  *((_QWORD *)v10 + 18) = 0LL;
  *((_QWORD *)v10 + 1) = 0LL;
  *((_QWORD *)v10 + 11) = 0LL;
  *((_QWORD *)v10 + 15) = 0LL;
  *((_QWORD *)v10 + 16) = 0LL;
  *((_QWORD *)v10 + 19) = 0LL;
  v22 = v10;
  Connection = CConnectionNode::CreateConnection(
                 v10,
                 a2,
                 (struct IDeviceGraphObjectCache *)(this & -(__int64)(this != 8)));
  v8 = Connection;
  if ( Connection < 0 )
  {
    v18 = (unsigned int)Connection;
    v19 = 536LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)v18,
      v20);
    ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>(&v22);
    goto LABEL_16;
  }
  v14 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InsertAfter(
          this + 152,
          v11);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = (unsigned int)v14;
    v19 = 545LL;
    goto LABEL_15;
  }
  *a3 = *((_QWORD *)v11 + 2);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
