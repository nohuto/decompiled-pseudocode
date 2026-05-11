/*
 * XREFs of USBHwGetDeviceIDString @ 0x1C00338CC
 * Callers:
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0019680 (memmove.c)
 *     RegistryReadPnPKeyValue @ 0x1C0031C44 (RegistryReadPnPKeyValue.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C0035C2C (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBHwGetDeviceIDString(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  int StringDescriptor; // edi
  __int64 v8; // rbp
  int v9; // ebx
  __int64 Pool2; // rax
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rbp
  void *v14; // rax
  void *v15; // rbx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  P = 0LL;
  StringDescriptor = -1073741822;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 32LL);
  *a2 = 0LL;
  *a3 = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"IgnoreHwString", (__int64)a3, &P) < 0
    || (v9 = *(_DWORD *)P, ExFreePool(P), v9 != 1) )
  {
    Pool2 = ExAllocatePool2(64LL, 255LL, 1096972357LL);
    LODWORD(P) = 0;
    v12 = Pool2;
    if ( Pool2 )
    {
      LOBYTE(v11) = *(_BYTE *)(v8 + 15);
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v11, 1033, Pool2);
      if ( StringDescriptor >= 0 )
      {
        v13 = (unsigned int)((_DWORD)P - 2);
        if ( (_DWORD)P != 2 )
        {
          v14 = (void *)ExAllocatePool2(256LL, v13 + 2, 1096972357LL);
          v15 = v14;
          if ( v14 )
          {
            memmove(v14, (const void *)(v12 + 2), (unsigned int)v13);
            StringDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v15, ExFreePool);
            if ( StringDescriptor < 0 )
            {
              ExFreePool(v15);
            }
            else
            {
              *a2 = v15;
              *a3 = v13 + 2;
            }
          }
          else
          {
            StringDescriptor = -1073741670;
          }
        }
      }
      ExFreePool((PVOID)v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
