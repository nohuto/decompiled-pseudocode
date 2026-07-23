/*
 * XREFs of sub_1408604BC @ 0x1408604BC
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403DBE38 @ 0x1403DBE38 (sub_1403DBE38.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1408604BC()
{
  HANDLE v0; // rdi
  char v1; // r14
  WCHAR *Pool2; // rbx
  WCHAR *v3; // r15
  int v4; // esi
  HANDLE v5; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-91h]
  ULONG Length; // [rsp+48h] [rbp-79h] BYREF
  int Data; // [rsp+4Ch] [rbp-75h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-69h] BYREF
  UNICODE_STRING v11; // [rsp+60h] [rbp-61h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-31h] BYREF
  int v15; // [rsp+A0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+A8h] [rbp-19h] BYREF
  _BYTE v17[16]; // [rsp+C8h] [rbp+7h] BYREF
  HANDLE *p_KeyHandle; // [rsp+D8h] [rbp+17h]
  int v19; // [rsp+E0h] [rbp+1Fh]
  int v20; // [rsp+E4h] [rbp+23h]
  HANDLE *p_Handle; // [rsp+E8h] [rbp+27h]
  int v22; // [rsp+F0h] [rbp+2Fh]
  int v23; // [rsp+F4h] [rbp+33h]

  KeyHandle = 0LL;
  Length = 0;
  Data = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  v11 = 0LL;
  ValueName = 0LL;
  if ( (int)sub_1403DBE38(0, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&v11, L"ShutdownSource");
    RtlInitUnicodeString(&ValueName, L"ShutdownTemperature");
    v0 = KeyHandle;
    v15 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &Length) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      if ( ZwQueryValueKey(v0, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Length) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        v1 = 1;
        Data = HIDWORD(KeyValueInformation);
      }
      else
      {
        v1 = 0;
      }
      Pool2 = 0LL;
      v3 = (WCHAR *)L"Unknown";
      v4 = 16;
      if ( ZwQueryValueKey(v0, &v11, KeyValuePartialInformation, 0LL, 0, &Length) == -1073741789 )
      {
        Pool2 = (WCHAR *)ExAllocatePool2(256LL, Length + 2LL, 1836214356LL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(v0, &v11, KeyValuePartialInformation, Pool2, Length, &Length) >= 0
            && *((_DWORD *)Pool2 + 1) == 1 )
          {
            v4 = *((_DWORD *)Pool2 + 2);
            v3 = Pool2 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        if ( (int)sub_1403DBE38(1, &Handle) >= 0 )
        {
          ResultLength = v4;
          v5 = Handle;
          ZwSetValueKey(Handle, &v11, 0, 1u, v3, ResultLength);
          if ( v1 )
            ZwSetValueKey(v5, &ValueName, 0, 4u, &Data, 4u);
          ZwClose(v5);
        }
        ZwUpdateWnfStateData(&stru_1400377A0, 0LL, 0, 0LL, 0LL, 0, 0);
        if ( (unsigned int)dword_140C067B0 > 5 && sub_1402A2000((__int64)&dword_140C067B0, 0x800000000000LL) )
        {
          sub_1402A2094((__int64)v17, v3);
          v20 = 0;
          v23 = 0;
          p_KeyHandle = &KeyHandle;
          LODWORD(KeyHandle) = Data;
          p_Handle = &Handle;
          v19 = 4;
          Handle = (HANDLE)0x1000000;
          v22 = 8;
          sub_14020A9C4((__int64)&dword_140C067B0, (unsigned __int8 *)byte_14002E3CB, 0LL, 0LL, 5u, &v16);
        }
        ZwDeleteValueKey(v0, &ValueName);
        ZwDeleteValueKey(v0, &v11);
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
