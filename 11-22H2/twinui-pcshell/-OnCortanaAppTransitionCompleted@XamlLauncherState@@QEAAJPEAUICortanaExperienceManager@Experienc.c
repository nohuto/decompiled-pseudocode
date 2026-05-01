/*
 * XREFs of ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180506070
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaAppTransitionCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 16);
  if ( v4 == 13
    && (*((_DWORD *)this + 16) = 14,
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 10) + 64LL))(
               *((_QWORD *)this + 10),
               7LL,
               a3),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE9,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  v7 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
  {
    v12 = *((_DWORD *)this + 16);
    v13 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_18085C459,
      0LL,
      v9,
      (__int64)&v13,
      (__int64)&v12);
  }
  return v6;
}
