/*
 * XREFs of ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000863C (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000FCC0 (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 *     ?ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1400107E8 (-ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D80 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x140068AD0 (-Find@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEA.c)
 *     ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x1400690B4 (-SwapRTPointer@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnecti.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::CreateConnection(
        CDeviceGraphObjectCache *this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        unsigned __int64 *a3)
{
  int v3; // r14d
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v8; // ebx
  BOOL inited; // eax
  unsigned int v10; // edi
  void *v11; // rdx
  CConnectionNode *v12; // rax
  CConnectionNode *v13; // rbx
  struct IDeviceGraphObjectCache *v14; // r8
  unsigned __int64 v15; // rax
  int Connection; // eax
  int v17; // r14d
  char *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r8
  CConnectionNode *v21; // rbp
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  int v26; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPVOID Context; // [rsp+60h] [rbp+8h] BYREF
  CConnectionNode *v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v26 = v3;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( !*((_QWORD *)this + 5) )
  {
    v8 = -2005139383;
    v23 = 525LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v8,
      v3);
    v10 = v8;
    goto LABEL_17;
  }
  if ( !a2 || a2->u32Signature != 1094927443 || !a2->u32MaxFrameCount )
  {
    v8 = -2147024809;
    goto LABEL_30;
  }
  v8 = ValidateUncompressedFrameFormat(a2->pFormat);
  if ( v8 < 0 )
  {
LABEL_30:
    v23 = 528LL;
    goto LABEL_31;
  }
  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
  v10 = 0;
  v11 = 0LL;
  if ( inited )
    v11 = Context;
  v12 = (CConnectionNode *)AERTAllocate(0xA8uLL, v11);
  v13 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 13) = 0LL;
    *(_QWORD *)v12 = &CConnectionNode::`vftable';
    v14 = 0LL;
    v15 = CConnectionNode::m_LastConnectionHandle + 1;
    *((_QWORD *)v13 + 2) = CConnectionNode::m_LastConnectionHandle + 1;
    *((_QWORD *)v13 + 14) = 0LL;
    CConnectionNode::m_LastConnectionHandle = v15;
    *((_QWORD *)v13 + 17) = 0LL;
    *((_QWORD *)v13 + 20) = 0LL;
    if ( this != (CDeviceGraphObjectCache *)8 )
      v14 = this;
    *((_QWORD *)v13 + 18) = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 11) = 0LL;
    *((_QWORD *)v13 + 15) = 0LL;
    *((_QWORD *)v13 + 16) = 0LL;
    *((_QWORD *)v13 + 19) = 0LL;
    Connection = CConnectionNode::CreateConnection(v13, a2, v14);
    v17 = Connection;
    if ( Connection < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)Connection,
        v26);
      v21 = v13;
    }
    else
    {
      v18 = (char *)this + 152;
      v29 = v13;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
      v17 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
              (char *)this + 152,
              v13,
              v19,
              *((unsigned __int16 *)this + 132) ^ 1u);
      v21 = v13;
      if ( v17 < 0 )
        goto LABEL_15;
      while ( !_InterlockedCompareExchange64(
                 (volatile signed __int64 *)v18 + 12,
                 (signed __int64)&v18[48 * (*((unsigned __int16 *)v18 + 56) ^ 1LL)],
                 (signed __int64)&v18[48 * *((unsigned __int16 *)v18 + 56)]) )
        Sleep(1u);
      *((_WORD *)v18 + 56) ^= 1u;
      v17 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
              v18,
              v13,
              v20,
              *((unsigned __int16 *)v18 + 56) ^ 1u);
      if ( v17 < 0 )
      {
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(v18);
        v24 = (_QWORD *)ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(
                          &v18[48 * (*((unsigned __int16 *)v18 + 56) ^ 1LL)],
                          &v29);
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v25, v24);
        LeaveCriticalSection((LPCRITICAL_SECTION)v18 + 3);
      }
      else
      {
LABEL_15:
        LeaveCriticalSection((LPCRITICAL_SECTION)v18 + 3);
        if ( v17 >= 0 )
        {
          *a3 = *((_QWORD *)v13 + 2);
          goto LABEL_17;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x221,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v17,
        v26);
    }
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL,
      v26);
    v21 = 0LL;
  }
  v10 = v17;
  if ( v21 )
    (**(void (__fastcall ***)(CConnectionNode *, __int64))v21)(v21, 1LL);
LABEL_17:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
