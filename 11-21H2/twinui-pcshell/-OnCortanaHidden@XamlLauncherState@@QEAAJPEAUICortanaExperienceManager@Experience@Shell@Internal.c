/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180044B30
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180044C00 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r9d
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 16);
  *((_QWORD *)this + 133) = 0LL;
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  v6 = (unsigned int)(*((_DWORD *)this + 16) - 8);
  if ( *((_DWORD *)this + 16) == 8 )
    goto LABEL_2;
  v6 = (unsigned int)(*((_DWORD *)this + 16) - 9);
  if ( *((_DWORD *)this + 16) == 9 )
  {
    *((_DWORD *)this + 16) = 11;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 16) == 10 )
LABEL_2:
    *((_DWORD *)this + 16) = 0;
LABEL_3:
  v7 = *(_QWORD *)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                     v6,
                     _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                     v5)
                 + 8);
  if ( *(_DWORD *)v7 > 5u
    && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
  {
    v10 = *((_DWORD *)this + 16);
    v11 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_1806B5940,
      0,
      v8,
      (__int64)&v11,
      (__int64)&v10);
  }
  return 0LL;
}
