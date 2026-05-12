/*
 * XREFs of PmIoctlSetSanSettings @ 0x1C002619C
 * Callers:
 *     ?PmControlDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E8A0 (-PmControlDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlSetSanSettings(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r15
  HANDLE v4; // rcx
  NTSTATUS v5; // ebx
  _DWORD *v6; // rsi
  _DWORD *Data; // rsi
  struct _KMUTANT *v8; // rdi
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = 0LL;
  KeyHandle = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v6 = *(_DWORD **)(a2 + 24);
    if ( *v6 == 8 )
    {
      Data = v6 + 1;
      if ( (unsigned int)(*Data - 1) > 3 )
      {
        v5 = -1073741811;
        v8 = (struct _KMUTANT *)(v2 + 16);
      }
      else
      {
        KeWaitForSingleObject((PVOID)(v2 + 16), Executive, 0, 0, 0LL);
        v3 = 1;
        v5 = IoOpenDriverRegistryKey(*(_QWORD *)(v2 + 8), 1LL, 2LL, 0LL, &KeyHandle);
        v8 = (struct _KMUTANT *)(v2 + 16);
        if ( v5 >= 0 )
        {
          v5 = ZwSetValueKey(KeyHandle, &SanPolicy, 0, 4u, Data, 4u);
          if ( v5 >= 0 )
            *(_DWORD *)(v2 + 160) = *Data;
        }
        v4 = KeyHandle;
      }
      if ( v4 )
        ZwClose(v4);
      if ( v3 )
        KeReleaseMutex(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return (unsigned int)v5;
}
