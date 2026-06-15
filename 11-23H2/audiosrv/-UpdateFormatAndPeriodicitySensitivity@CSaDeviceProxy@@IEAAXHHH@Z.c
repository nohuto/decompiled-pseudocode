/*
 * XREFs of ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x18010A73C
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18004A3A0 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18004AD20 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180109360 (-OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1801093B0 (-OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180109400 (-OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity(CSaDeviceProxy *this, int a2, int a3, int a4)
{
  *((_DWORD *)this + 24) += a2;
  *((_DWORD *)this + 23) += a3;
  *((_DWORD *)this + 25) += a4;
  *((_QWORD *)this + 13) = GetTickCount64();
}
