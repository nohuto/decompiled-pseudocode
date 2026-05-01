/*
 * XREFs of ??$AddRefCountWrappers@PEAUIApplicationView@@@@YAJV?$tuple@PEAUIApplicationView@@@std@@PEAV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@@Z @ 0x18010F978
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@Z0@Z @ 0x18010F65C (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@@CVir.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall AddRefCountWrappers<IApplicationView *>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+50h] [rbp+30h] BYREF
  __int64 v8; // [rsp+58h] [rbp+38h] BYREF

  v2 = *a1;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  v4 = v7;
  if ( v7 != v2 )
  {
    v8 = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v8 = v7;
    v7 = v2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
    v4 = v7;
  }
  v7 = 0LL;
  v8 = v4;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  v5 = *a2;
  v8 = 0LL;
  v7 = v5;
  *a2 = v4;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
  return 0LL;
}
