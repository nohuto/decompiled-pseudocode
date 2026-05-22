/*
 * XREFs of ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1801DA570
 * Callers:
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1801DA590 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801DA630 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall GameInputProcessor::IsLegacyPnpDevice(struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 2) >= 0x60Cu && *((_WORD *)a1 + 38) != 0;
}
