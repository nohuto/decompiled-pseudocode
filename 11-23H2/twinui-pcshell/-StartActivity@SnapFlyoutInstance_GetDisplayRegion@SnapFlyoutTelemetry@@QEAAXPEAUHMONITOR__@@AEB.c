/*
 * XREFs of ?StartActivity@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXPEAUHMONITOR__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18069185C
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x180691C08 (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180476A74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805E6174 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::StartActivity(
        SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion *this,
        HMONITOR a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  int v4; // r14d
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  const GUID *v8; // rax
  int v9; // [rsp+60h] [rbp-20h] BYREF
  int v10; // [rsp+64h] [rbp-1Ch] BYREF
  int v11; // [rsp+68h] [rbp-18h] BYREF
  DWORD CurrentThreadId; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+B8h] [rbp+38h] BYREF

  v4 = (int)a2;
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v6,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v14 = *((_DWORD *)a3 + 3);
    v15 = *((_DWORD *)a3 + 2);
    v9 = *((_DWORD *)a3 + 1);
    v10 = *(_DWORD *)a3;
    v11 = v4;
    v13 = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_18087573A,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v8,
      (__int64)&v13,
      (__int64)&CurrentThreadId,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v15,
      (__int64)&v14);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
