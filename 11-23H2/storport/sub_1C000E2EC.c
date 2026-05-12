/*
 * XREFs of sub_1C000E2EC @ 0x1C000E2EC
 * Callers:
 *     sub_1C000B880 @ 0x1C000B880 (sub_1C000B880.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C000EA10 (StorPortSetDeviceQueueDepth.c)
 *     sub_1C00144FC @ 0x1C00144FC (sub_1C00144FC.c)
 *     sub_1C00146EC @ 0x1C00146EC (sub_1C00146EC.c)
 *     sub_1C0014A1C @ 0x1C0014A1C (sub_1C0014A1C.c)
 *     sub_1C0014BC8 @ 0x1C0014BC8 (sub_1C0014BC8.c)
 *     sub_1C0015050 @ 0x1C0015050 (sub_1C0015050.c)
 *     sub_1C00202B8 @ 0x1C00202B8 (sub_1C00202B8.c)
 *     sub_1C0020334 @ 0x1C0020334 (sub_1C0020334.c)
 *     sub_1C0021134 @ 0x1C0021134 (sub_1C0021134.c)
 *     sub_1C002204C @ 0x1C002204C (sub_1C002204C.c)
 *     StorPortGetLogicalUnit @ 0x1C0025FF0 (StorPortGetLogicalUnit.c)
 *     sub_1C0045280 @ 0x1C0045280 (sub_1C0045280.c)
 *     sub_1C004548C @ 0x1C004548C (sub_1C004548C.c)
 *     sub_1C00454F4 @ 0x1C00454F4 (sub_1C00454F4.c)
 *     sub_1C00456DC @ 0x1C00456DC (sub_1C00456DC.c)
 *     sub_1C0045960 @ 0x1C0045960 (sub_1C0045960.c)
 *     sub_1C0045A50 @ 0x1C0045A50 (sub_1C0045A50.c)
 *     sub_1C0045B10 @ 0x1C0045B10 (sub_1C0045B10.c)
 *     sub_1C0045BA0 @ 0x1C0045BA0 (sub_1C0045BA0.c)
 *     sub_1C0045CA0 @ 0x1C0045CA0 (sub_1C0045CA0.c)
 *     sub_1C0045CE0 @ 0x1C0045CE0 (sub_1C0045CE0.c)
 *     StorPortAllocateRegistryBuffer @ 0x1C0045D90 (StorPortAllocateRegistryBuffer.c)
 *     StorPortBusy @ 0x1C0045E10 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C00460E0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0046270 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00463F0 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x1C0046430 (StorPortGetBusData.c)
 *     StorPortGetDeviceBase @ 0x1C0046480 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x1C00465B0 (StorPortGetUncachedExtension.c)
 *     StorPortLogError @ 0x1C00468B0 (StorPortLogError.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046E60 (StorPortReady.c)
 *     StorPortRegistryRead @ 0x1C0046F70 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C0047100 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x1C0047270 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0047380 (StorPortResumeDevice.c)
 *     StorPortSetBusDataByOffset @ 0x1C0047530 (StorPortSetBusDataByOffset.c)
 *     StorPortSynchronizeAccess @ 0x1C0047590 (StorPortSynchronizeAccess.c)
 *     sub_1C0047794 @ 0x1C0047794 (sub_1C0047794.c)
 *     sub_1C0047878 @ 0x1C0047878 (sub_1C0047878.c)
 *     sub_1C0047948 @ 0x1C0047948 (sub_1C0047948.c)
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C00484D0 @ 0x1C00484D0 (sub_1C00484D0.c)
 *     sub_1C0048B44 @ 0x1C0048B44 (sub_1C0048B44.c)
 *     sub_1C0048CD0 @ 0x1C0048CD0 (sub_1C0048CD0.c)
 *     sub_1C0048D98 @ 0x1C0048D98 (sub_1C0048D98.c)
 *     sub_1C0048F2C @ 0x1C0048F2C (sub_1C0048F2C.c)
 *     sub_1C0049250 @ 0x1C0049250 (sub_1C0049250.c)
 *     sub_1C00492E4 @ 0x1C00492E4 (sub_1C00492E4.c)
 *     sub_1C00493F4 @ 0x1C00493F4 (sub_1C00493F4.c)
 *     sub_1C0049614 @ 0x1C0049614 (sub_1C0049614.c)
 *     sub_1C004997C @ 0x1C004997C (sub_1C004997C.c)
 *     sub_1C0049B10 @ 0x1C0049B10 (sub_1C0049B10.c)
 *     sub_1C004A57C @ 0x1C004A57C (sub_1C004A57C.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1C000E2EC(__int64 a1)
{
  _DWORD **v1; // rdx
  _DWORD *result; // rax

  v1 = *(_DWORD ***)(a1 - 16);
  result = 0LL;
  if ( v1 )
  {
    result = *v1;
    if ( *v1 )
    {
      if ( *result != 1094997074 )
        return 0LL;
    }
  }
  return result;
}
