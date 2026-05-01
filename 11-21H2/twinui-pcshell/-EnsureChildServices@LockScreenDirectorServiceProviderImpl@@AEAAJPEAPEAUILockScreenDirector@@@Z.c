/*
 * XREFs of ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800530A0
 * Callers:
 *     ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180052FD0 (-v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x18001E7B8 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180053240 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x18005343C (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180053468 (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C847C (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C97B4 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::EnsureChildServices(
        HANDLE *this,
        struct ILockScreenDirector **a2)
{
  int LockScreenDirector; // eax
  unsigned int v5; // ebx
  struct ILockScreenDirector *v6; // rcx
  int started; // eax
  HRESULT v9; // eax
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int lpdwindex; // [rsp+20h] [rbp-E0h]
  struct ILockScreenDirector *v14; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwindex; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE pHandles; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v17,
    "LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity");
  v17[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)v17);
  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                         (LockScreenDirectorServiceProviderImpl *)this,
                         &v14);
  v5 = LockScreenDirector;
  if ( LockScreenDirector < 0 )
  {
    v11 = (unsigned int)LockScreenDirector;
    v12 = 112LL;
    goto LABEL_19;
  }
  if ( dword_1807B3970 )
    goto LABEL_3;
  v6 = v14;
  if ( v14 )
    goto LABEL_4;
  dword_1807B3970 = 1;
  if ( !*((_BYTE *)this + 160) )
  {
    started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)this);
    v5 = started;
    if ( started < 0 )
    {
      v11 = (unsigned int)started;
      v12 = 129LL;
      goto LABEL_19;
    }
  }
  pHandles = this[17];
  v9 = CoWaitForMultipleHandles(0x18u, 0x1388u, 1u, &pHandles, &dwindex);
  v5 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 136LL;
    goto LABEL_19;
  }
  if ( dwindex )
  {
    v12 = 137LL;
LABEL_18:
    v5 = -2147418113;
    v11 = 2147549183LL;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v10 = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
          (LockScreenDirectorServiceProviderImpl *)this,
          &v14);
  v5 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 138LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)v11,
      lpdwindex);
    goto LABEL_5;
  }
LABEL_3:
  v6 = v14;
  if ( !v14 )
  {
    v12 = 142LL;
    goto LABEL_18;
  }
LABEL_4:
  (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v6 + 8LL))(v6);
  *a2 = v14;
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::~LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)v17);
  return v5;
}
