/*
 * XREFs of USBHwGetAudioConfigurationDescriptor @ 0x1C00336BC
 * Callers:
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 * Callees:
 *     USBHwGetDescriptor @ 0x1C00337F0 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioConfigurationDescriptor(int a1, __int64 a2, unsigned __int16 **a3)
{
  int Descriptor; // ebx
  __int64 Pool2; // rax
  unsigned __int16 *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // eax
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 9;
  Descriptor = -1073741670;
  Pool2 = ExAllocatePool2(64LL, 9LL, 1096972357LL);
  v7 = (unsigned __int16 *)Pool2;
  if ( Pool2 )
  {
    Descriptor = USBHwGetDescriptor(a1, 2, 0, 0, (__int64)&v13, Pool2);
    if ( Descriptor < 0 )
      goto LABEL_10;
    v8 = v7[1];
    if ( (unsigned __int16)v8 < 9u )
    {
LABEL_9:
      Descriptor = -1073741668;
      goto LABEL_10;
    }
    Descriptor = -1073741670;
    v13 = v7[1];
    v9 = v8;
    ExFreePool(v7);
    v10 = ExAllocatePool2(64LL, v9 + 2, 1096972357LL);
    v7 = (unsigned __int16 *)v10;
    if ( v10 )
    {
      Descriptor = USBHwGetDescriptor(a1, 2, 0, 0, (__int64)&v13, v10);
      if ( Descriptor >= 0 )
      {
        v11 = v7[1];
        if ( v11 <= v9 && (unsigned __int16)v11 >= 9u )
        {
          *a3 = v7;
          return (unsigned int)Descriptor;
        }
        goto LABEL_9;
      }
LABEL_10:
      ExFreePool(v7);
    }
  }
  return (unsigned int)Descriptor;
}
