/*
 * XREFs of ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18019863C
 * Callers:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180198BD8 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x18011D4E4 (-SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z.c)
 *     ?SetZoomIncreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x18011D528 (-SetZoomIncreasingThresholds@ManipulationInjector@@QEAAXJJ@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011D808 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x18011D878 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180196234 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ @ 0x1801962D4 (-GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ.c)
 */

void __fastcall ControllerProcessor::StartInteractionHelper(__int64 a1, int a2)
{
  POINT *CursorPosition; // rax
  POINT v5; // rdx
  BOOL v6; // eax
  int v7; // ecx
  float DisplaySizeScaleFactor; // xmm6_4
  struct tagPOINT v9; // [rsp+40h] [rbp+8h] BYREF

  CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition((ControllerProcessor *)a1, &v9);
  v5 = *CursorPosition;
  *(POINT *)(a1 + 360) = *CursorPosition;
  v6 = PtInRect((const RECT *)(a1 + 312), v5);
  v7 = 0;
  if ( v6 )
  {
    if ( a2 == 1 )
    {
      ManipulationInjector::StartPan((ManipulationInjector *)(a1 + 448), (struct tagPOINT *)(a1 + 360), 0);
    }
    else
    {
      DisplaySizeScaleFactor = ControllerProcessor::GetDisplaySizeScaleFactor((ControllerProcessor *)a1);
      ManipulationInjector::SetZoomDecreasingThresholds(
        (ManipulationInjector *)(a1 + 448),
        (int)(float)(DisplaySizeScaleFactor * 150.0),
        100);
      ManipulationInjector::SetZoomIncreasingThresholds(
        (ManipulationInjector *)(a1 + 448),
        (int)(float)(DisplaySizeScaleFactor * 80.0));
      ManipulationInjector::StartZoom((ManipulationInjector *)(a1 + 448), (struct tagPOINT *)(a1 + 360), a2 == 16, 0);
    }
    v7 = a2;
  }
  *(_DWORD *)(a1 + 1260) = v7;
}
