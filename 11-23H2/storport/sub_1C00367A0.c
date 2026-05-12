/*
 * XREFs of sub_1C00367A0 @ 0x1C00367A0
 * Callers:
 *     StorPortLogError @ 0x1C00468B0 (StorPortLogError.c)
 * Callees:
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 */

char __fastcall sub_1C00367A0(__int64 a1, char a2, char a3, char a4, int a5, int a6)
{
  PSLIST_ENTRY v10; // rax

  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1024));
  if ( v10 )
  {
    LODWORD(v10[1].Next) = 134684674;
    LODWORD(v10[3].Next) = a5;
    HIDWORD(v10[3].Next) = a6;
    LODWORD(v10[2].Next) = 2;
    BYTE4(v10[2].Next) = a2;
    BYTE5(v10[2].Next) = a3;
    BYTE6(v10[2].Next) = a4;
    LOBYTE(v10) = sub_1C0014D10((char *)(a1 + 944), v10);
  }
  else
  {
    _InterlockedIncrement(&dword_1C0093C54);
  }
  return (char)v10;
}
