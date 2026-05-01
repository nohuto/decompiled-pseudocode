/*
 * XREFs of ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1802E9010
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18001BB9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1802274E4 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x180228028 (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18065FE20 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CShellSnapComponent::OnHitTestPartNotifyEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs *a3)
{
  CShellSnapComponent *v5; // rcx
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  tagCURSORINFO pci; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v5 = (CShellSnapComponent *)wil::details::static_lazy<WindowManagementLogging>::get(
                                (__int64)this,
                                (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v12) = *((_BYTE *)a3 + 19) != 0;
    v13 = *((_DWORD *)a3 + 2);
    v9 = *(_QWORD *)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (int)v5,
      (int)&unk_180871CA8,
      0,
      0,
      (__int64)&v9,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( *((_BYTE *)this + 920) && *((_DWORD *)a3 + 2) == 9 )
  {
    if ( *((_BYTE *)a3 + 19) )
    {
      v6 = *(_QWORD *)a3;
      if ( CShellSnapComponent::CanSnapWindow(v5, *(HWND *)a3) )
      {
        pci.cbSize = 24;
        memset(&pci.flags, 0, 20);
        if ( GetCursorInfo(&pci) )
        {
          if ( (pci.flags & 1) != 0 )
          {
            try
            {
              SnapFlyoutHost::ShowFlyoutAsync(*((_QWORD *)this + 114), &v12, v6, 1);
            }
            catch ( ... )
            {
              return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                     retaddr,
                                     (void *)0x708,
                                     (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                     v7);
            }
          }
        }
      }
    }
    else
    {
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), &v12, 0);
    }
  }
  return 0LL;
}
