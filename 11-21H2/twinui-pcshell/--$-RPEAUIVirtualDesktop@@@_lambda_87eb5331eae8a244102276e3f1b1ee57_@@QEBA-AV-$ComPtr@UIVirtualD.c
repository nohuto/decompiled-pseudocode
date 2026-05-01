/*
 * XREFs of ??$?RPEAUIVirtualDesktop@@@_lambda_87eb5331eae8a244102276e3f1b1ee57_@@QEBA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEAUIVirtualDesktop@@@Z @ 0x18053DC98
 * Callers:
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809262d_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@1@Z @ 0x18053DAC4 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 */

__int64 *__fastcall _lambda_87eb5331eae8a244102276e3f1b1ee57_::operator()<IVirtualDesktop *>(
        int **a1,
        __int64 *a2,
        __int64 a3)
{
  int *v3; // rax

  v3 = *a1;
  *a2 = 0LL;
  if ( *v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(a2, a3);
    **a1 = 0;
  }
  return a2;
}
