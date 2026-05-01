/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180452290
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x1801ADAB0 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x1801ADAEC (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1803A57D8 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180450260 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  __int64 v5; // rcx
  int v6; // ebp
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 1024) && !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLock() )
    return 0LL;
  if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy((XamlLauncherState *)((char *)this - 32)) )
    return 2147942487LL;
  v6 = *((_DWORD *)this + 8);
  if ( !v6 )
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)this - 32);
    *(_WORD *)((char *)this + 1019) = 0;
    *((_BYTE *)this + 1021) = 0;
    *((_DWORD *)this + 8) = 6;
    v13 = XamlLauncherState::ShowSearch((XamlLauncherState *)((char *)this - 32), a2);
    goto LABEL_23;
  }
  if ( v6 == 5 )
  {
    LOBYTE(v15) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 160LL))(*((_QWORD *)this + 7), &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1381LL;
      goto LABEL_14;
    }
    if ( (_BYTE)v15 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
LABEL_17:
      v8 = 0;
      goto LABEL_18;
    }
    v13 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this - 32, a2, 1);
LABEL_23:
    v8 = v13;
    if ( v13 < 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( v6 != 7 )
    goto LABEL_17;
  *((_DWORD *)this + 8) = 8;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7));
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_17;
  v9 = 1374LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  v10 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                    v5,
                    _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    if ( tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    {
      v15 = *((_DWORD *)this + 8);
      v16 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_1806B5594,
        0LL,
        v12,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  return v8;
}
