/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x1407EF278
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF1F0 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x14041DCB0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1407C7260 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *Pool2; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  NTSTATUS v9; // eax
  ULONG v11; // esi
  ULONG v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rdx
  wchar_t *v16; // rax
  unsigned __int16 v17; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  DataSize = 0;
  Type = 0;
  Pool2 = 0LL;
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
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  Destination.MaximumLength = v5;
  Destination.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_140002788);
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
  Pool2 = (void *)ExAllocatePool2(65LL, DataSize, 1649439826LL);
  appended = ZwQueryLicenseValue(&Destination, &Type, Pool2, v11, &DataSize);
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
  v13 = (wchar_t *)ExpAllocateStringRoutine(v11);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_9;
  }
  memmove(v13, Pool2, v12);
  *UnicodeString = 0LL;
  v15 = 0x7FFFLL;
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
  if ( !v15 )
    goto LABEL_9;
  UnicodeString->Buffer = v14;
  v17 = 2 * (0x7FFF - v15);
  UnicodeString->Length = v17;
  UnicodeString->MaximumLength = v17 + 2;
  appended = 0;
LABEL_10:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_12:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
