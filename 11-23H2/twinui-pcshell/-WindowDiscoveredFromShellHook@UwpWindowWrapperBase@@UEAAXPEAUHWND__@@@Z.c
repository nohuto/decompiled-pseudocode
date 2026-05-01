/*
 * XREFs of ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18009F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18009FA5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::WindowDiscoveredFromShellHook(UwpWindowWrapperBase *this, HWND a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = (unsigned int)a2;
  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v6 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                        v5,
                        _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v6 > 5u )
    {
      v11 = *((_DWORD *)this + 84);
      v12 = *((_DWORD *)this + 70);
      v13 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v6,
        (unsigned int)&unk_18085A276,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
    UwpWindowWrapperBase::SetWindowId((char *)this - 16, v2, 0LL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x619,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v9);
  }
}
