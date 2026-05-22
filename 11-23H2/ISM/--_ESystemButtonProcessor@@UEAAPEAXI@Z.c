/*
 * XREFs of ??_ESystemButtonProcessor@@UEAAPEAXI@Z @ 0x1801D3158
 * Callers:
 *     ??_ESystemButtonProcessor@@W7EAAPEAXI@Z @ 0x18006ADF0 (--_ESystemButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

SystemButtonProcessor *__fastcall SystemButtonProcessor::`vector deleting destructor'(
        SystemButtonProcessor *this,
        char a2)
{
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
