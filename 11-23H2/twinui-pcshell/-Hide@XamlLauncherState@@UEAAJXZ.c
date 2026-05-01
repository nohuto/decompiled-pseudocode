/*
 * XREFs of ?Hide@XamlLauncherState@@UEAAJXZ @ 0x1805058E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180043654 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180161430 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Hide(XamlLauncherState *this)
{
  XamlLauncherState *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = (XamlLauncherState *)((char *)this - 32);
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v7 = *((_DWORD *)this + 8);
  if ( v7 != 7 )
    goto LABEL_10;
  *((_DWORD *)this + 8) = 8;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 456LL))(*((_QWORD *)this + 7), &v15);
  if ( v8 >= 0 )
  {
    if ( !(_BYTE)v15 )
      XamlLauncherState::PostCortanaOrSearchVisibility(v2, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x562,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v8);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x567,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v9);
  else
LABEL_10:
    v10 = 0;
  v11 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                    v3,
                    (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v11 > 5u )
  {
    if ( tlgKeywordOn((__int64)v11, 0x200000000000LL) )
    {
      v15 = *((_DWORD *)v2 + 16);
      v16 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_18085C762,
        0LL,
        v13,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  return v10;
}
