/*
 * XREFs of sub_14085464C @ 0x14085464C
 * Callers:
 *     sub_1408545B0 @ 0x1408545B0 (sub_1408545B0.c)
 * Callees:
 *     sub_1403D6B40 @ 0x1403D6B40 (sub_1403D6B40.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406959BC @ 0x1406959BC (sub_1406959BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085464C(unsigned __int16 *a1, ULONG *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 Pool2; // rax
  WCHAR *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  char *v11; // r9
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  NTSTATUS v15; // ebx
  __int64 v17; // rsi
  void *v18; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v6 = *a1 + 98LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  Pool2 = ExAllocatePool2(256LL, v6, 1818448711LL);
  v8 = (WCHAR *)Pool2;
  if ( !Pool2 )
    goto LABEL_17;
  v9 = v6 >> 1;
  if ( v9 )
  {
    v10 = v9;
    v11 = (char *)L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName" - Pool2;
    v12 = (_WORD *)Pool2;
    do
    {
      if ( !(2147483646 - v9 + v10) )
        break;
      v13 = *(_WORD *)((char *)v12 + (_QWORD)v11);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v10;
    }
    while ( v10 );
    v14 = v12 - 1;
    if ( v10 )
      v14 = v12;
    *v14 = 0;
    if ( v10 )
      sub_1403D6B40(v8, v9, *((_QWORD *)a1 + 1), (unsigned __int64)*a1 >> 1);
  }
  v15 = sub_1406959BC(v8, 0x201u, &KeyHandle);
  if ( v15 >= 0 )
  {
    v15 = ZwQueryValueKey(KeyHandle, &stru_140C090B0, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v15 + 0x80000000) < 0 || v15 == -1073741789) && ResultLength <= 0x1000B )
    {
      v15 = 0;
      if ( ResultLength <= 0xC )
      {
        *a2 = 0;
        *a3 = 0LL;
        goto LABEL_12;
      }
      v17 = ExAllocatePool2(256LL, ResultLength, 1818448711LL);
      if ( v17 )
      {
        v15 = ZwQueryValueKey(
                KeyHandle,
                &stru_140C090B0,
                KeyValuePartialInformation,
                (PVOID)v17,
                ResultLength,
                &ResultLength);
        if ( v15 >= 0 )
        {
          ResultLength -= 12;
          v18 = (void *)ExAllocatePool2(256LL, ResultLength, 1818448711LL);
          *a3 = v18;
          if ( v18 )
          {
            memmove(v18, (const void *)(v17 + 12), ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        ExFreePoolWithTag((PVOID)v17, 0);
        goto LABEL_12;
      }
LABEL_17:
      v15 = -1073741801;
    }
  }
LABEL_12:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v15;
}
