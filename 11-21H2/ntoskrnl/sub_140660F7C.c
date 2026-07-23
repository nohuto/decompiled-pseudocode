/*
 * XREFs of sub_140660F7C @ 0x140660F7C
 * Callers:
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140660F7C(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // rsi
  unsigned __int16 v5; // bx
  wchar_t *v6; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  NTSTATUS v9; // eax
  ULONG v11; // r14d
  ULONG v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  __int64 v15; // rcx
  wchar_t *v16; // rax
  __int16 v17; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  DataSize = 0;
  Type = 0;
  PoolWithQuotaTag = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
LABEL_8:
    if ( !UnicodeString )
      goto LABEL_12;
    goto LABEL_9;
  }
  v5 = Source->Length + 56;
  v6 = (wchar_t *)sub_1406BE560(v5);
  v7 = v6;
  if ( !v6 )
    goto LABEL_13;
  memset(v6, 0, v5);
  Destination.MaximumLength = v5;
  Destination.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1400010A8);
  if ( appended < 0 )
    goto LABEL_9;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_9;
  v9 = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  appended = v9;
  if ( v9 != -1073741789 )
  {
    if ( v9 >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v11 = DataSize;
  v12 = DataSize;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, DataSize, 0x62507452u);
  appended = ZwQueryLicenseValue(&Destination, &Type, PoolWithQuotaTag, v11, &DataSize);
  if ( appended < 0 )
  {
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    goto LABEL_10;
  }
  if ( Type != 1 || !v11 || (v11 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_9;
  }
  v13 = (wchar_t *)sub_1406BE560(v11);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_9;
  }
  memmove(v13, PoolWithQuotaTag, v12);
  v15 = 0x7FFFLL;
  *UnicodeString = 0LL;
  v16 = v14;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  appended = v15 == 0 ? 0xC000000D : 0;
  if ( v15 )
  {
    v17 = 2 * v15;
    UnicodeString->Buffer = v14;
    UnicodeString->Length = -2 - v17;
    UnicodeString->MaximumLength = -v17;
  }
  if ( appended < 0 )
    goto LABEL_9;
  appended = 0;
LABEL_10:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_12:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
