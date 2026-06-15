/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180023FE0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800E1560 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180021CBC (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800814EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800E3B68 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, unsigned int a2)
{
  enum _AudioSessionState v4; // esi
  CAudioSessionManager *v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  PTP_TIMER *v10; // r14
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  enum _AudioSessionState v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *((_DWORD *)this + 84);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      56,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 82),
      v4,
      a2);
  }
  if ( v4 == AudioSessionStateInactive )
  {
    if ( a2 == 1 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
      v10 = (PTP_TIMER *)*((_QWORD *)this + 67);
      *((_QWORD *)this + 67) = 0LL;
      if ( v10 )
      {
        _RecurringTask::~_RecurringTask(v10);
        operator delete(v10, 0x20uLL);
      }
      if ( this != (CAudioSession *)-496LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 340));
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          57LL,
          &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
          *((_QWORD *)this + 82));
      }
      *((_BYTE *)this + 904) = 1;
      *((_DWORD *)this + 84) = 1;
LABEL_25:
      v11 = *((_DWORD *)this + 58);
      if ( (v11 & 0x200000) != 0 )
        *((_DWORD *)this + 58) = v11 & 0xFFDFFFFF;
LABEL_6:
      if ( v4 == a2 )
        return;
      goto LABEL_7;
    }
LABEL_5:
    *((_DWORD *)this + 84) = a2;
    if ( a2 != 1 )
      goto LABEL_6;
    goto LABEL_25;
  }
  if ( v4 != AudioSessionStateActive || a2 )
    goto LABEL_5;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 348));
  *((_QWORD *)this + 40) = GetTickCount64();
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      58LL,
      &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)this + 82));
  }
  *((_BYTE *)this + 904) = 0;
  CAudioSession::StartInactiveTimer(this);
  *((_DWORD *)this + 84) = 0;
LABEL_7:
  v6 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v5,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
  {
    v14 = a2;
    v13 = v4;
    v15 = *((_QWORD *)this + 82);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_180191580,
      v7,
      v8,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v14);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v9 = CAudioSessionManager::OnSessionStateChanged(
         *((CAudioSessionManager **)this + 53),
         (struct IAudioSessionInfo *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         v4,
         a2);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD25,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v9);
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
}
