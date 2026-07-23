/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x18000ED04
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000EC7C (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x180009AC0 (RtlStringLengthWorkerW.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x1800A6BC0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID Heap; // rsi
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  NTSTATUS v9; // eax
  ULONG v11; // r14d
  ULONG v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  unsigned __int16 v15; // ax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  DataSize = 0;
  Type = 0;
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
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  Destination.MaximumLength = v5;
  Destination.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_18012C120);
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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, DataSize);
  appended = ZwQueryLicenseValue(&Destination, &Type, Heap, v11, &DataSize);
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
  v13 = (wchar_t *)NtdllpAllocateStringRoutine(v11);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_9;
  }
  memmove(v13, Heap, v12);
  *UnicodeString = 0LL;
  appended = RtlStringLengthWorkerW(v14, 0x7FFFLL, &v19);
  if ( appended < 0 )
    goto LABEL_9;
  v15 = 2 * v19;
  UnicodeString->Buffer = v14;
  UnicodeString->Length = v15;
  UnicodeString->MaximumLength = v15 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_12:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
