/*
 * XREFs of RtlDuplicateUnicodeString @ 0x18004A560
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x18012521C (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r8
  unsigned __int16 Length; // si
  wchar_t *v7; // r15
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // cx
  int v10; // r12d
  unsigned __int16 v11; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = 0;
  if ( StringIn )
  {
    if ( (StringIn->Length & 1) != 0
      || (MaximumLength = StringIn->MaximumLength, (MaximumLength & 1) != 0)
      || StringIn->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringIn->Buffer && (StringIn->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    if ( StringIn )
      Length = StringIn->Length;
    v10 = v5 & 1;
    if ( (v5 & 1) != 0 && Length == 0xFFFE )
      return -1073741562;
    if ( (v5 & 1) != 0 )
      v11 = Length + 2;
    else
      v11 = Length;
    if ( (v5 & 2) == 0 && !Length )
      v11 = 0;
    if ( !v11 )
    {
LABEL_25:
      StringOut->MaximumLength = v11;
      StringOut->Length = Length;
      StringOut->Buffer = v7;
      return 0;
    }
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v11);
    v7 = StringRoutine;
    if ( StringRoutine )
    {
      if ( Length )
        memmove(StringRoutine, StringIn->Buffer, Length);
      if ( v10 )
        v7[(unsigned __int64)Length >> 1] = 0;
      goto LABEL_25;
    }
    return -1073741801;
  }
  return result;
}
