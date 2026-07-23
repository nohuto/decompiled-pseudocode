/*
 * XREFs of sub_140A0A718 @ 0x140A0A718
 * Callers:
 *     sub_140A0A848 @ 0x140A0A848 (sub_140A0A848.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0A718(PCWSTR Source, __int16 a2, UNICODE_STRING *a3)
{
  __int64 v3; // rdx
  NTSTATUS appended; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned __int16)(a2 + 44);
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = v3;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, v3, 1751339841LL);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
    if ( appended < 0 || (appended = RtlAppendUnicodeToString(&Destination, Source), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a3 = Destination;
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)appended;
}
