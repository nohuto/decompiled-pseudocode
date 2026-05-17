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

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(_WORD *a1, UNICODE_STRING *a2)
{
  const void *Heap; // rsi
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  int v9; // eax
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  unsigned __int16 v15; // ax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  LODWORD(Size) = 0;
  v18 = 0;
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
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  UnicodeString.MaximumLength = v5;
  UnicodeString.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, L"68");
  if ( appended < 0 )
    goto LABEL_9;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, a1);
  if ( appended < 0 )
    goto LABEL_9;
  v9 = ZwQueryLicenseValue(&UnicodeString, &v18, 0LL, 0LL, &Size);
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
  appended = ZwQueryLicenseValue(&UnicodeString, &v18, Heap, v11, &Size);
  if ( appended < 0 )
  {
LABEL_9:
    RtlFreeUnicodeString(a2);
    goto LABEL_10;
  }
  if ( v18 != 1 || !v11 || (v11 & 1) != 0 )
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
  *a2 = 0LL;
  appended = RtlStringLengthWorkerW(v14, 0x7FFFLL, &v19);
  if ( appended < 0 )
    goto LABEL_9;
  v15 = 2 * v19;
  a2->Buffer = v14;
  a2->Length = v15;
  a2->MaximumLength = v15 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_12:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
