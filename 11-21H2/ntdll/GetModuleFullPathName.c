/*
 * XREFs of GetModuleFullPathName @ 0x18000B21C
 * Callers:
 *     GetImageTuple @ 0x18000B0FC (GetImageTuple.c)
 * Callees:
 *     GetModuleFullPathNameUnicode @ 0x18000B19C (GetModuleFullPathNameUnicode.c)
 *     RtlUnicodeStringToAnsiString @ 0x18000DF80 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

wchar_t *__fastcall GetModuleFullPathName(void *a1, char *a2)
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
    ModuleFullPathNameUnicode = GetModuleFullPathNameUnicode(a1, result, 0x104u);
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
