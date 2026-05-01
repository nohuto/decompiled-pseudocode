/*
 * XREFs of ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x18041E5CC
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18041D620 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18041F2E4 (-zInternalStart@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::StartActivity(
        XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *this,
        __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  const GUID *v6; // rax
  __int64 v7; // r8
  DWORD CurrentThreadId; // [rsp+38h] [rbp-29h] BYREF
  __int64 v9; // [rsp+40h] [rbp-21h] BYREF
  __int64 v10; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+78h] [rbp+17h]
  int v13; // [rsp+80h] [rbp+1Fh]
  int v14; // [rsp+84h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+27h]
  int v16; // [rsp+90h] [rbp+2Fh]
  int v17; // [rsp+94h] [rbp+33h]
  __int64 *v18; // [rsp+98h] [rbp+37h]
  int v19; // [rsp+A0h] [rbp+3Fh]
  int v20; // [rsp+A4h] [rbp+43h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                   v4,
                   _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v9 = a2;
    v10 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v7 = *((_QWORD *)this + 6);
    v20 = 0;
    v17 = 0;
    v14 = 0;
    v18 = &v9;
    p_CurrentThreadId = &CurrentThreadId;
    v12 = &v10;
    v19 = 8;
    v16 = 4;
    v13 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_1806B2CD1,
      (const GUID *)(v7 + 8),
      v6,
      5u,
      &v11);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)((char *)this + 8));
}
