/*
 * XREFs of ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395130
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004562C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1803943B4 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnSetForegroundFailed(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  HWND ForegroundWindow; // rax
  int v5; // edi
  DWORD WindowThreadProcessId; // ebp
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  _DWORD v12[10]; // [rsp+40h] [rbp-28h] BYREF
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  DWORD v14; // [rsp+80h] [rbp+18h] BYREF
  DWORD v15; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                    (__int64)this,
                    _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1] > 5u )
  {
    ForegroundWindow = GetForegroundWindow();
    dwProcessId = 0;
    v5 = (int)ForegroundWindow;
    WindowThreadProcessId = GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
    v8 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v7,
                     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      v15 = dwProcessId;
      v14 = WindowThreadProcessId;
      v12[0] = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&unk_1806AC9BA,
        0,
        v9,
        (__int64)v12,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  v10 = *((_QWORD *)this + 42);
  if ( v10 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v10 + 72LL))(v10, a2);
  CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  return 0LL;
}
