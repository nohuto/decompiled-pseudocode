/*
 * XREFs of sub_14084A618 @ 0x14084A618
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall sub_14084A618(__int64 a1)
{
  char v1; // r15
  ULONG v3; // r14d
  HANDLE v4; // rcx
  unsigned __int16 v5; // si
  NTSTATUS v6; // ebx
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  __int64 v9; // r12
  ULONG ActiveProcessorCount; // r13d
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  ULONG Value[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h]
  _QWORD DestinationString[3]; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-50h] BYREF
  __int128 KeyValueInformation; // [rsp+C8h] [rbp-40h] BYREF
  __int128 KeyInformation; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v28[68]; // [rsp+F8h] [rbp-10h] BYREF

  Value[1] = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Value[0] = 0;
  KeyHandle = 0LL;
  v21 = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyInformation = 0LL;
  v27 = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  Handle = 0LL;
  v28[0] = 2097153;
  String_8 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  memset(&v28[1], 0, 0x104uLL);
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.Attributes = 576;
  v1 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) < 0 )
    return v1;
  v3 = 0;
  String_8.Buffer = (wchar_t *)&v27;
  String_8.MaximumLength = 4;
  RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
  v4 = KeyHandle;
  v5 = HIWORD(v28[0]);
  ObjectAttributes.RootDirectory = KeyHandle;
  do
  {
    v6 = ZwEnumerateKey(v4, v3, KeyBasicInformation, &KeyInformation, 0x18u, Value);
    if ( v6 < 0 )
      goto LABEL_21;
    Value[0] = HIDWORD(KeyInformation);
    if ( HIDWORD(KeyInformation) <= 4 )
    {
      String_8.Length = WORD6(KeyInformation);
      v6 = RtlUnicodeStringToInteger(&String_8, 0xAu, &Value[1]);
      if ( v6 >= 0 )
      {
        v7 = Value[1];
        if ( Value[1] < v5 )
        {
          *(UNICODE_STRING *)&DestinationString[1] = String_8;
          v6 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
          if ( v6 < 0 )
          {
LABEL_21:
            ++v3;
            goto LABEL_22;
          }
          v6 = ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 Value);
          if ( v6 >= 0 && ((_DWORD)KeyValueInformation == 4 || (_DWORD)KeyValueInformation == 11) )
          {
            v1 = 1;
            if ( DWORD1(KeyValueInformation) == 4 )
            {
              v8 = DWORD2(KeyValueInformation);
              *((_QWORD *)&KeyValueInformation + 1) = DWORD2(KeyValueInformation);
            }
            else
            {
              if ( DWORD1(KeyValueInformation) != 8 )
                goto LABEL_20;
              v8 = *((_QWORD *)&KeyValueInformation + 1);
            }
            if ( LOWORD(v28[0]) > v7 )
            {
LABEL_19:
              *(_QWORD *)&v28[2 * v7 + 2] |= v8;
              v5 = HIWORD(v28[0]);
              goto LABEL_20;
            }
            if ( v5 > v7 )
            {
              LOWORD(v28[0]) = v7 + 1;
              goto LABEL_19;
            }
          }
LABEL_20:
          ZwClose(Handle);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    v4 = KeyHandle;
  }
  while ( v6 >= 0 );
  ZwClose(KeyHandle);
  v9 = v21;
  if ( v1 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(v9 + 4) = 1;
    v11 = 0LL;
    do
    {
      v12 = 0LL;
      *(_BYTE *)(v11 + *(_QWORD *)(v9 + 8)) = (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v28, v11) == 0;
      v13 = *(_DWORD *)(v9 + 4);
      if ( v13 )
      {
        do
        {
          v14 = (unsigned int)v12 + (_DWORD)v11 * v13 + 8LL;
          v15 = v9 + 2 * v14;
          v16 = KeCheckProcessorAffinityEx((unsigned __int16 *)v28, v11);
          *(_BYTE *)(v14 + v15 + 1) = v16 == 0;
          *(_BYTE *)(v14 + v15) = v16 != 0;
          *(_WORD *)(*(_QWORD *)(v9 + 16) + 2 * v12) = 257;
          v12 = (unsigned int)(v12 + 1);
          v13 = *(_DWORD *)(v9 + 4);
        }
        while ( (unsigned int)v12 < v13 );
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 <= ActiveProcessorCount );
  }
  return v1;
}
