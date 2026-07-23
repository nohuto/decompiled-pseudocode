/*
 * XREFs of sub_1406E1D34 @ 0x1406E1D34
 * Callers:
 *     sub_14074B2C8 @ 0x14074B2C8 (sub_14074B2C8.c)
 * Callees:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     _wcstoi64 @ 0x1403E3A1C (_wcstoi64.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B1DC @ 0x14067B1DC (sub_14067B1DC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E1D34(const WCHAR *Src, _QWORD *a2)
{
  void *v3; // r14
  unsigned __int16 *v4; // r13
  void *v5; // rsi
  int inited; // ebx
  void *Pool2; // rax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  const __int16 *v11; // r15
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  unsigned __int16 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  _WORD *v19; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  __int16 *_EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+68h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-29h] BYREF
  ULONG MessageId[2]; // [rsp+88h] [rbp-21h]
  wchar_t *v26; // [rsp+90h] [rbp-19h]
  PVOID P; // [rsp+98h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  _EndPtr = 0LL;
  v3 = 0LL;
  Length = 0;
  DestinationString = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v5 = 0LL;
  KeyHandle = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_4;
  if ( !RtlPrefixUnicodeString(&stru_140D3CD28, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_4;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, String2.Length + 2LL, 538996816LL);
  P = Pool2;
  v9 = (const wchar_t *)Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_4;
  }
  memmove(Pool2, Src, String2.Length);
  v9[(unsigned __int64)String2.Length >> 1] = 0;
  v10 = wcschr(v9, 0x2Cu);
  if ( !v10 )
    goto LABEL_34;
  v11 = (const __int16 *)(v10 + 1);
  *v10 = 0;
  v12 = wcschr(v10 + 1, 0x2Cu);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0;
    v13 = v12 + 1;
  }
  *(_QWORD *)MessageId = wcstoi64(v11, &_EndPtr, 10);
  if ( *_EndPtr )
    goto LABEL_34;
  RtlInitUnicodeString(&String2, v9);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &String2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v4 = (unsigned __int16 *)ExAllocatePool2(256LL, Length, 538996816LL);
      if ( !v4 )
        goto LABEL_38;
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v4, Length, &Length);
      if ( inited < 0 )
        goto LABEL_35;
      String2.Length = v4[6];
      String2.MaximumLength = v4[6];
      String2.Buffer = v4 + 8;
      inited = sub_14067B1DC(&String2, KeyHandle, &DestinationString);
      if ( inited < 0 )
        goto LABEL_35;
      *(_DWORD *)&String2.Length = 1703960;
      String2.Buffer = L"\\SystemRoot\\";
      if ( !RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
        goto LABEL_35;
      v14 = DestinationString.Length - 24;
      v26 = DestinationString.Buffer + 12;
      inited = sub_1408523B4(KeyHandle, MessageId[0]);
      if ( inited < 0 )
      {
        v3 = v22;
        goto LABEL_35;
      }
      v15 = -1LL;
      v16 = -1LL;
      do
        ++v16;
      while ( v11[v16] );
      v3 = v22;
      v17 = -1LL;
      do
        ++v17;
      while ( *((_WORD *)v22 + v17) );
      v18 = v14 + 2 * (v16 + v17 + 5);
      if ( v13 )
      {
        do
          ++v15;
        while ( v13[v15] );
        v18 += 2 * v15 + 6;
      }
      v19 = (_WORD *)ExAllocatePool2(256LL, v18, 538996816LL);
      v5 = v19;
      if ( !v19 )
      {
LABEL_38:
        inited = -1073741670;
        goto LABEL_35;
      }
      inited = sub_140204630(v19, v18, &_EndPtr, &v24, 0, L"@%s,#%s;%s", v26, v11, v3);
      if ( inited >= 0 )
      {
        if ( !v13 || (inited = sub_1402E1280((wchar_t *)_EndPtr, v24, L";(%s)", v13), inited >= 0) )
        {
          *a2 = v5;
LABEL_34:
          inited = 0;
        }
      }
    }
  }
LABEL_35:
  ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_4:
  RtlFreeUnicodeString(&DestinationString);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
