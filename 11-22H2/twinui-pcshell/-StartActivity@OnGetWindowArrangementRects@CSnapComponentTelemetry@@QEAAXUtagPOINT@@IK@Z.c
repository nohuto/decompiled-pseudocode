/*
 * XREFs of ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x180663D40
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18001CACC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180110484 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::StartActivity(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        struct tagPOINT a2,
        int a3,
        int a4)
{
  LONG x; // ebx
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  int v10; // eax
  int v11; // [rsp+50h] [rbp-20h] BYREF
  LONG y; // [rsp+54h] [rbp-1Ch] BYREF
  LONG v13; // [rsp+58h] [rbp-18h] BYREF
  DWORD CurrentThreadId; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  struct tagPOINT v17; // [rsp+A8h] [rbp+38h]

  v17 = a2;
  x = a2.x;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v8,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 5u )
  {
    y = v17.y;
    v16 = a4;
    v11 = a3;
    v13 = x;
    v15 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v10 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v9,
      (int)&unk_1808719B7,
      *((_QWORD *)this + 6) + 8,
      v10,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&y,
      (__int64)&v11,
      (__int64)&v16);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
