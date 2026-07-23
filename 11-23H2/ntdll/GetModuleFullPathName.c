/*
 * XREFs of GetModuleFullPathName @ 0x18007CE28
 * Callers:
 *     GetImageTuple @ 0x18007CD88 (GetImageTuple.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x180018B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     GetModuleFullPathNameUnicode @ 0x18007CEFC (GetModuleFullPathNameUnicode.c)
 */

wchar_t *__fastcall GetModuleFullPathName(__int64 a1, char *a2)
{
  void *ProcessHeap; // rcx
  wchar_t *result; // rax
  unsigned int ModuleFullPathNameUnicode; // eax
  unsigned int Length; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *(_QWORD *)&SourceString.Length = 0LL;
  result = (wchar_t *)RtlAllocateHeap(ProcessHeap, 8u, 0x208uLL);
  SourceString.Buffer = result;
  if ( result )
  {
    SourceString.MaximumLength = 520;
    ModuleFullPathNameUnicode = GetModuleFullPathNameUnicode(a1, result, 260LL);
    Length = ModuleFullPathNameUnicode;
    if ( ModuleFullPathNameUnicode )
    {
      DestinationString.Buffer = a2;
      SourceString.Length = 2 * ModuleFullPathNameUnicode;
      DestinationString.MaximumLength = 260;
      v8 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( v8 < 0 )
      {
        if ( v8 == -2147483643 )
        {
          Length = 260;
          a2[259] = 0;
        }
        else
        {
          Length = 0;
        }
      }
      else
      {
        Length = DestinationString.Length;
        a2[DestinationString.Length] = 0;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, SourceString.Buffer);
    return (wchar_t *)Length;
  }
  return result;
}
