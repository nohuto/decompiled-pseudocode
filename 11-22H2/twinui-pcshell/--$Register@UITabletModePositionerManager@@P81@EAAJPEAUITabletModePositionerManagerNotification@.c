/*
 * XREFs of ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18019D8D0
 * Callers:
 *     ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x18019D710 (-Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_02c30d784b9a4d7433ee7b2ec6825d50_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_02c30d784b9a4d7433ee7b2ec6825d50_@@@Z @ 0x1802132F8 (--$-4V_lambda_02c30d784b9a4d7433ee7b2ec6825d50_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9ITabletModePositionerManager@@$BBI@AA @ 0x1802A75C0 (--_9ITabletModePositionerManager@@$BBI@AA.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v12; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v6 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  ITabletModePositionerManager::`vcall'{24,{flat}}(a2, (v12 + 16) & -(__int64)(v12 != 0));
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) ITabletModePositionerManager::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_02c30d784b9a4d7433ee7b2ec6825d50_,void>(a1, v8);
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  return 0LL;
}
