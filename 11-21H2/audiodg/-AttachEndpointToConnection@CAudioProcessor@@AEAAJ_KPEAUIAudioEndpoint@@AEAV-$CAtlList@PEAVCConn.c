/*
 * XREFs of ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14000A294
 * Callers:
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007430 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007560 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 * Callees:
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x14000A09C (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@_K@Z @ 0x14000A148 (-FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV-$CAtlList@PEAVCConnectionNo.c)
 *     ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x14000A170 (-ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEn.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000A450 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000A530 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@.c)
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x14000A5BC (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::AttachEndpointToConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioEndpoint *a3,
        __int64 a4,
        CConnectionNode **a5)
{
  __int64 v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  struct CConnectionNode *ConnectionInObjectCache; // rax
  __int64 v13; // rcx
  const struct CConnectionNode *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r10
  CAudioProcessor *v18; // rcx
  void *v19; // rax
  CConnectionNode *v20; // rax
  CConnectionNode *v21; // rbx
  CConnectionNode *v22; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CConnectionNode *v27; // [rsp+50h] [rbp+8h] BYREF

  v9 = *((_QWORD *)this + 96);
  v10 = *(_QWORD **)(*(_QWORD *)v9 + 48LL);
  do
  {
    if ( !v10 )
      goto LABEL_3;
    v24 = v10[2];
    v10 = (_QWORD *)*v10;
  }
  while ( *(struct IAudioEndpoint **)(v24 + 112) != a3 );
  if ( v24 )
LABEL_29:
    JUMPOUT(0x14003DF37LL);
LABEL_3:
  v11 = *(_QWORD **)(*(_QWORD *)v9 + 96LL);
  do
  {
    if ( !v11 )
      goto LABEL_5;
    v25 = v11[2];
    v11 = (_QWORD *)*v11;
  }
  while ( *(struct IAudioEndpoint **)(v25 + 112) != a3 );
  if ( v25 )
    goto LABEL_29;
LABEL_5:
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a2);
  v14 = ConnectionInObjectCache;
  if ( !ConnectionInObjectCache )
    goto LABEL_30;
  if ( CAudioProcessor::FindConnectionInList(
         v13,
         (_QWORD *)(**((_QWORD **)this + 96) + 48LL),
         *((_QWORD *)ConnectionInObjectCache + 2))
    || CAudioProcessor::FindConnectionInList(v15, (_QWORD *)(v17 + 96), v16) )
  {
    JUMPOUT(0x14003DF32LL);
  }
  if ( (int)CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(v18, v14, a3) < 0 )
LABEL_30:
    JUMPOUT(0x14003DF3CLL);
  v19 = AERTGetDLLRTHeap();
  v20 = (CConnectionNode *)AERTAllocate(0xA8uLL, v19);
  v27 = v20;
  if ( v20 )
    v21 = CConnectionNode::CConnectionNode(v20, v14);
  else
    v21 = 0LL;
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1F,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x8007000ELL,
      0);
    JUMPOUT(0x14003DF50LL);
  }
  if ( *((struct IAudioEndpoint **)v21 + 14) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)v21 + 14, (struct IUnknown *)a3);
  ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>(
    &v27,
    a3);
  v22 = v27;
  v27 = 0LL;
  *((_QWORD *)v21 + 17) = v22;
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v27);
  v27 = v21;
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::AddHead(a4, &v27);
  *a5 = v21;
  return 0LL;
}
