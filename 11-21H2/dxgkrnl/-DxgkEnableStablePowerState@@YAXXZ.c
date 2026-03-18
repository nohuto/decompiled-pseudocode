/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C0309BF8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0029028 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0309E28 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkEnableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::EnableStablePowerState(Global);
}
