/*
 * XREFs of _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68
 * Callers:
 *     ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000ECD0 (-CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObje.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAudioProcessingObjectNotifications@@PEAUIAPOProcessingHost@@@Z @ 0x14000FF64 (--0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudi.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x1400123D8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CPrivateAPO@@QEAA@XZ @ 0x140014BB4 (--0CPrivateAPO@@QEAA@XZ.c)
 *     ?RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ @ 0x140014C18 (-RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ.c)
 *     ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14001504C (-Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAU.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050 (--_ECAPONode@@UEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_89f25345d625e50d879fcb99a1803143_::operator()(__int64 a1)
{
  void *v2; // rax
  CPrivateAPO *v3; // rax
  CPrivateAPO *v4; // r10
  int v5; // eax
  unsigned int v6; // edi
  void *v7; // rax
  CAPONode *v8; // rax
  struct IAudioProcessingObjectRT *v9; // rsi
  int v10; // eax
  struct IAudioProcessingObjectRT *v11; // rdi
  __int64 v12; // rcx
  struct IAudioProcessingObject *v13; // rdx
  int v15; // [rsp+20h] [rbp-98h]
  struct IAudioProcessingObjectConfiguration *v16; // [rsp+20h] [rbp-98h]
  struct IAudioProcessingObjectConfiguration *v17; // [rsp+50h] [rbp-68h] BYREF
  struct IAudioProcessingObjectRT *v18[3]; // [rsp+58h] [rbp-60h] BYREF
  CPrivateAPO *v19; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct IAudioProcessingObject *v22; // [rsp+D0h] [rbp+18h] BYREF
  struct IAudioProcessingObjectNotifications *v23; // [rsp+D8h] [rbp+20h] BYREF

  v19 = 0LL;
  v2 = AERTGetDLLRTHeap();
  v3 = (CPrivateAPO *)AERTAllocate(0x30uLL, v2);
  if ( v3 )
    v4 = CPrivateAPO::CPrivateAPO(v3);
  else
    v4 = 0LL;
  v19 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL,
      v15);
    goto LABEL_12;
  }
  v23 = 0LL;
  v17 = 0LL;
  v18[0] = 0LL;
  v22 = 0LL;
  v16 = **(struct IAudioProcessingObjectConfiguration ***)(a1 + 24);
  v5 = CPrivateAPO::Initialize(v4, *(_QWORD *)a1, **(_QWORD **)(a1 + 8), **(unsigned int **)(a1 + 16));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v5,
      (int)v16);
LABEL_17:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v23);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v18);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
    goto LABEL_12;
  }
  v7 = AERTGetDLLRTHeap();
  v8 = (CAPONode *)AERTAllocate(0x158uLL, v7);
  v20[0] = v8;
  if ( v8 )
    v9 = (struct IAudioProcessingObjectRT *)CAPONode::CAPONode(
                                              v8,
                                              *(const struct _GUID **)a1,
                                              v22,
                                              v18[0],
                                              v17,
                                              v23,
                                              *(struct IAPOProcessingHost **)(*(_QWORD *)(a1 + 32) + 104LL));
  else
    v9 = 0LL;
  v18[1] = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x132,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL,
      (int)v16);
    goto LABEL_17;
  }
  v10 = CAPONode::RegisterAPOWithProcessingHost((CAPONode *)v9);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v10,
      (int)v16);
    CAPONode::`vector deleting destructor'((CAPONode *)v9, 1u);
    goto LABEL_17;
  }
  **(_BYTE **)(a1 + 40) = v9[4].lpVtbl != 0LL;
  **(_BYTE **)(a1 + 48) = v23 != 0LL;
  v11 = (struct IAudioProcessingObjectRT *)(*(_QWORD *)(a1 + 32) + 64LL);
  v18[2] = v11;
  EnterCriticalSection((LPCRITICAL_SECTION)v11);
  v20[1] = v11;
  v12 = *(_QWORD *)(a1 + 32) + 112LL;
  v20[0] = v9;
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v12, v20);
  if ( v11 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v11);
  v13 = v22;
  v22 = 0LL;
  ***(_QWORD ***)(a1 + 56) = v13;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v23);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v18);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
  v6 = 0;
LABEL_12:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v19);
  return v6;
}
