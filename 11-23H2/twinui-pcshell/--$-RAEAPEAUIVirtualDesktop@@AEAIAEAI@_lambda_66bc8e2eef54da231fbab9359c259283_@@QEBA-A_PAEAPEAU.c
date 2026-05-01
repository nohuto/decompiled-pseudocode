/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAI1@Z @ 0x1805F86A8
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@1@@Z @ 0x1805F89D4 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIVirtualDesktop@@II@std@@PEAV-$t.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall _lambda_66bc8e2eef54da231fbab9359c259283_::operator()<IVirtualDesktop * &,unsigned int &,unsigned int &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        int *a4,
        _DWORD *a5)
{
  int **v5; // rdi
  int v6; // ebp
  int *v8; // rcx
  int v9; // esi
  __int64 v10; // r14
  _DWORD *v11; // rax

  v5 = *a1;
  v6 = 0;
  v8 = **a1;
  if ( *v8 >= 0 )
  {
    v6 = *a5;
    *v8 = 0;
  }
  v9 = 0;
  if ( **v5 >= 0 )
  {
    v9 = *a4;
    **v5 = 0;
  }
  v10 = *a3;
  v11 = 0LL;
  a5 = 0LL;
  if ( **v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)&a5, v10);
    **v5 = 0;
    v11 = a5;
  }
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 4) = v9;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_DWORD **)(a2 + 8) != &a5 )
  {
    a5 = 0LL;
    *(_QWORD *)(a2 + 8) = v11;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  return a2;
}
