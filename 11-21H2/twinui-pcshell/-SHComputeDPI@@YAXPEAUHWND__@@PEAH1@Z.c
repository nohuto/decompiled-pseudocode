/*
 * XREFs of ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1805F57B8
 * Callers:
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x1805F7B30 (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1805F8538 (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x1805F85F0 (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 * Callees:
 *     ?ComputeSystemDPI@@YAXPEAH0@Z @ 0x1805F56A0 (-ComputeSystemDPI@@YAXPEAH0@Z.c)
 */

void __fastcall SHComputeDPI(HWND a1, int *a2, int *a3)
{
  HWND v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  ComputeSystemDPI((int *)&v5, &v6);
  if ( a2 )
    *a2 = (int)v5;
  if ( a3 )
    *a3 = v6;
}
