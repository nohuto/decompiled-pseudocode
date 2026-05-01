/*
 * XREFs of ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809262d_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@1@Z @ 0x18053DAC4
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@1@@Z @ 0x18053DE38 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU2@@@YAJV-$tuple@PEAUIObjectArr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 *     ??$?RPEAUIVirtualDesktop@@@_lambda_87eb5331eae8a244102276e3f1b1ee57_@@QEBA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEAUIVirtualDesktop@@@Z @ 0x18053DC98 (--$-RPEAUIVirtualDesktop@@@_lambda_87eb5331eae8a244102276e3f1b1ee57_@@QEBA-AV-$ComPtr@UIVirtualD.c)
 */

_QWORD *__fastcall _lambda_9399efa3dcb6c98f5ff250874809262d_::operator()<IObjectArray * &,IVirtualDesktop * &,IVirtualDesktop * &>(
        int ***a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int **v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v9 = (_QWORD *)_lambda_87eb5331eae8a244102276e3f1b1ee57_::operator()<IVirtualDesktop *>(*a1, &v17, *a5);
  v10 = _lambda_87eb5331eae8a244102276e3f1b1ee57_::operator()<IVirtualDesktop *>(*a1, &v16, *a4);
  a5 = 0LL;
  v11 = (_QWORD *)v10;
  v12 = *a1;
  v13 = *a3;
  if ( **v12 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)&a5, v13);
    **v12 = 0;
  }
  *a2 = 0LL;
  if ( a2 != v9 )
  {
    *a2 = *v9;
    *v9 = 0LL;
  }
  a2[1] = 0LL;
  if ( a2 + 1 != v11 )
  {
    a2[1] = *v11;
    *v11 = 0LL;
  }
  a2[2] = 0LL;
  if ( a2 + 2 != &a5 )
  {
    v14 = a5;
    a5 = 0LL;
    a2[2] = v14;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return a2;
}
