/*
 * XREFs of ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800EE440
 * Callers:
 *     ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800EE4A0 (--_GConsumerControlGenericDevice@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConsumerControlGenericDevice::~ConsumerControlGenericDevice(HSTRING *this)
{
  RefCountedObject *v2; // rcx

  *this = (HSTRING)&ConsumerControlGenericDevice::`vftable';
  WindowsDeleteString(this[3]);
  this[3] = 0LL;
  v2 = (RefCountedObject *)this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    RefCountedObject::Release(v2);
  }
  *this = (HSTRING)&RefCountedObject::`vftable';
}
