/*
 * XREFs of ??$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180678404
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180228170 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B7174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapBar_ShowAsync<unsigned __int64,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind &>(
        __int64 *a1,
        int *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<WindowManagementLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    v7 = *a2;
    v8 = *a1;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                    (__int64)v5,
                    byte_1808749D5,
                    0LL,
                    0LL,
                    (__int64)&v8,
                    (__int64)&v7);
  }
  return (int)v4;
}
