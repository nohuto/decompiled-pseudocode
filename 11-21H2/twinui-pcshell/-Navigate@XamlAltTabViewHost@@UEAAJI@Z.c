/*
 * XREFs of ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1805FAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1805F9754 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1805FC664 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall XamlAltTabViewHost::Navigate(XamlAltTabViewHost *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // esi
  __int64 v6; // rdx
  int v7; // eax
  _QWORD v9[40]; // [rsp+40h] [rbp-158h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)"NavigateAltTab");
  v9[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  XamlSwitcherTelemetry::NavigateAltTab::StartActivity((XamlSwitcherTelemetry::NavigateAltTab *)v9);
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    LOBYTE(v6) = a2 == 6;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 160LL))(*((_QWORD *)this + 20), v6);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, v6);
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v9);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
