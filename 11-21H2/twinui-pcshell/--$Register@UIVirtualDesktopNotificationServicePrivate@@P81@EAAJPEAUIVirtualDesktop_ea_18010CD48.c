/*
 * XREFs of ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVCVirtualDesktopSoftLandingHandler@@@Z @ 0x18010CD48
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010CC80 (-RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_4a40864c878cb36353247f9008f42e8a_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_4a40864c878cb36353247f9008f42e8a_@@@Z @ 0x18010D46C (--$-4V_lambda_4a40864c878cb36353247f9008f42e8a_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IVirtualDesktopNotificationServicePrivate@@$BCI@AA @ 0x18020CD70 (--_9IVirtualDesktopNotificationServicePrivate@@$BCI@AA.c)
 */

__int64 ___Register_UIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___SmartCookie__QEAAJPEAUIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVCVirtualDesktopSoftLandingHandler___Z(
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
  __int64 v12; // [rsp+60h] [rbp+28h]
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
    v5 =  IVirtualDesktopNotificationServicePrivate::`vcall'{40,{flat}}(a2, v12);
    if ( v5 >= 0 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v8[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = (__int64) IVirtualDesktopNotificationServicePrivate::`vcall'{48,{flat}};
      wistd::function<long (unsigned long)>::operator=<_lambda_4a40864c878cb36353247f9008f42e8a_,void>(a1, v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
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
