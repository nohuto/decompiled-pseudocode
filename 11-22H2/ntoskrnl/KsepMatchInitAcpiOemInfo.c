/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140B6504C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B64EEC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140336E50 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x140846420 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C70D48 = 0LL;
  qword_140C70D58 = 0xFFFFFFFFLL;
  xmmword_140C70D80 = 0LL;
  HIDWORD(xmmword_140C70D48) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C70D80) = -1;
  xmmword_140C70D28 = 0LL;
  qword_140C70D90 = 0LL;
  xmmword_140C70D38 = 0LL;
  xmmword_140C70D60 = 0LL;
  xmmword_140C70D70 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140D161A0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140D15F78, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140D15F68, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C70D28 = word_140D161A0;
          *((_QWORD *)&xmmword_140C70D28 + 1) = word_140D15F68;
          HIDWORD(xmmword_140C70D48) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C70D58) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C70D60 = word_140D161A0;
          *((_QWORD *)&xmmword_140C70D60 + 1) = word_140D15F78;
          HIDWORD(xmmword_140C70D80) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
