/*
 * XREFs of ??$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@ZPEAU2@W43@@SmartCookie@@QEAAJPEAUIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@Z12@Z @ 0x18065D160
 * Callers:
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180662D90 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_1cd33828f92588cd94e1189dab4faea1_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_1cd33828f92588cd94e1189dab4faea1_@@@Z @ 0x180220390 (--$-4V_lambda_1cd33828f92588cd94e1189dab4faea1_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IImmersiveRawInputProvider@@$BBI@AA @ 0x1802AAF20 (--_9IImmersiveRawInputProvider@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<IImmersiveRawInputProvider,long (IImmersiveRawInputProvider::*)(IUnknown *,enum RAW_INPUT_TYPE,unsigned long *),long (IImmersiveRawInputProvider::*)(unsigned long),IUnknown *,enum RAW_INPUT_TYPE>(
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
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
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
  v5 =  IImmersiveRawInputProvider::`vcall'{24,{flat}}(a2);
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IImmersiveRawInputProvider::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_1cd33828f92588cd94e1189dab4faea1_,void>(a1, (__int64)v8);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  return 0LL;
}
