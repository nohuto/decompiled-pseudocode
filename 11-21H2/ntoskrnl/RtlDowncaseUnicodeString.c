/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1406B4AE0
 * Callers:
 *     sub_14061B2D0 @ 0x14061B2D0 (sub_14061B2D0.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 * Callees:
 *     sub_140239F60 @ 0x140239F60 (sub_140239F60.c)
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int16 *v7; // rdx
  char v8; // r10
  NTSTATUS result; // eax
  unsigned int v10; // r10d

  v5 = 0LL;
  if ( AllocateDestinationString || SourceString->Length )
  {
    v6 = *((_QWORD *)sub_140347DB0() + 155);
    result = sub_1402D7DE0(v8, *v7, (__int64 *)&DestinationString->Buffer, &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v10 = SourceString->Length >> 1;
    while ( (unsigned int)v5 < v10 )
    {
      DestinationString->Buffer[v5] = sub_140239F60(v6, SourceString->Buffer[v5]);
      v5 = (unsigned int)(v5 + 1);
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
