/*
 * XREFs of sub_140807218 @ 0x140807218
 * Callers:
 *     sub_14024E2C8 @ 0x14024E2C8 (sub_14024E2C8.c)
 *     sub_1408071C4 @ 0x1408071C4 (sub_1408071C4.c)
 * Callees:
 *     sub_140397DE0 @ 0x140397DE0 (sub_140397DE0.c)
 */

char __fastcall sub_140807218(__int64 a1)
{
  int v1; // ebx
  unsigned __int128 v3; // rax
  __int64 v4; // rsi
  char result; // al

  v1 = 0;
  v3 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v4 = *((_QWORD *)&v3 + 1);
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( qword_140C548A8 )
    sub_140397DE0(a1, *((_QWORD *)&v3 + 1) - qword_140C548A8, v1 - dword_140D01490);
  byte_140D01494 = *(_BYTE *)a1;
  dword_140D01488 = dword_140C23310;
  result = byte_140C23315;
  qword_140C548A8 = v4;
  dword_140D01490 = v1;
  byte_140D0148C = byte_140C23315;
  return result;
}
