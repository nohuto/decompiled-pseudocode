/*
 * XREFs of RegistryGetValue @ 0x1C003093C
 * Callers:
 *     RegistryReadPnPKeyValue @ 0x1C002A07C (RegistryReadPnPKeyValue.c)
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 */

__int64 __fastcall RegistryGetValue(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _DWORD *Pool2; // rdi
  void *v9; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, 0LL, 0, &ResultLength);
  v7 = v6;
  if ( v6 == -2147483643 || v6 == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1096972357LL);
    if ( Pool2 )
    {
      v7 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, ResultLength, &ResultLength);
      if ( v7 >= 0 )
      {
        if ( Pool2[1] == 4 )
        {
          v9 = (void *)ExAllocatePool2(256LL, (unsigned int)Pool2[3], 1096972357LL);
          *a4 = v9;
          if ( v9 )
            memmove(v9, (char *)Pool2 + (unsigned int)Pool2[2], (unsigned int)Pool2[3]);
          else
            v7 = -1073741670;
        }
        else
        {
          v7 = -1073741811;
        }
      }
      ExFreePool(Pool2);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
