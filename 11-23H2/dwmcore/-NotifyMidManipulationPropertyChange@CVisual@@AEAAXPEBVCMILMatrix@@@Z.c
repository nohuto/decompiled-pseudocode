/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800F26A4
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D310 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060300 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800B0730 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18019E590 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CVisual *this, const struct CMILMatrix *a2)
{
  CComposition *v4; // rbx
  struct CManipulationManager *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 101) & 0x40) != 0 )
  {
    v4 = (CComposition *)*((_QWORD *)this + 2);
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
    if ( (int)CComposition::GetManipulationManager(v4, &v5) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(v5, this, a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
  }
}
