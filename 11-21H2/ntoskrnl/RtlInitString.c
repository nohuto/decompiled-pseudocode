/*
 * XREFs of RtlInitString @ 0x14036B950
 * Callers:
 *     sub_1403B1D20 @ 0x1403B1D20 (sub_1403B1D20.c)
 *     sub_1405D9260 @ 0x1405D9260 (sub_1405D9260.c)
 *     RtlInitUTF8String @ 0x1405E4060 (RtlInitUTF8String.c)
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_140A00DB0 @ 0x140A00DB0 (sub_140A00DB0.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
