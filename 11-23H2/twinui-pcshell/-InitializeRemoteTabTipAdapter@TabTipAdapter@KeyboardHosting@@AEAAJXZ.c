/*
 * XREFs of ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180166DD4
 * Callers:
 *     ?Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180166A34 (-Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x18052E060 (-TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800AC874 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180166784 (-StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x18016681C (-Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z.c)
 *     ??1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180166DA8 (--1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18018B018 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  unsigned int v2; // r14d
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  int v8; // r13d
  _QWORD *v9; // rsi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp-3A8h] BYREF
  KeyboardHosting::TabTipAdapter *v13; // [rsp+48h] [rbp-3A0h]
  char *v14; // [rsp+50h] [rbp-398h]
  KeyboardHosting::TabTipAdapter *v15; // [rsp+58h] [rbp-390h]
  char *v16; // [rsp+60h] [rbp-388h]
  _QWORD v17[40]; // [rsp+70h] [rbp-378h] BYREF
  wchar_t v18[256]; // [rsp+1B0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]

  v15 = this;
  v13 = this;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"InitializeRemoteTabTipAdapter");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::StartActivity((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v17);
  v2 = 0;
  if ( *((_BYTE *)this + 375) )
  {
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v17,
      L"AlreadyInitialized",
      0);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 42);
    if ( *((_DWORD *)this + 42) > 0x168u )
    {
      _InterlockedExchange((volatile __int32 *)this + 42, 0);
      v11 = *((_QWORD *)this + 14);
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
      }
      TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
        (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v17,
        L"RetryCountMaxReached",
        -2147467260);
      v2 = -2147418113;
    }
    else
    {
      v12 = 0;
      v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**((_QWORD **)this + 10) + 24LL))(
             *((_QWORD *)this + 10),
             &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
             &v12);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E0,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v3);
        v2 = v4;
      }
      else
      {
        memset_0(v18, 0, 0x1FEuLL);
        GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v18, v5);
        v14 = (char *)this + 424;
        AcquireSRWLockExclusive((PSRWLOCK)this + 53);
        v16 = (char *)this + 424;
        v6 = *((_QWORD *)this + 10);
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v6 + 32LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
        v8 = v7(
               v6,
               ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
               0LL,
               v12,
               v18,
               *((_QWORD *)this + 18),
               (char *)this + 88);
        v9 = (_QWORD *)((char *)this + 112);
        if ( v8 < 0 )
          JUMPOUT(0x180377002LL);
        *((_BYTE *)this + 375) = 1;
        if ( *v9 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 96LL))(*v9);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
        }
        TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
          (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v17,
          L"Success",
          v8);
        if ( this != (KeyboardHosting::TabTipAdapter *)-424LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 53);
      }
    }
  }
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::~InitializeRemoteTabTipAdapter((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v17);
  return v2;
}
