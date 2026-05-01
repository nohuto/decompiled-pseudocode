/*
 * XREFs of ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c172_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAI2@Z @ 0x18053D994
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@1@@Z @ 0x18053DD88 (--$AddRefCountWrappers@PEAUIObjectArray@@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIObjectArray@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall _lambda_55150664767eca596a859a77bb97c172_::operator()<IObjectArray * &,IVirtualDesktop * &,unsigned int &,unsigned int &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        _DWORD *a6)
{
  int **v6; // rdi
  int v10; // r15d
  int *v11; // rdx
  int v12; // esi
  __int64 v13; // r14
  int *v14; // rax
  __int64 v15; // r14
  _DWORD *v16; // rax
  __int64 v18; // [rsp+50h] [rbp+30h] BYREF

  v6 = *a1;
  v10 = 0;
  v11 = **a1;
  if ( *v11 >= 0 )
  {
    v10 = *a6;
    *v11 = 0;
    v11 = *v6;
  }
  v12 = 0;
  if ( *v11 >= 0 )
  {
    v12 = *a5;
    *v11 = 0;
  }
  v13 = *a4;
  v18 = 0LL;
  if ( **v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(&v18, v13);
    v14 = *v6;
    v6 = *a1;
    *v14 = 0;
  }
  v15 = *a3;
  v16 = 0LL;
  a6 = 0LL;
  if ( **v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)&a6, v15);
    **v6 = 0;
    v16 = a6;
  }
  *(_DWORD *)a2 = v10;
  *(_DWORD *)(a2 + 4) = v12;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (__int64 *)(a2 + 8) != &v18 )
  {
    *(_QWORD *)(a2 + 8) = v18;
    v18 = 0LL;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (_DWORD **)(a2 + 16) != &a6 )
  {
    *(_QWORD *)(a2 + 16) = v16;
    a6 = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  return a2;
}
