/*
 * XREFs of RtlCreateUnicodeString @ 0x14066A0F0
 * Callers:
 *     sub_14061B060 @ 0x14061B060 (sub_14061B060.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406EF170 @ 0x1406EF170 (sub_1406EF170.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 *     sub_1408166C0 @ 0x1408166C0 (sub_1408166C0.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_1408264C0 @ 0x1408264C0 (sub_1408264C0.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140827AA8 @ 0x140827AA8 (sub_140827AA8.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     sub_14091E3D0 @ 0x14091E3D0 (sub_14091E3D0.c)
 *     sub_14094CBE0 @ 0x14094CBE0 (sub_14094CBE0.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140B107D8 @ 0x140B107D8 (sub_140B107D8.c)
 *     sub_140B12AF0 @ 0x140B12AF0 (sub_140B12AF0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  v6 = (wchar_t *)sub_1406BE560(v5);
  DestinationString->Buffer = v6;
  if ( !v6 )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(v6, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
