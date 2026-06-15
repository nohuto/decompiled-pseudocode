/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180048A50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180019500 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180046A68 (-Find@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sa.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DDC74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@553@Z @ 0x180133148 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@@.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801362A4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801363A0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801365B0 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1801380F8 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  const char *v7; // r9
  struct Sarm::CStreamResource *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r15d
  __int128 v11; // xmm0
  char v12; // si
  std::_Ref_count_base *v13; // rcx
  int v14; // eax
  unsigned int v15; // [rsp+50h] [rbp-59h] BYREF
  int v16; // [rsp+54h] [rbp-55h] BYREF
  int v17; // [rsp+58h] [rbp-51h] BYREF
  __int128 v18; // [rsp+60h] [rbp-49h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h] BYREF
  __int128 *v20; // [rsp+78h] [rbp-31h] BYREF
  int v21[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+88h] [rbp-21h] BYREF
  __int128 v23; // [rsp+90h] [rbp-19h]
  __int64 (__fastcall ***v24)(); // [rsp+C0h] [rbp+17h]
  __int128 v25; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *(_QWORD *)&v18 = v2;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice", 413);
  v4 = util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find((int)this + 232);
  v8 = (struct Sarm::CStreamResource *)v4;
  if ( !v4 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v7);
  v10 = *(_DWORD *)(v4 + 52);
  if ( (unsigned int)dword_1801CD178 > 4 )
  {
    v11 = *(_OWORD *)(v4 + 16);
    v16 = *(_DWORD *)(v4 + 80);
    v17 = *(_DWORD *)(v4 + 84);
    v20 = &v25;
    *(_QWORD *)v21 = *(_QWORD *)(v4 + 40);
    v19 = v9;
    v15 = v10;
    v25 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_1801947D7,
      v6,
      (_DWORD)v7,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v19);
  }
  Sarm::CSpatialAudioResourceManager::RemoveStream(this, v8);
  v12 = *(_BYTE *)(v9 + 8);
  v15 = 0;
  Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v9, &v15);
  if ( !*(_DWORD *)(v9 + 12) )
  {
    if ( *(_QWORD *)v9 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
    if ( !*((_QWORD *)this + 20) )
    {
      v13 = qword_1801CFF48;
      qword_1801CFF48 = 0LL;
      Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
LABEL_2:
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v18);
      return;
    }
  }
  if ( *((_QWORD *)this + 30) )
  {
    if ( v12 )
    {
      if ( v15 )
      {
        *(_QWORD *)&v18 = this;
        v22 = off_18017CEF8;
        DWORD2(v18) = v10;
        v24 = &v22;
        v23 = v18;
        v14 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D0,
            (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v14);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
