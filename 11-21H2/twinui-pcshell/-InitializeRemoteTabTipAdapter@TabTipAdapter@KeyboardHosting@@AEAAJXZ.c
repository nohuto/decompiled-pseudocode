/*
 * XREFs of ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BF254
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1800B9490 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 *     ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x18047D760 (-TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800BF4D8 (--1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1800BFB70 (-Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z.c)
 *     ?StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800C003C (-StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18014B64C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  unsigned int v3; // r14d
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  int v9; // r12d
  _QWORD *v10; // rsi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+40h] [rbp-3A8h] BYREF
  RTL_SRWLOCK *v14[5]; // [rsp+48h] [rbp-3A0h] BYREF
  _QWORD v15[40]; // [rsp+70h] [rbp-378h] BYREF
  wchar_t v16[256]; // [rsp+1B0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]

  v14[3] = (RTL_SRWLOCK *)this;
  v14[2] = (RTL_SRWLOCK *)this;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"InitializeRemoteTabTipAdapter");
  v15[0] = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::StartActivity((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v15);
  v3 = 0;
  if ( *((_BYTE *)this + 385) )
  {
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v15,
      L"AlreadyInitialized",
      0);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 38);
    if ( *((_DWORD *)this + 38) > 0x168u )
    {
      _InterlockedExchange((volatile __int32 *)this + 38, 0);
      v12 = *((_QWORD *)this + 13);
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
      }
      TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
        (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v15,
        L"RetryCountMaxReached",
        -2147467260);
      v3 = -2147418113;
    }
    else
    {
      v13 = 0;
      v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**((_QWORD **)this + 9) + 24LL))(
             *((_QWORD *)this + 9),
             &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
             &v13);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v4);
        v3 = v5;
      }
      else
      {
        memset_0(v16, 0, 0x1FEuLL);
        GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v16, v6);
        wil::AcquireSRWLockExclusive(v14, (char *)this + 480);
        v7 = *((_QWORD *)this + 9);
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v7 + 32LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 10);
        v9 = v8(
               v7,
               ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
               0LL,
               v13,
               v16,
               *((_QWORD *)this + 16),
               (char *)this + 80);
        v10 = (_QWORD *)((char *)this + 104);
        if ( v9 < 0 )
          JUMPOUT(0x1802738F2LL);
        *((_BYTE *)this + 385) = 1;
        if ( *v10 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 96LL))(*v10);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
        }
        TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
          (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v15,
          L"Success",
          v9);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v14);
      }
    }
  }
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::~InitializeRemoteTabTipAdapter((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)v15);
  return v3;
}
