/*
 * XREFs of sub_140B16F3C @ 0x140B16F3C
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1403C7CF8 @ 0x1403C7CF8 (sub_1403C7CF8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_140B16F3C(__int64 a1)
{
  NTSTATUS v2; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  Data = 0;
  v7 = 0;
  ResultLength[0] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  ObjectAttributes.Attributes = 576;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_140B57D70,
           0,
           1u,
           DestinationString.Buffer,
           DestinationString.Length);
    if ( v2 >= 0 )
    {
      v2 = sub_1403C7CF8(KeyHandle, (PUNICODE_STRING)&stru_140B57D40, *(PCSTR *)(a1 + 184));
      if ( v2 >= 0 )
      {
        v2 = sub_1403C7CF8(KeyHandle, (PUNICODE_STRING)&stru_140B57C90, *(PCSTR *)(a1 + 192));
        if ( v2 >= 0 )
        {
          v2 = sub_1403C7CF8(KeyHandle, (PUNICODE_STRING)&stru_140B57D80, *(PCSTR *)(a1 + 344));
          if ( v2 >= 0 )
          {
            v2 = sub_1403C7CF8(KeyHandle, (PUNICODE_STRING)&stru_140B57CC0, *(PCSTR *)(a1 + 328));
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140B57CD0, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140B57CA0, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) != 0
                    || (ZwQueryValueKey(
                          KeyHandle,
                          (PUNICODE_STRING)&stru_140B578D0,
                          KeyValueFullInformation,
                          KeyValueInformation,
                          0x100u,
                          ResultLength) < 0
                     || KeyValueInformation[1] != 4
                      ? (v4 = 1)
                      : (v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1),
                        v7 = v4,
                        v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140B578D0, 0, 4u, &v7, 4u),
                        v2 >= 0) )
                  {
                    v2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
