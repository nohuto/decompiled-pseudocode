/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0005050
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C00050DC (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0005550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0185AD0 (RIMRefreshDeviceAttributes.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(
        CKeyboardSensor *this,
        _WORD *a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v10; // rcx
  bool v12; // [rsp+20h] [rbp-18h]

  v8 = (unsigned __int16)(*a2 + 3) <= 1u;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  if ( DeviceInfo )
  {
    v12 = v8;
    if ( (unsigned int)CKeyboardProcessor::ProcessInput(v10, DeviceInfo, a2, a4, v12) == 1 )
      RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), a5);
  }
  return 0LL;
}
