/*
 * XREFs of ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@Z @ 0x18053D8B8
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@1@@Z @ 0x18053DCF0 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIObjectArray@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 */

__int64 *__fastcall _lambda_b9b70e6c986f29daea1bfe6e23588cc6_::operator()<IObjectArray * &,IVirtualDesktop * &>(
        int ***a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  int **v5; // rdi
  __int64 v7; // r15
  int *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v15 = 0LL;
  v5 = *a1;
  v7 = *a4;
  if ( ***a1 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(&v15, v7);
    v9 = *v5;
    v5 = *a1;
    *v9 = 0;
  }
  v10 = *a3;
  v11 = 0LL;
  v14 = 0LL;
  if ( **v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v14, v10);
    **v5 = 0;
    v11 = v14;
  }
  *a2 = 0LL;
  if ( a2 != &v15 )
  {
    v12 = v15;
    v15 = 0LL;
    *a2 = v12;
  }
  a2[1] = 0LL;
  if ( a2 + 1 != &v14 )
  {
    v14 = 0LL;
    a2[1] = v11;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  return a2;
}
