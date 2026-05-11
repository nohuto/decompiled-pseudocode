/*
 * XREFs of USBHwGetDeviceIDString @ 0x1C0032210
 * Callers:
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     RegistryReadPnPKeyValue @ 0x1C002A07C (RegistryReadPnPKeyValue.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C0033770 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBHwGetDeviceIDString(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int StringDescriptor; // edi
  __int64 v7; // rbp
  int v8; // ebx
  __int64 Pool2; // rax
  int v10; // edx
  __int64 v11; // rsi
  void *v12; // rax
  void *v13; // rbx

  StringDescriptor = -1073741822;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 32LL);
  *a2 = 0LL;
  *a3 = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32)) < 0
    || (v8 = MEMORY[0], ExFreePool(0LL), v8 != 1) )
  {
    Pool2 = ExAllocatePool2(64LL, 255LL, 1096972357LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      LOBYTE(v10) = *(_BYTE *)(v7 + 15);
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v10, 1033, Pool2);
      if ( StringDescriptor >= 0 )
      {
        v12 = (void *)ExAllocatePool2(256LL, 0x100000000LL, 1096972357LL);
        v13 = v12;
        if ( v12 )
        {
          memmove(v12, (const void *)(v11 + 2), 0xFFFFFFFEuLL);
          StringDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v13, ExFreePool);
          if ( StringDescriptor < 0 )
          {
            ExFreePool(v13);
          }
          else
          {
            *a2 = v13;
            *a3 = 0;
          }
        }
        else
        {
          StringDescriptor = -1073741670;
        }
      }
      ExFreePool((PVOID)v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
