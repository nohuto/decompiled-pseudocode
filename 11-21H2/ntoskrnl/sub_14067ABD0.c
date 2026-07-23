/*
 * XREFs of sub_14067ABD0 @ 0x14067ABD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067A98C @ 0x14067A98C (sub_14067A98C.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_1406E74D0 @ 0x1406E74D0 (sub_1406E74D0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14067ABD0(const UNICODE_STRING *a1, __int64 a2, char *a3)
{
  int v5; // ebx
  HANDLE v6; // rdi
  wchar_t *Buffer; // rax
  char v8; // cl
  wchar_t *Data; // r15
  wchar_t *v10; // rbx
  unsigned __int64 DataSize; // r14
  unsigned __int64 v12; // rsi
  wchar_t *Pool2; // rax
  signed __int64 v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  int v18; // [rsp+58h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-11h] BYREF
  _WORD v21[12]; // [rsp+78h] [rbp-1h] BYREF

  v16 = 0;
  v18 = 0;
  KeyHandle = 0LL;
  UnicodeString = 0LL;
  ValueName = 0LL;
  v5 = sub_14067B470(a2, 983103LL, 0LL, &KeyHandle, 1);
  if ( v5 >= 0 )
  {
    v6 = KeyHandle;
    v5 = sub_14067A98C(KeyHandle, a1, &v16, (__int64)&UnicodeString, &v18);
    if ( v5 < 0 )
    {
LABEL_17:
      ZwClose(v6);
      return (unsigned int)v5;
    }
    Buffer = UnicodeString.Buffer;
    v8 = *a3;
    if ( UnicodeString.Buffer )
    {
      if ( v8 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v6, &UnicodeString);
      if ( --v16 )
        sub_1406E74D0(v6);
    }
    else
    {
      if ( !v8 )
      {
LABEL_16:
        v5 = 0;
        goto LABEL_17;
      }
      Data = a1->Buffer;
      v10 = 0LL;
      DataSize = a1->Length;
      v12 = DataSize >> 1;
      if ( Data[(DataSize >> 1) - 1] )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, DataSize + 2, 538996816LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Data, (unsigned int)DataSize);
          LODWORD(DataSize) = DataSize + 2;
          v10[v12] = 0;
          Data = v10;
        }
      }
      KeyHandle = v21;
      sub_1402DFBC4(v21, 0xAuLL, &KeyHandle, 0LL, 0, L"%u", v16);
      v14 = ((_BYTE *)KeyHandle - (_BYTE *)v21) >> 1;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v14 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v14;
      ValueName.Buffer = v21;
      ZwSetValueKey(v6, &ValueName, 0, 1u, Data, DataSize);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      ++v16;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v6, &ValueName, 0, 4u, &v16, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v6, &ValueName, 0, 4u, &v16, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
