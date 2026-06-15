/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140003810 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140003B20 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x14001DF70 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140024860 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140058650 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x14005DA20 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x1400028B8 (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ?FreePlexes@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEAAXXZ @ 0x140008764 (-FreePlexes@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@U.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1400087F8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000C714 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x140052540 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140052E28 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400546EC (-FreeNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140054810 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140054970 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14005DC60 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14005DEA4 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14005EB9C (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14005F1B8 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=9
void PublishDeviceGraphWnfState(void)
{
  unsigned int v0; // r9d
  int v1; // r10d
  void *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // ebx
  _QWORD *ValueAt; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  CDisplayNode *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int i; // edx
  __int64 v17; // r14
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int j; // edx
  __int64 v25; // r14
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  void *Block; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-91h]
  unsigned int v33; // [rsp+40h] [rbp-89h]
  int v34; // [rsp+44h] [rbp-85h]
  int v35; // [rsp+48h] [rbp-81h]
  int v36; // [rsp+4Ch] [rbp-7Dh]
  __int64 v37; // [rsp+50h] [rbp-79h]
  unsigned __int64 v38; // [rsp+58h] [rbp-71h]
  int v39; // [rsp+60h] [rbp-69h]
  int v40; // [rsp+64h] [rbp-65h]
  ATL::CAtlPlex *v41; // [rsp+68h] [rbp-61h]
  __int64 v42; // [rsp+70h] [rbp-59h]
  void *v43; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-41h]
  int v45; // [rsp+90h] [rbp-39h]
  int v46; // [rsp+94h] [rbp-35h]
  int v47; // [rsp+98h] [rbp-31h]
  int v48; // [rsp+9Ch] [rbp-2Dh]
  __int64 v49; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-21h]
  int v51; // [rsp+B0h] [rbp-19h]
  int v52; // [rsp+B4h] [rbp-15h]
  ATL::CAtlPlex *v53; // [rsp+B8h] [rbp-11h]
  __int64 v54; // [rsp+C0h] [rbp-9h]
  __int128 v55; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v56; // [rsp+E0h] [rbp+17h]
  __int128 v57; // [rsp+E8h] [rbp+1Fh]
  int v58; // [rsp+F8h] [rbp+2Fh]
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+130h] [rbp+67h] BYREF
  void *v60; // [rsp+138h] [rbp+6Fh] BYREF

  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 10;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 17;
  v49 = 0xFFFFFFFFLL;
  v50 = 0LL;
  v51 = 0;
  v52 = 10;
  v53 = 0LL;
  v54 = 0LL;
  v46 = 1061158912;
  v47 = 1048576000;
  v48 = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)&v43);
  Block = 0LL;
  v32 = 0LL;
  v33 = v0;
  v37 = 0xFFFFFFFFLL;
  v38 = 0LL;
  v39 = 0;
  v40 = v1;
  v41 = 0LL;
  v42 = 0LL;
  v34 = 1061158912;
  v35 = 1048576000;
  v36 = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)&Block);
  v2 = 0LL;
  v60 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    EnterCriticalSection(&g_CritSecSadMap);
    v59 = &g_CritSecSadMap;
    v6 = qword_1400C1638;
    v7 = 0;
    if ( (int)qword_1400C1638 <= 0 )
    {
LABEL_16:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v59);
      EnterCriticalSection(&g_CritSecSubmixList);
      v59 = &g_CritSecSubmixList;
      v9 = (_QWORD *)SubmixList;
      while ( v9 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        if ( (int)DumpDeviceGraph(v10, &v55, &v43, &Block) < 0 )
          goto LABEL_17;
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v59);
      LinkDisplayNodes(&v43, &Block);
      v11 = SerializeDeviceGraphs(&v55, &v60, &v59);
      v2 = v60;
      if ( v11 >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
          g_DeviceGraphWnfStateName,
          0LL,
          v60,
          (unsigned int)v59,
          0LL);
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v5,
                              v7);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 184LL))(
               *ValueAt,
               &v55,
               &v43,
               &Block) < 0 )
          break;
        if ( (int)++v7 >= v6 )
          goto LABEL_16;
      }
LABEL_17:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v59);
    }
    while ( v56 )
    {
      if ( !(_QWORD)v55 )
        ATL::AtlThrowImpl(-2147467259);
      v12 = *(CDisplayNode **)(v55 + 16);
      v13 = *(_QWORD *)v55;
      *(_QWORD *)&v55 = v13;
      if ( v13 )
        *(_QWORD *)(v13 + 8) = 0LL;
      else
        v55 = 0uLL;
      ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::FreeNode(&v55);
      if ( v12 )
        CDisplayNode::`scalar deleting destructor'(v12, v14);
    }
  }
  operator delete(v2);
  ++v39;
  v3 = Block;
  if ( Block )
  {
    v15 = 0;
    for ( i = v33; v15 < i; ++v15 )
    {
      v17 = v3[v15];
      if ( v17 )
      {
        do
        {
          v18 = v17;
          v19 = (_QWORD *)(v17 + 56);
          v17 = *(_QWORD *)(v17 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v18 + 8);
          *v19 = v42;
          v42 = v18;
          v20 = v32 - 1;
          v32 = v20;
          if ( v20 < v38 && !v39 )
          {
            v21 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v21);
            v20 = v32;
          }
          if ( !v20 )
            ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::FreePlexes((__int64)&Block);
        }
        while ( v17 );
        i = v33;
        v3 = Block;
      }
    }
  }
  operator delete[](v3);
  Block = 0LL;
  v32 = 0LL;
  if ( !v39 )
  {
    v22 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &Block,
      v22,
      0LL);
  }
  v42 = 0LL;
  if ( v41 )
  {
    ATL::CAtlPlex::FreeDataChain((ATL::CAtlPlex **)v41);
    v41 = 0LL;
  }
  --v39;
  ++v51;
  v4 = v43;
  if ( v43 )
  {
    v23 = 0;
    for ( j = v45; v23 < j; ++v23 )
    {
      v25 = v4[v23];
      if ( v25 )
      {
        do
        {
          v26 = v25;
          v27 = (_QWORD *)(v25 + 56);
          v25 = *(_QWORD *)(v25 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v26 + 8);
          *v27 = v54;
          v54 = v26;
          v28 = v44 - 1;
          v44 = v28;
          if ( v28 < v50 && !v51 )
          {
            v29 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v43);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v43,
              v29);
            v28 = v44;
          }
          if ( !v28 )
            ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::FreePlexes((__int64)&v43);
        }
        while ( v25 );
        j = v45;
        v4 = v43;
      }
    }
  }
  operator delete[](v4);
  v43 = 0LL;
  v44 = 0LL;
  if ( !v51 )
  {
    v30 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v43);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &v43,
      v30,
      0LL);
  }
  v54 = 0LL;
  if ( v53 )
  {
    ATL::CAtlPlex::FreeDataChain((ATL::CAtlPlex **)v53);
    v53 = 0LL;
  }
  --v51;
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(&v55);
}
