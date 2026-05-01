/*
 * XREFs of ??0_lambda_285515be14913d5135ead0b0d8c961c0_@@QEAA@AEBQ8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@ZAEBV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@$$QEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@@Z @ 0x18053ECCC
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@@Z @ 0x18053E7D8 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall _lambda_285515be14913d5135ead0b0d8c961c0_::_lambda_285515be14913d5135ead0b0d8c961c0_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v6; // rcx
  _QWORD *v7; // rcx

  *a1 = *a2;
  v6 = a1 + 1;
  *v6 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  a1[2] = 0LL;
  if ( a1 + 2 != a4 )
  {
    a1[2] = *a4;
    *a4 = 0LL;
  }
  v7 = a4 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a4 + 1 )
  {
    a1[3] = *v7;
    *v7 = 0LL;
  }
  return a1;
}
