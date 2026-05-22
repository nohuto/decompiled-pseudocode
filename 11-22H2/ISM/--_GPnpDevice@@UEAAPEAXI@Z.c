/*
 * XREFs of ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18000EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x180063E68 (-UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
PnpDevice *__fastcall PnpDevice::`scalar deleting destructor'(PnpDevice *this, char a2)
{
  void *v4; // rdi
  RefCountedObject *v5; // rcx

  *(_QWORD *)this = &PnpDevice::`vftable';
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    PnpDevice::UnregisterDeviceHandleNotifications(this);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, -1LL);
  if ( v4 != (void *)-1LL )
  {
    CancelIoEx(v4, 0LL);
    CloseHandle(v4);
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v5 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v5);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
    __global_delete(this, 0x98uLL);
  }
  return this;
}
