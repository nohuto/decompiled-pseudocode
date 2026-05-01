/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800592B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ @ 0x1800593E0 (-CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  _DWORD *v7; // rcx
  int v8; // r9d
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // r9d
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

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
  v7 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                      v6,
                      _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v7 > 4u && (unsigned __int8)tlgKeywordOn(v7, 0x400000000000LL) )
  {
    v14 = 0x2000000LL;
    v13 = *((_DWORD *)this + 76);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v7,
      (unsigned int)&unk_18085C2AE,
      0,
      v8,
      (__int64)&v13,
      (__int64)&v14);
  }
  v9 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                      v7,
                      _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u && (unsigned __int8)tlgKeywordOn(v9, 0x200000000000LL) )
  {
    v13 = *((_DWORD *)this + 16);
    LODWORD(v14) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_18085C274,
      0,
      v11,
      (__int64)&v14,
      (__int64)&v13);
  }
  return 0LL;
}
