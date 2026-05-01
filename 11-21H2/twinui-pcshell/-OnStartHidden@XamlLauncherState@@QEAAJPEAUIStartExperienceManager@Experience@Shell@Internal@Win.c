/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180045350
 * Callers:
 *     <none>
 * Callees:
 *     ??$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18004542C (--$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVEL.c)
 *     ?CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ @ 0x1800454F4 (-CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // r9d
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 16);
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 32LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
  v5 = *((_DWORD *)this + 16);
  switch ( v5 )
  {
    case 14:
      *((_DWORD *)this + 16) = 7;
      break;
    case 9:
      *((_DWORD *)this + 16) = 10;
      break;
    case 11:
    case 17:
      *((_DWORD *)this + 16) = 0;
      break;
  }
  XamlLauncherState::CompleteAutoInvokeTestIfNecessary(this);
  CommonStartTelemetry::LauncherClosed<enum IMMERSIVELAUNCHERDISMISSMETHOD &>((char *)this + 296);
  v8 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                      v6,
                      _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                      v7)
                  + 8);
  if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
  {
    v12 = *((_DWORD *)this + 16);
    v13 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1806B53CB,
      0,
      v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  return 0LL;
}
