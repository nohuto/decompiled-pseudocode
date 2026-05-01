/*
 * XREFs of ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18018934C
 * Callers:
 *     ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180188E00 (-SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@@Z @ 0x1801D8140 (--$-4V_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IEnterpriseIdChangeNotificationProvider@@$BBI@AA @ 0x180292010 (--_9IEnterpriseIdChangeNotificationProvider@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
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
  v5 =  IEnterpriseIdChangeNotificationProvider::`vcall'{24,{flat}}(a2, (v12 + 184) & -(__int64)(v12 != 0));
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IEnterpriseIdChangeNotificationProvider::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_c4c044c2a825f9d09f3c641bd8085e17_,void>(a1, v8);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  return 0LL;
}
