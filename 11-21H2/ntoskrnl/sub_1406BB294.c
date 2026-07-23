/*
 * XREFs of sub_1406BB294 @ 0x1406BB294
 * Callers:
 *     sub_1406BAF60 @ 0x1406BAF60 (sub_1406BAF60.c)
 *     sub_1406BB218 @ 0x1406BB218 (sub_1406BB218.c)
 *     sub_140A21B74 @ 0x140A21B74 (sub_140A21B74.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BB408 @ 0x1406BB408 (sub_1406BB408.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406BB294(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  _DWORD *v8; // rsi
  HANDLE v9; // rdi
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  _DWORD *Pool2; // rax
  void *v16; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG v19; // [rsp+70h] [rbp+30h] BYREF
  int v20; // [rsp+74h] [rbp+34h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  v20 = HIDWORD(a1);
  v6 = a5;
  v7 = a6;
  v19 = 0;
  v8 = 0LL;
  ResultLength = 0;
  v9 = 0LL;
  *a5 = 0LL;
  *v7 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !a3 || (v12 = sub_1406BB408(0LL, a3, v11, &Handle), v9 = Handle, v13 = v12, v12 >= 0) )
  {
    v14 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v13 = v14;
    if ( v14 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1263556947LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
LABEL_16:
        v13 = -1073741670;
        goto LABEL_9;
      }
      v13 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &v19);
      if ( v13 < 0 )
        goto LABEL_9;
      if ( v8[1] == 1 )
      {
        ResultLength -= 12;
        v16 = (void *)ExAllocatePool2(256LL, ResultLength, 1263556947LL);
        *v6 = v16;
        if ( v16 )
        {
          memmove(v16, v8 + 3, ResultLength);
          v13 = 0;
          *v7 = ResultLength;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      v13 = -1073741788;
    }
    else if ( v14 >= 0 )
    {
      v13 = -1073741823;
    }
  }
LABEL_9:
  if ( v9 )
    ZwClose(v9);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v13;
}
