/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18000A500
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DB488 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@553@Z @ 0x180125590 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@@.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801287F4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801288F0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180128B00 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x18012A818 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // r15d
  char v13; // r14
  std::_Ref_count_base *v14; // rcx
  int v15; // eax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v25; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall ***v26)(); // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+FCh] [rbp-4h]
  const char *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  unsigned int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( (unsigned int)dword_1801C0178 > 5 )
  {
    v17 = 413;
    v34 = &v17;
    v35 = 4LL;
    v32 = "Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice";
    v33 = 69LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1801C0180;
    UserData.Size = *(unsigned __int16 *)off_1801C0180;
    UserData.Reserved = 2;
    v29 = &unk_18018BB2A;
    v30 = 21;
    v31 = 1;
    v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v7 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_ccc4b3e5_9aeb_4f1c_bcc8_622c2fd6c077,
      &v21);
    v8 = v21;
  }
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 62) == 17 ? (unsigned int)v8 % 0x11 : (unsigned int)v8 % *((_DWORD *)this + 62);
    v5 = *((_QWORD *)this + 29);
    if ( v5 )
    {
      v10 = *(_QWORD *)(v5 + 8 * v9);
      if ( v10 )
      {
        while ( *(_DWORD *)(v10 + 112) != (_DWORD)v8 || *(_QWORD *)v10 != v8 )
        {
          v10 = *(_QWORD *)(v10 + 104);
          if ( !v10 )
            goto LABEL_9;
        }
        v7 = v10 + 8;
      }
    }
  }
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 8);
    if ( !v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1A7,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v6);
    v12 = *(_DWORD *)(v7 + 52);
    if ( (unsigned int)dword_1801C0178 > 4 )
    {
      v22 = *(_QWORD *)(v7 + 8);
      v17 = v12;
      v20 = *(_DWORD *)(v7 + 80);
      v18 = *(_DWORD *)(v7 + 84);
      v27 = *(_OWORD *)(v7 + 16);
      v23 = &v27;
      *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v7 + 40);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        (unsigned int)&unk_18018B7ED,
        v5,
        (_DWORD)v6,
        (__int64)&EventDescriptor,
        (__int64)&v23,
        (__int64)&v18,
        (__int64)&v20,
        (__int64)&v17,
        (__int64)&v22);
    }
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v7);
    v13 = *(_BYTE *)(v11 + 8);
    v17 = 0;
    Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v11, &v17);
    if ( *(_DWORD *)(v11 + 12) )
      goto LABEL_39;
    if ( *(_QWORD *)v11 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
    if ( *((_QWORD *)this + 20) )
    {
LABEL_39:
      if ( *((_QWORD *)this + 30) )
      {
        if ( v13 )
        {
          if ( v17 )
          {
            *(_QWORD *)&EventDescriptor.Id = this;
            LODWORD(EventDescriptor.Keyword) = v12;
            v24 = off_180177D88;
            v25 = EventDescriptor;
            v26 = &v24;
            v15 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1D0,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v15,
                UserDataCount);
          }
        }
      }
    }
    else
    {
      Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
      v14 = qword_1801C2CB0;
      qword_1801C2CB0 = 0LL;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
