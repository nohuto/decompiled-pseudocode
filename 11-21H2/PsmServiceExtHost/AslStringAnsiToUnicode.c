/*
 * XREFs of AslStringAnsiToUnicode @ 0x18009E5B0
 * Callers:
 *     AslpFileGet16BitDescription @ 0x1800A020C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1800A02F0 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A0878 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1800A0C64 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(PWSTR *a1, const char *a2)
{
  ULONG v3; // eax
  USHORT v4; // di
  NTSTATUS v5; // ebx
  struct _UNICODE_STRING v7; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v4 = v3;
  *a1 = 0LL;
  v7 = 0LL;
  if ( v3 > 0xFFFF )
  {
    v5 = -1073741811;
LABEL_3:
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  v7.Buffer = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v3);
  if ( v7.Buffer )
  {
    v7.MaximumLength = v4;
    v7.Length = 0;
    v5 = RtlAnsiStringToUnicodeString(&v7, &DestinationString, 0);
    if ( v5 < 0 )
      goto LABEL_3;
    v5 = 0;
    *a1 = v7.Buffer;
    v7.Buffer = 0LL;
  }
  else
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
  }
LABEL_8:
  if ( v7.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7.Buffer);
  return (unsigned int)v5;
}
