/*
 * XREFs of ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x180110EBC
 * Callers:
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180110D18 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180110F68 (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$make_self@VSnapFlyoutHost@@PEAUIPrivilegedArrangementOperations@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@$$QEAPEAUIPrivilegedArrangementOperations@@@Z @ 0x180110FAC (--$make_self@VSnapFlyoutHost@@PEAUIPrivilegedArrangementOperations@@@winrt@@YA-AU-$com_ptr@VSnap.c)
 *     ??$?0$$V@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18011100C (--$-0$$V@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x1801110BC (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::InitializeSnapFlyoutHost(CShellSnapComponent *this)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+20h] [rbp-168h] BYREF
  __int64 v5; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF

  if ( *((_BYTE *)this + 920) || *((_BYTE *)this + 921) )
  {
    CSnapComponentTelemetry::InitializeSnapFlyoutHost::InitializeSnapFlyoutHost(v6);
    v5 = *((_QWORD *)this + 50);
    v2 = winrt::make_self<SnapFlyoutHost,IPrivilegedArrangementOperations *>(&v4, &v5);
    winrt::com_ptr<SnapFlyoutHost>::operator=((char *)this + 912, v2);
    if ( v4 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v4);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    CSnapComponentTelemetry::InitializeSnapFlyoutHost::~InitializeSnapFlyoutHost((CSnapComponentTelemetry::InitializeSnapFlyoutHost *)v6);
  }
  return 0LL;
}
