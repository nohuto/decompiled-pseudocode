/*
 * XREFs of sub_14028F83C @ 0x14028F83C
 * Callers:
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     sub_14021050C @ 0x14021050C (sub_14021050C.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 */

__int64 __fastcall sub_14028F83C(__int64 a1, int a2, __int64 a3)
{
  char v5; // r8
  unsigned int v6; // ecx

  v5 = 15;
  v6 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
  if ( (dword_140D068EC & 0x8000) == 0 || a2 < 8 )
  {
    if ( a2 <= 0 )
      return sub_1402F6970(a3, a1);
    goto LABEL_8;
  }
  if ( a2 > 9 )
  {
LABEL_8:
    if ( a2 >= 15 )
      return sub_1402F6970(a3, a1);
    goto LABEL_9;
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - dword_140D050A8) < *(_DWORD *)(a1 + 436) )
  {
LABEL_9:
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) < *(_DWORD *)(a1 + 436) )
      return sub_1402F6970(a3, a1);
    goto LABEL_6;
  }
  v5 = 11;
  v6 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) * dword_140D05080;
LABEL_6:
  sub_14021050C(0LL, a1, v5, *(_QWORD *)(a1 + 72), v6);
  return sub_1402F6970(a3, a1);
}
