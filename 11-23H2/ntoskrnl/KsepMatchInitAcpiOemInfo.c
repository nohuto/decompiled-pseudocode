/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x140B614DC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B6137C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 *     KsepStringAnsiToUnicode @ 0x140844990 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 Table; // rax
  __int64 v3; // rdi

  xmmword_140C70C88 = 0LL;
  qword_140C70C98 = 0xFFFFFFFFLL;
  xmmword_140C70CC0 = 0LL;
  HIDWORD(xmmword_140C70C88) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C70CC0) = -1;
  xmmword_140C70C68 = 0LL;
  qword_140C70CD0 = 0LL;
  xmmword_140C70C78 = 0LL;
  xmmword_140C70CA0 = 0LL;
  xmmword_140C70CB0 = 0LL;
  Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
  v3 = Table;
  if ( Table )
  {
    v1 = KsepStringAnsiToUnicode(word_140D160E0, 0xEu, (char *)(Table + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = KsepStringAnsiToUnicode(word_140D15EB8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = KsepStringAnsiToUnicode(word_140D15EA8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C70C68 = word_140D160E0;
          *((_QWORD *)&xmmword_140C70C68 + 1) = word_140D15EA8;
          HIDWORD(xmmword_140C70C88) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C70C98) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C70CA0 = word_140D160E0;
          *((_QWORD *)&xmmword_140C70CA0 + 1) = word_140D15EB8;
          HIDWORD(xmmword_140C70CC0) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
