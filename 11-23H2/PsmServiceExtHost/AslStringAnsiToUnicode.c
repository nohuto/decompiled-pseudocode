/*
 * XREFs of AslStringAnsiToUnicode @ 0x180098C68
 * Callers:
 *     AslpFileGet16BitDescription @ 0x18009A89C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x18009A980 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009AF08 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x18009B2F8 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(PWSTR *a1, const char *a2)
{
  ULONG v3; // eax
  USHORT v4; // di
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  struct _UNICODE_STRING v8; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v4 = v3;
  *a1 = 0LL;
  v8 = 0LL;
  if ( v3 <= 0xFFFF )
  {
    v8.Buffer = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v3);
    if ( v8.Buffer )
    {
      v8.MaximumLength = v4;
      v8.Length = 0;
      v6 = RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        *a1 = v8.Buffer;
        v8.Buffer = 0LL;
      }
      else
      {
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslStringAnsiToUnicode",
          413,
          (unsigned int)"RtlAnsiStringToUnicodeString failed [%x]",
          v6);
      }
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslStringAnsiToUnicode", 404, (unsigned int)"Out of memory");
    }
  }
  else
  {
    v5 = -1073741811;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslStringAnsiToUnicode",
      397,
      (unsigned int)"Ansi string is too long to convert at %d",
      v3);
  }
  if ( v8.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8.Buffer);
  return v5;
}
