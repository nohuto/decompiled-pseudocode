/*
 * XREFs of ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@QEAA@$$QEAV01@@Z @ 0x18053ED88
 * Callers:
 *     ??$?0V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@?$CTaskWrapper@V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@Z @ 0x18053D7F0 (--$-0V_lambda_4a1cc2f9c280bc637b058ad40df178d7_@@@-$CTaskWrapper@V_lambda_4a1cc2f9c280bc637b058a.c)
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z011@Z @ 0x18053E4B8 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIObjectArr_ea_18053E4B8.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@V756@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@@Z @ 0x18053EA14 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // rdx

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 + 1 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  v3 = a2 + 2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
