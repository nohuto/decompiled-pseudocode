/*
 * XREFs of USBHwGetAudioDeviceDescriptor @ 0x1C0032094
 * Callers:
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     USBHwGetDescriptor @ 0x1C0032134 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioDeviceDescriptor(int a1, _QWORD *a2)
{
  int Descriptor; // edi
  __int64 Pool2; // rax
  void *v6; // rbx
  int v8; // [rsp+50h] [rbp+18h] BYREF

  Descriptor = -1073741670;
  v8 = 18;
  Pool2 = ExAllocatePool2(64LL, 18LL, 1096972357LL);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    Descriptor = USBHwGetDescriptor(a1, 1, 0, 0, (__int64)&v8, Pool2);
    if ( Descriptor < 0 )
      ExFreePool(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)Descriptor;
}
