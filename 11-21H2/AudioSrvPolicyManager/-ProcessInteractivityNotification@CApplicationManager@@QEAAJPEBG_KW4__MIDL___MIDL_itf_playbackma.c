/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180020EBC (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x180028DA0 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019AC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180016144 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180017B0C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180017B84 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18001DCB8 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        void *a2,
        __int64 a3,
        int a4,
        UINT32 a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int Application; // eax
  unsigned int v14; // esi
  CApplication *v16; // r14
  BOOL v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // r12
  signed int v20; // esi
  __int64 v21; // rax
  signed int LastError; // eax
  _BYTE *v23; // rax
  _BYTE *v24; // rcx
  _BYTE *v25; // rdx
  _BYTE *v26; // rdx
  _QWORD *v27; // rdx
  int v28; // eax
  unsigned int v29; // r14d
  int v30; // eax
  unsigned int v31; // esi
  int v32; // [rsp+40h] [rbp-1E8h] BYREF
  CApplication *v33; // [rsp+48h] [rbp-1E0h] BYREF
  int v34; // [rsp+50h] [rbp-1D8h]
  __int64 v35; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1C0h]
  __int64 v38; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-1B0h]
  __int64 v40; // [rsp+80h] [rbp-1A8h]
  BOOL v41; // [rsp+88h] [rbp-1A0h]
  UINT32 v42; // [rsp+8Ch] [rbp-19Ch]
  void *v43; // [rsp+90h] [rbp-198h] BYREF
  __int64 v44; // [rsp+98h] [rbp-190h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-188h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-180h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-170h]
  BOOL v48; // [rsp+C0h] [rbp-168h]
  UINT32 v49; // [rsp+C4h] [rbp-164h]
  __int128 v50; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-150h]
  BOOL v52; // [rsp+E0h] [rbp-148h]
  UINT32 v53; // [rsp+E4h] [rbp-144h]
  _QWORD v54[4]; // [rsp+E8h] [rbp-140h] BYREF
  BOOL v55; // [rsp+108h] [rbp-120h]
  UINT32 v56; // [rsp+10Ch] [rbp-11Ch]
  _QWORD *v57; // [rsp+120h] [rbp-108h]
  struct _RTL_CRITICAL_SECTION *v58; // [rsp+128h] [rbp-100h]
  _BYTE v59[56]; // [rsp+130h] [rbp-F8h] BYREF
  _BYTE *v60; // [rsp+168h] [rbp-C0h]
  _QWORD v61[4]; // [rsp+170h] [rbp-B8h] BYREF
  BOOL v62; // [rsp+190h] [rbp-98h]
  UINT32 v63; // [rsp+194h] [rbp-94h]
  _QWORD *v64; // [rsp+1A8h] [rbp-80h]
  _BYTE v65[56]; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE *v66; // [rsp+1E8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v43 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v58 = v9;
  v10 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v10 > 4u )
  {
    LODWORD(v35) = a4 == 0;
    v44 = a3;
    v45 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_180051098,
      v11,
      v12,
      (void **)&v45,
      (__int64)&v44,
      (__int64)&v35);
  }
  v32 = 0;
  Application = CApplicationManager::GetApplication(
                  (CApplicationManager *)a1,
                  (const unsigned __int16 *)a2,
                  a3,
                  a5,
                  &v33,
                  1,
                  &v32);
  v14 = Application;
  if ( Application < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v14;
  }
  EnterCriticalSection(v9);
  v16 = v33;
  if ( a4 == 2
    && *((_DWORD *)v33 + 52)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v33)
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v16) )
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    v34 = 1;
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    v34 = 0;
  }
  v17 = a4 == 0;
  std::make_shared<std::wstring,unsigned short const * &>(&v36, &v43);
  v18 = v37;
  if ( v37 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
    v16 = v33;
    v18 = v37;
  }
  v19 = v36;
  v38 = v36;
  v39 = v18;
  v40 = a3;
  v41 = v17;
  v42 = a5;
  if ( v34 )
  {
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v16 = v33;
      v17 = v41;
      v19 = v38;
    }
    v47 = a3;
    v48 = v17;
    v49 = a5;
    v61[0] = off_1800483F0;
    v61[1] = v19;
    v61[2] = v18;
    v46 = 0LL;
    v61[3] = a3;
    v62 = v17;
    v63 = a5;
    v64 = v61;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v46);
    v20 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v16 + 496));
    v43 = (char *)v16 + 496;
    CApplication::CleanupDelayedInteractivityNotification(v16);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *((const wchar_t **)v16 + 3));
    }
    if ( *((_QWORD *)v16 + 67)
      || (v21 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool
                                                                                             + 8LL))(
                  ThreadPool,
                  CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
                  v16),
          (*((_QWORD *)v16 + 67) = v21) != 0LL) )
    {
      v60 = 0LL;
      if ( v64 )
      {
        v23 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v64)(v64, v59);
        v60 = v23;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v23 == v59 || (v24 = (_BYTE *)*((_QWORD *)v16 + 75), v24 == (char *)v16 + 544) )
      {
        v66 = 0LL;
        std::_Func_class<void,>::_Reset_move((__int64)v65, (__int64)v59);
        std::_Func_class<void,>::_Reset_move((__int64)v59, (__int64)v16 + 544);
        std::_Func_class<void,>::_Reset_move((__int64)v16 + 544, (__int64)v65);
        if ( v66 )
        {
          v25 = v65;
          LOBYTE(v25) = v66 != v65;
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v66 + 32LL))(v66, v25);
          v66 = 0LL;
        }
        v24 = v60;
      }
      else
      {
        v60 = (_BYTE *)*((_QWORD *)v16 + 75);
        *((_QWORD *)v16 + 75) = v23;
      }
      if ( v24 )
      {
        v26 = v59;
        LOBYTE(v26) = v24 != v59;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v26);
        v60 = 0LL;
      }
      v33 = (CApplication *)-300000000LL;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication **, _QWORD, int))(*(_QWORD *)ThreadPool
                                                                                              + 24LL))(
        ThreadPool,
        *((_QWORD *)v16 + 67),
        &v33,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v20 = LastError;
      if ( LastError > 0 )
        v20 = (unsigned __int16)LastError | 0x80070000;
      if ( v20 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, v20);
        }
        AudPolicyLogError("CApplication::PostDelayedInteractivityNotification", 1451, v20);
      }
    }
    if ( v16 != (CApplication *)-496LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v16 + 496));
    if ( v64 )
    {
      v27 = v61;
      LOBYTE(v27) = v64 != v61;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v64 + 32LL))(v64, v27);
    }
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD1,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v20);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v38);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v36);
      if ( v9 )
        LeaveCriticalSection(v9);
      return (unsigned int)v20;
    }
    goto LABEL_66;
  }
  v28 = CApplication::CleanupDelayedInteractivityNotification(v16);
  v29 = v28;
  if ( v28 >= 0 )
  {
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v17 = v41;
      v18 = v39;
      v19 = v38;
    }
    v51 = a3;
    v52 = v17;
    v53 = a5;
    v54[0] = off_1800483F0;
    v54[1] = v19;
    v54[2] = v18;
    v50 = 0LL;
    v54[3] = a3;
    v55 = v17;
    v56 = a5;
    v57 = v54;
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v50);
    v30 = QueueGenericWorkItem(v54);
    v31 = v30;
    if ( v30 >= 0 )
    {
LABEL_66:
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v38);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v36);
      if ( v9 )
        LeaveCriticalSection(v9);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v30);
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v38);
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v36);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v31;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD6,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v28);
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v38);
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v36);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v29;
  }
}
