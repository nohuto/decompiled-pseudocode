/*
 * XREFs of RegistryReadNameValue @ 0x1C003A264
 * Callers:
 *     RegistryReadName @ 0x1C003A610 (RegistryReadName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 */

__int64 __fastcall RegistryReadNameValue(void *a1, const GUID *a2, ULONG a3, void *a4, PULONG ResultLength)
{
  NTSTATUS v8; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  ULONG v12; // eax
  _DWORD *Pool2; // rax
  _DWORD *v14; // rdi
  unsigned int v15; // eax
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
      v10 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              ResultLength);
      v11 = *ResultLength;
      v8 = v10;
      if ( (unsigned int)v11 < 0xC )
      {
        v8 = -1073741762;
      }
      else if ( v10 == -2147483643 || v10 >= 0 )
      {
        v12 = v11 - 12;
        if ( a3 )
        {
          if ( a3 >= v12 )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(256LL, v11, 1096972357LL);
            v14 = Pool2;
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
                v15 = v14[2];
                if ( v15 && v14[1] == 1 )
                {
                  memmove(a4, v14 + 3, v15);
                  *ResultLength = v14[2];
                }
                else
                {
                  v8 = -1073741823;
                }
              }
              ExFreePool(v14);
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
          *ResultLength = v12;
          v8 = -2147483643;
        }
      }
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    RtlFreeUnicodeString(&GuidString);
  }
  return (unsigned int)v8;
}
