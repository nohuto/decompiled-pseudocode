/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@_lambda_d7371d012a69797edda603f27c068405_@@QEBA?AV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@AEAPEAUIVirtualDesktop@@AEAPEAUHSTRING__@@@Z @ 0x18053DBC8
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x18053DEEC (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ?Wrap@?$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18053F8EC (-Wrap@-$RefCountWrapper@PEAUHSTRING__@@X@@SAJPEAUHSTRING__@@PEAVHString@Wrappers@WRL@Microsoft@@.c)
 */

_QWORD *__fastcall _lambda_d7371d012a69797edda603f27c068405_::operator()<IVirtualDesktop * &,HSTRING__ * &>(
        int ***a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  int **v4; // rsi
  __int64 v5; // rbx
  int v9; // eax
  int *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a1;
  v5 = 0LL;
  v15 = 0LL;
  if ( **v4 >= 0 )
  {
    v9 = RefCountWrapper<HSTRING__ *,void>::Wrap(*a4, &v15);
    v10 = *v4;
    v4 = *a1;
    v5 = v15;
    *v10 = v9;
  }
  v11 = *a3;
  v12 = 0LL;
  v14 = 0LL;
  if ( **v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(&v14, v11);
    **v4 = 0;
    v12 = v14;
  }
  *a2 = v5;
  a2[1] = 0LL;
  if ( a2 + 1 != &v14 )
  {
    v14 = 0LL;
    a2[1] = v12;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  WindowsDeleteString(0LL);
  return a2;
}
