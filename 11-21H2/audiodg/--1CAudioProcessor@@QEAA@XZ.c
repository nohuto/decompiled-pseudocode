/*
 * XREFs of ??1CAudioProcessor@@QEAA@XZ @ 0x140022288
 * Callers:
 *     ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x14002244C (--1-$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140008510 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14000BF30 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x14000C9F0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x1400221BC (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x1400223BC (--1-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140068B94 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140068BBC (-GetHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionN.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 */

void __fastcall CAudioProcessor::~CAudioProcessor(CAudioProcessor *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 Head; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioProcessor::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &CAudioProcessor::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &CAudioProcessor::`vftable'{for `IAudioLogging'};
  v9 = 0LL;
  *((_BYTE *)this + 779) = 1;
  if ( *((_BYTE *)this + 776) )
  {
    v2 = *((_QWORD *)this + 96);
    if ( v2 )
    {
      CAudioProcessor::CancelGraphChanges(this, *(_QWORD *)(v2 + 16));
      v2 = *((_QWORD *)this + 96);
    }
    if ( *((_BYTE *)this + 778) )
    {
      v5 = 1000LL;
      if ( v2 )
        v5 = *(_QWORD *)(v2 + 16);
      v9 = v5;
      CAudioProcessor::CommitGraphChanges(this, v5);
    }
    CAudioProcessor::BeginGraphChanges(this, &v9);
    v3 = *((_QWORD *)this + 96);
    v4 = *(_QWORD **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) )
    {
      do
      {
        Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v4);
        CAudioProcessor::DeactivateAPO(
          (struct ATL::CAtlPlex **)this,
          v9,
          *(struct IAudioProcessingObject **)(*(_QWORD *)Head + 8LL));
      }
      while ( v4[2] );
      v4 = (_QWORD *)**((_QWORD **)this + 96);
    }
    if ( v4[8] )
    {
      do
      {
        v7 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead(v4 + 6);
        CAudioProcessor::DetachEndpointFromConnection(this, v9, *(struct IAudioEndpoint **)(*(_QWORD *)v7 + 112LL));
      }
      while ( v4[8] );
      v4 = (_QWORD *)**((_QWORD **)this + 96);
    }
    while ( v4[14] )
    {
      v8 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead(v4 + 12);
      CAudioProcessor::DetachEndpointFromConnection(this, v9, *(struct IAudioEndpoint **)(*(_QWORD *)v8 + 112LL));
    }
    CAudioProcessor::CommitGraphChanges(this, v9);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 99);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 98);
  CRealTimeSafeStruct<CProcessingData,1>::~CRealTimeSafeStruct<CProcessingData,1>((char *)this + 384);
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((struct _RTL_CRITICAL_SECTION *)((char *)this + 224));
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 176);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this + 128);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
