/*
 * XREFs of ??1CAudioProcessor@@QEAA@XZ @ 0x14008EC7C
 * Callers:
 *     ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x14005E994 (--1-$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000EBD0 (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x140020030 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140024820 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x140025358 (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x14003826C (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14005EA50 (--1-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140070DE8 (-GetHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionN.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EE60 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 */

void __fastcall CAudioProcessor::~CAudioProcessor(CAudioProcessor *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 Head; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioProcessor::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &CAudioProcessor::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &CAudioProcessor::`vftable'{for `IAudioLogging'};
  v10 = 0LL;
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
      v3 = 1000LL;
      if ( v2 )
        v3 = *(_QWORD *)(v2 + 16);
      v10 = v3;
      CAudioProcessor::CommitGraphChanges(this, v3);
    }
    CAudioProcessor::BeginGraphChanges(this, &v10);
    v4 = (_QWORD *)**((_QWORD **)this + 96);
    while ( v4[2] )
    {
      Head = ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v4);
      CAudioProcessor::DeactivateAPO(
        (struct ATL::CAtlPlex **)this,
        v10,
        *(struct IAudioProcessingObject **)(*(_QWORD *)Head + 8LL));
    }
    v6 = **((_QWORD **)this + 96);
    while ( *(_QWORD *)(v6 + 64) )
    {
      v7 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead((_QWORD *)(v6 + 48));
      CAudioProcessor::DetachEndpointFromConnection(this, v10, *(struct IAudioEndpoint **)(*(_QWORD *)v7 + 112LL));
    }
    v8 = **((_QWORD **)this + 96);
    while ( *(_QWORD *)(v8 + 112) )
    {
      v9 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead((_QWORD *)(v8 + 96));
      CAudioProcessor::DetachEndpointFromConnection(this, v10, *(struct IAudioEndpoint **)(*(_QWORD *)v9 + 112LL));
    }
    CAudioProcessor::CommitGraphChanges(this, v10);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 99);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 98);
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
