/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x18000C778
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlStringLengthWorkerW @ 0x18007EE40 (RtlStringLengthWorkerW.c)
 *     ZwQueryLicenseValue @ 0x1800A19A0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(_WORD *a1, UNICODE_STRING *a2)
{
  const void *Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  int v9; // eax
  unsigned int v11; // esi
  unsigned int v12; // r15d
  __int64 v13; // rdx
  wchar_t *v14; // rax
  wchar_t *v15; // rsi
  unsigned __int16 v16; // ax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+90h] [rbp+50h] BYREF
  __int16 v20; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  LODWORD(Size) = 0;
  v19 = 0;
  UnicodeString = 0LL;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
LABEL_8:
    if ( !a2 )
      goto LABEL_12;
    goto LABEL_9;
  }
  v5 = *a1 + 56;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5, a2);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset_thunk_772440563353939046(StringRoutine, 0, v5);
  UnicodeString.MaximumLength = v5;
  UnicodeString.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, L"68");
  if ( appended < 0 )
    goto LABEL_9;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, a1);
  if ( appended < 0 )
    goto LABEL_9;
  v9 = ZwQueryLicenseValue(&UnicodeString, &v19, 0LL, 0LL, &Size);
  appended = v9;
  if ( v9 != -1073741789 )
  {
    if ( v9 >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v11 = Size;
  v12 = Size;
  Heap = (const void *)RtlAllocateHeap(
                         NtCurrentPeb()->ProcessHeap,
                         (unsigned int)(NtdllBaseTag + 1310720),
                         (unsigned int)Size);
  appended = ZwQueryLicenseValue(&UnicodeString, &v19, Heap, v11, &Size);
  if ( appended < 0 )
  {
LABEL_9:
    RtlFreeUnicodeString(a2);
    goto LABEL_10;
  }
  if ( v19 != 1 || !v11 || (v11 & 1) != 0 )
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
  *a2 = 0LL;
  appended = RtlStringLengthWorkerW(v15, 0x7FFFLL, &v20);
  if ( appended < 0 )
    goto LABEL_9;
  v16 = 2 * v20;
  a2->Buffer = v15;
  a2->Length = v16;
  a2->MaximumLength = v16 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_12:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
