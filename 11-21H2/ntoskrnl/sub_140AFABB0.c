/*
 * XREFs of sub_140AFABB0 @ 0x140AFABB0
 * Callers:
 *     sub_140A56118 @ 0x140A56118 (sub_140A56118.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AFABB0(__int64 a1)
{
  __int64 result; // rax

  MEMORY[0xFFFFF78000000295] = (qword_140D06958 & 2) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 132LL) & 0x2000) == 0 )
    MEMORY[0xFFFFF78000000297] = (qword_140D06958 & 0x2000) != 0;
  result = qword_140D068D0;
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 132LL) & 0x8000) == 0 )
  {
    result = (*(_QWORD *)(a1 + 35232) >> 33) & 1LL;
    dword_140D069F0 = (*(_QWORD *)(a1 + 35232) >> 33) & 1;
  }
  return result;
}
