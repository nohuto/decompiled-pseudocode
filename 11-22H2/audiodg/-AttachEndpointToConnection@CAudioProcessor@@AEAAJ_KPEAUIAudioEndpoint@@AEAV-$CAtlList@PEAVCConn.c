/*
 * XREFs of ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14
 * Callers:
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001BCF0 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001CAF0 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000DC74 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x14000E594 (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x1400103E0 (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@_K@Z @ 0x14001048C (-FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV-$CAtlList@PEAVCConnectionNo.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14001CDB4 (--0-$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1-_GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572@.c)
 *     ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x14001CDFC (-ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::AttachEndpointToConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioEndpoint *a3,
        __int64 *a4,
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
  int v20; // r8d
  CConnectionNode *v21; // rax
  CConnectionNode *v22; // rbx
  __int64 v23; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CConnectionNode *v28; // [rsp+50h] [rbp+8h] BYREF

  v9 = *((_QWORD *)this + 96);
  v10 = *(_QWORD **)(*(_QWORD *)v9 + 48LL);
  do
  {
    if ( !v10 )
      goto LABEL_3;
    v25 = v10[2];
    v10 = (_QWORD *)*v10;
  }
  while ( *(struct IAudioEndpoint **)(v25 + 112) != a3 );
  if ( v25 )
LABEL_27:
    JUMPOUT(0x140046A4DLL);
LABEL_3:
  v11 = *(_QWORD **)(*(_QWORD *)v9 + 96LL);
  do
  {
    if ( !v11 )
      goto LABEL_5;
    v26 = v11[2];
    v11 = (_QWORD *)*v11;
  }
  while ( *(struct IAudioEndpoint **)(v26 + 112) != a3 );
  if ( v26 )
    goto LABEL_27;
LABEL_5:
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a2);
  v14 = ConnectionInObjectCache;
  if ( !ConnectionInObjectCache )
    goto LABEL_28;
  if ( CAudioProcessor::FindConnectionInList(
         v13,
         (_QWORD *)(**((_QWORD **)this + 96) + 48LL),
         *((_QWORD *)ConnectionInObjectCache + 2))
    || CAudioProcessor::FindConnectionInList(v15, (_QWORD *)(v17 + 96), v16) )
  {
    JUMPOUT(0x140046A48LL);
  }
  if ( (int)CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(v18, v14, a3) < 0 )
LABEL_28:
    JUMPOUT(0x140046A52LL);
  v19 = (void *)AERTGetDLLRTHeap();
  v21 = (CConnectionNode *)AERTAllocate(0xA8uLL, v19, v20);
  v28 = v21;
  if ( v21 )
    v22 = CConnectionNode::CConnectionNode(v21, v14);
  else
    v22 = 0LL;
  if ( !v22 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1F,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x8007000ELL,
      0);
    JUMPOUT(0x140046A66LL);
  }
  if ( *((struct IAudioEndpoint **)v22 + 14) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)v22 + 14, (struct IUnknown *)a3);
  ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572>(
    &v28,
    a3);
  v23 = (__int64)v28;
  v28 = 0LL;
  *((_QWORD *)v22 + 17) = v23;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v28);
  v28 = v22;
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::AddHead(a4, (__int64)&v28);
  *a5 = v22;
  return 0LL;
}
