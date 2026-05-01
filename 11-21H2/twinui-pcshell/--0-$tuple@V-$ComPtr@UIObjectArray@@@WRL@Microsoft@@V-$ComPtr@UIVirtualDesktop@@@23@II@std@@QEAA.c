/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA@$$QEAV01@@Z @ 0x18053ED38
 * Callers:
 *     ??$?0V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@?$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053D854 (--$-0V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@-$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z01II@Z @ 0x18053E3E0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E3E0.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@@Z @ 0x18053E8F0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
        __int64 a1,
        _DWORD *a2)
{
  int v2; // eax
  _QWORD *v4; // rdx
  _QWORD *v5; // r8

  *(_DWORD *)a1 = *a2;
  v2 = a2[1];
  v4 = a2 + 2;
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_QWORD *)(a1 + 8) != v4 )
  {
    *(_QWORD *)(a1 + 8) = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 4;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != v5 )
  {
    *(_QWORD *)(a1 + 16) = *v5;
    *v5 = 0LL;
  }
  return a1;
}
