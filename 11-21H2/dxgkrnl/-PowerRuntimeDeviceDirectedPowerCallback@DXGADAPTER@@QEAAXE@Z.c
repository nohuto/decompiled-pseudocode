/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C004410C
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C0049BC0 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C0049C10 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x1C005F6B4 (DpiRequestDevicePowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02E3670 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, unsigned __int8 a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  WdLogSingleEntry1(9LL, a2);
  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::SetDFxEngaged(Global, a2 == 0);
  v5 = 1LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( !a2 )
  {
    *(_BYTE *)(v6 + 4152) = 1;
    v5 = 4LL;
  }
  DpiRequestDevicePowerIrp(v6, v5);
}
