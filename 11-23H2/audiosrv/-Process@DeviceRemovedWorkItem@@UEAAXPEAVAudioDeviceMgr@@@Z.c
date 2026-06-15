/*
 * XREFs of ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180006560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeviceRemovedWorkItem::Process(const unsigned __int16 **this, struct AudioDeviceMgr *a2)
{
  AudioDeviceMgr::ProcessOnDeviceRemoved(a2, this[1]);
}
