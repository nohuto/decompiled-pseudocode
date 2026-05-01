/*
 * XREFs of ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@Z @ 0x180191A78
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A59D0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@@Z @ 0x180191D04 (--0-$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 *     ??_9IInputHostLayout@@$BBI@AA @ 0x1801F1630 (--_9IInputHostLayout@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CActionCenterExperienceManager *>(
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
  unsigned __int64 v12; // [rsp+60h] [rbp+28h]
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
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IInputHostLayout::`vcall'{24,{flat}}(a2, (v12 + 88) & ((unsigned __int128)-(__int128)v12 >> 64));
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IInputHostLayout::`vcall'{32,{flat}};
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>::__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>(
                            a1 + 8,
                            v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  return 0LL;
}
