/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x18000C574
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B5C8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlStringLengthWorkerW @ 0x18007F4B0 (RtlStringLengthWorkerW.c)
 *     ZwQueryLicenseValue @ 0x1800A3A60 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  NTSTATUS v9; // eax
  ULONG v11; // esi
  ULONG v12; // r15d
  __int64 v13; // rdx
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  unsigned __int16 v16; // ax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF
  __int16 v20; // [rsp+98h] [rbp+58h] BYREF

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
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5, UnicodeString);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset_thunk_772440563353939046(StringRoutine, 0, v5);
  Destination.MaximumLength = v5;
  Destination.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1801331A0);
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
  v14 = (wchar_t *)NtdllpAllocateStringRoutine(v11, v13);
  v15 = v14;
  if ( !v14 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_9;
  }
  memmove(v14, Heap, v12);
  *UnicodeString = 0LL;
  appended = RtlStringLengthWorkerW(v15, 0x7FFFLL, &v20);
  if ( appended < 0 )
    goto LABEL_9;
  v16 = 2 * v20;
  UnicodeString->Buffer = v15;
  UnicodeString->Length = v16;
  UnicodeString->MaximumLength = v16 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_12:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
