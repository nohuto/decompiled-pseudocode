/*
 * XREFs of ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800ED180
 * Callers:
 *     ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800ED2B0 (--_EConsumerControlNexusDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800EAB54 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ @ 0x1800ED300 (-Clear@-$NtList@UInputBufferListEntry@ConsumerControlNexusDevice@@@@QEAAXXZ.c)
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800EDAA4 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConsumerControlNexusDevice::~ConsumerControlNexusDevice(ConsumerControlNexusDevice *this)
{
  struct _HIDP_PREPARSED_DATA *v2; // rcx
  RefCountedObject *v3; // rcx

  *(_QWORD *)this = &ConsumerControlNexusDevice::`vftable';
  if ( *((_BYTE *)this + 136) )
    ConsumerControlNexusDevice::NotifyDeviceRemoval(this);
  PnpDevice::CloseInterface(*((PnpDevice **)this + 2));
  while ( *((_QWORD *)this + 11) )
    SleepEx(0x64u, 1);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 14);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 72);
  NtList<ConsumerControlNexusDevice::InputBufferListEntry>::Clear((char *)this + 48);
  v2 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
  if ( v2 )
    HidD_FreePreparsedData(v2);
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v3 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v3);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
