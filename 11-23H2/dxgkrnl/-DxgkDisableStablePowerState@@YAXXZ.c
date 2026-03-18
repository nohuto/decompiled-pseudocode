/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C03127CC
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020A28 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C03126CC (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkDisableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::DisableStablePowerState(Global);
}
