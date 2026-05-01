/*
 * XREFs of ??0_lambda_32cddfead7c6f8562f674df7c4355998_@@QEAA@AEBQ8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZAEBV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@$$QEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x1805F97D4
 * Callers:
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x1805F9460 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall _lambda_32cddfead7c6f8562f674df7c4355998_::_lambda_32cddfead7c6f8562f674df7c4355998_(
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
