/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C
 * Callers:
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400021F0 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140006A00 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140007DF0 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@Z @ 0x14001AEC0 (-Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400214C0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x1400251F0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140025380 (-DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400259B0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058980 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     wil::details::lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___::_lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___ @ 0x14005AB28 (wil--details--lambda_call__lambda_f709ffcc2f89bfe7a31af6892892e071___--_lambda_call__lambda_f709.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B5C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x140061A50 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063590 (-CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStr.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400674B0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140067E40 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140077400 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x14000AB7C (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ABE4 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?FreePlexes@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x1400201F4 (-FreePlexes@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x140053AA4 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14005449C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400563F4 (-FreeNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140056518 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140056670 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140061CF0 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140061F34 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140062CA4 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x1400632F8 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall PublishDeviceGraphWnfState(__int64 a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // esi
  unsigned int v12; // ebx
  _QWORD *ValueAt; // rax
  _QWORD *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  CDisplayNode *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // esi
  unsigned int i; // edx
  __int64 v23; // r14
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned int j; // edx
  __int64 v31; // r14
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax
  void *Block; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-C8h]
  unsigned int v39; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A8h]
  int v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  void *v43; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v44; // [rsp+90h] [rbp-78h]
  unsigned int v45; // [rsp+98h] [rbp-70h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  __int128 v49; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+100h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+148h] [rbp+40h] BYREF
  void *v54; // [rsp+150h] [rbp+48h] BYREF

  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 10;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (unsigned int)&v43,
    a2,
    a3,
    a4,
    LODWORD(FLOAT_2_25));
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (unsigned int)&Block,
    v4,
    v5,
    v6,
    LODWORD(FLOAT_2_25));
  v7 = 0LL;
  v54 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    EnterCriticalSection(&g_CritSecSadMap);
    v53 = &g_CritSecSadMap;
    v11 = qword_1400CF7B0;
    v12 = 0;
    if ( (int)qword_1400CF7B0 <= 0 )
    {
LABEL_13:
      LeaveCriticalSection(&g_CritSecSadMap);
      EnterCriticalSection(&g_CritSecSubmixList);
      v53 = &g_CritSecSubmixList;
      v14 = (_QWORD *)SubmixList;
      while ( v14 )
      {
        v16 = v14[2];
        v14 = (_QWORD *)*v14;
        if ( (int)DumpDeviceGraph(v16, &v49, &v43, &Block) < 0 )
        {
          v15 = &g_CritSecSubmixList;
          goto LABEL_16;
        }
      }
      LeaveCriticalSection(&g_CritSecSubmixList);
      LinkDisplayNodes(&v43, &Block);
      v17 = SerializeDeviceGraphs(&v49, &v54, &v53);
      v7 = v54;
      if ( v17 >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
          g_DeviceGraphWnfStateName,
          0LL,
          v54,
          (unsigned int)v53,
          0LL);
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v10,
                              v12);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 184LL))(
               *ValueAt,
               &v49,
               &v43,
               &Block) < 0 )
          break;
        if ( (int)++v12 >= v11 )
          goto LABEL_13;
      }
      v15 = &g_CritSecSadMap;
LABEL_16:
      LeaveCriticalSection(v15);
    }
  }
  while ( v50 )
  {
    if ( !(_QWORD)v49 )
      ATL::AtlThrowImpl(-2147467259);
    v18 = *(CDisplayNode **)(v49 + 16);
    v19 = *(_QWORD *)v49;
    *(_QWORD *)&v49 = v19;
    if ( v19 )
      *(_QWORD *)(v19 + 8) = 0LL;
    else
      v49 = 0uLL;
    ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::FreeNode(&v49);
    if ( v18 )
      CDisplayNode::`scalar deleting destructor'(v18, v20);
  }
  operator delete(v7);
  ++v41;
  v8 = Block;
  if ( Block )
  {
    v21 = 0;
    for ( i = v39; v21 < i; ++v21 )
    {
      v23 = v8[v21];
      if ( v23 )
      {
        do
        {
          v24 = v23;
          v25 = (_QWORD *)(v23 + 56);
          v23 = *(_QWORD *)(v23 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v24 + 8);
          *v25 = v42;
          v42 = v24;
          v26 = v38 - 1;
          v38 = v26;
          if ( v26 < v40 && !v41 )
          {
            v27 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
                    &Block,
                    v26);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v27);
            v26 = v38;
          }
          if ( !v26 )
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::FreePlexes(&Block);
        }
        while ( v23 );
        i = v39;
        v8 = Block;
      }
    }
  }
  operator delete[](v8);
  Block = 0LL;
  v38 = 0LL;
  if ( !v41 )
  {
    v28 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
            &Block,
            0LL);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &Block,
      v28,
      0LL);
  }
  ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::FreePlexes(&Block);
  --v41;
  ++v47;
  v9 = v43;
  if ( v43 )
  {
    v29 = 0;
    for ( j = v45; v29 < j; ++v29 )
    {
      v31 = v9[v29];
      if ( v31 )
      {
        do
        {
          v32 = v31;
          v33 = (_QWORD *)(v31 + 56);
          v31 = *(_QWORD *)(v31 + 56);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(v32 + 8);
          *v33 = v48;
          v48 = v32;
          v34 = v44 - 1;
          v44 = v34;
          if ( v34 < v46 && !v47 )
          {
            v35 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
                    &v43,
                    v34);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v43,
              v35);
            v34 = v44;
          }
          if ( !v34 )
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::FreePlexes(&v43);
        }
        while ( v31 );
        j = v45;
        v9 = v43;
      }
    }
  }
  operator delete[](v9);
  v43 = 0LL;
  v44 = 0LL;
  if ( !v47 )
  {
    v36 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
            &v43,
            0LL);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &v43,
      v36,
      0LL);
  }
  ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::FreePlexes(&v43);
  --v47;
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(&v49);
}
