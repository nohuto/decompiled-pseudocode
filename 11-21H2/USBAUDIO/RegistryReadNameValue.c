/*
 * XREFs of RegistryReadNameValue @ 0x1C0031A24
 * Callers:
 *     RegistryReadName @ 0x1C0031850 (RegistryReadName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 */

__int64 __fastcall RegistryReadNameValue(void *a1, const GUID *a2, ULONG a3, void *a4, PULONG ResultLength)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  ULONG v11; // eax
  _DWORD *Pool2; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // eax
  void *KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+48h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  KeyValueInformation = 0LL;
  GuidString = 0LL;
  DestinationString = 0LL;
  v8 = RtlStringFromGUID(a2, &GuidString);
  if ( v8 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &GuidString;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Name");
      v9 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x10u,
             ResultLength);
      v10 = *ResultLength;
      v8 = v9;
      if ( (unsigned int)v10 >= 0xC )
      {
        if ( v9 == -2147483643 || v9 >= 0 )
        {
          v11 = v10 - 12;
          if ( a3 )
          {
            if ( a3 >= v11 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 1096972357LL);
              v13 = Pool2;
              if ( Pool2 )
              {
                v8 = ZwQueryValueKey(
                       KeyHandle,
                       &DestinationString,
                       KeyValuePartialInformation,
                       Pool2,
                       *ResultLength,
                       ResultLength);
                if ( v8 >= 0 )
                {
                  v14 = v13[2];
                  if ( v14 && v13[1] == 1 )
                  {
                    memmove(a4, v13 + 3, v14);
                    *ResultLength = v13[2];
                  }
                  else
                  {
                    v8 = -1073741823;
                  }
                }
                ExFreePool(v13);
              }
              else
              {
                v8 = -1073741670;
              }
            }
            else
            {
              v8 = -1073741789;
            }
          }
          else
          {
            *ResultLength = v11;
            v8 = -2147483643;
          }
        }
      }
      else
      {
        v8 = -1073741762;
      }
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    RtlFreeUnicodeString(&GuidString);
  }
  return (unsigned int)v8;
}
