/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x1C0217BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x1C0217C24 (-CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z.c)
 *     DxgkCompletePnPTransition @ 0x1C0217CD4 (DxgkCompletePnPTransition.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0217DA0 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 */

unsigned __int8 __fastcall DpiFinishPnPTransitionCallback(void *a1, int a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *Global; // rax

  v3 = 1;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGSESSIONMGR::FinishPnPTransitionOnSession(*((DXGSESSIONMGR **)Global + 122), a1, a3);
    }
  }
  else if ( a2 == 2 )
  {
    DxgkCompletePnPTransition(a1);
  }
  else if ( !a2 && a1 )
  {
    v6 = DXGGLOBAL_GetGlobal();
    return DXGSESSIONMGR::CheckPnPTransitionForSession(*((DXGSESSIONMGR **)v6 + 122), a1, a3);
  }
  return v3;
}
