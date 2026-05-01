/*
 * XREFs of ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18010C9CC
 * Callers:
 *     ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x18010C8E0 (-Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_5dcd91ecc3684c8226dc885d9bd4ba79_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_5dcd91ecc3684c8226dc885d9bd4ba79_@@@Z @ 0x18010DFEC (--$-4V_lambda_5dcd91ecc3684c8226dc885d9bd4ba79_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9ITabletModePositionerManager@@$BBI@AA @ 0x18020B760 (--_9ITabletModePositionerManager@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  unsigned __int64 v12; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v7 = 41LL;
  }
  else
  {
    v5 =  ITabletModePositionerManager::`vcall'{24,{flat}}(a2, (v12 + 16) & ((unsigned __int128)-(__int128)v12 >> 64));
    if ( v5 >= 0 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v8[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = (__int64) ITabletModePositionerManager::`vcall'{32,{flat}};
      wistd::function<long (unsigned long)>::operator=<_lambda_5dcd91ecc3684c8226dc885d9bd4ba79_,void>(a1, v8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
      return 0LL;
    }
    v7 = 42LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
