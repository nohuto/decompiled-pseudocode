/*
 * XREFs of ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x18010BA64
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_064c5b0d58e120ccba3cc7bbdd1104f7_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_064c5b0d58e120ccba3cc7bbdd1104f7_@@@Z @ 0x18010D4C8 (--$-4V_lambda_064c5b0d58e120ccba3cc7bbdd1104f7_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IImmersiveWindowMessageService@@$BBI@AA @ 0x1801EAE10 (--_9IImmersiveWindowMessageService@@$BBI@AA.c)
 */

__int64 __fastcall SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  if ( *(_DWORD *)(a1 + 120) )
  {
    v8 = -2147019873;
    v10 = 41LL;
  }
  else
  {
    v8 =  IImmersiveWindowMessageService::`vcall'{24,{flat}}(a2, 794LL, (a6 + 128) & -(__int64)(a6 != 0));
    if ( v8 >= 0 )
    {
      v13 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      v11[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      v11[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
      wistd::function<long (unsigned long)>::operator=<_lambda_064c5b0d58e120ccba3cc7bbdd1104f7_,void>(a1, v11);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      return 0LL;
    }
    v10 = 42LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
