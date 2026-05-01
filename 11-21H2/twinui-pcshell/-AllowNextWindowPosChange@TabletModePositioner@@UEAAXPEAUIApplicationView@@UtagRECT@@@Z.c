/*
 * XREFs of ?AllowNextWindowPosChange@TabletModePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1805005D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

void __fastcall TabletModePositioner::AllowNextWindowPosChange(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  LONG top; // edx
  LONG right; // r9d
  LONG bottom; // r10d

  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 40, (__int64)a2);
  top = a3->top;
  right = a3->right;
  bottom = a3->bottom;
  *((_DWORD *)this + 90) = a3->left;
  *((_DWORD *)this + 91) = top;
  *((_DWORD *)this + 92) = right;
  *((_DWORD *)this + 93) = bottom;
}
