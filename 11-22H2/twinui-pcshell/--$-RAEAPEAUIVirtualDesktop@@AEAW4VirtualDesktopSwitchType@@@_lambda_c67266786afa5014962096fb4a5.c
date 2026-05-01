/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@_lambda_c67266786afa5014962096fb4a54600c_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAW4VirtualDesktopSwitchType@@@Z @ 0x1805F883C
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x1805F8C04 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV-$tuple@PEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall _lambda_c67266786afa5014962096fb4a54600c_::operator()<IVirtualDesktop * &,enum VirtualDesktopSwitchType &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  int **v4; // rsi
  int v5; // edi
  int *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = **a1;
  if ( *v7 >= 0 )
  {
    v5 = *a4;
    *v7 = 0;
  }
  v8 = *a3;
  v9 = 0LL;
  v11 = 0LL;
  if ( **v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(&v11, v8);
    **v4 = 0;
    v9 = v11;
  }
  *(_DWORD *)a2 = v5;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (__int64 *)(a2 + 8) != &v11 )
  {
    v11 = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return a2;
}
