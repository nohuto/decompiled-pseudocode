/*
 * XREFs of sub_14097C8DC @ 0x14097C8DC
 * Callers:
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14097C8DC(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  size_t v9; // r8

  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v4 + 1408) && ((v5 = *(_WORD *)(v4 + 2412), v5 == 332) || v5 == 452 ? (v6 = 1) : (v6 = 0), v6) )
  {
    v7 = 4 * a3;
    if ( 4 * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v7] > 0x7FFFFFFF0000LL || &a2[v7] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v8 = 0LL;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      do
      {
        a1[v8] = *(unsigned int *)&a2[4 * v8];
        a1[v8 + 1] = *(unsigned int *)&a2[4 * v8 + 4];
        a1[v8 + 2] = *(unsigned int *)&a2[4 * v8 + 8];
        a1[v8 + 3] = *(unsigned int *)&a2[4 * v8 + 12];
        a1[v8 + 4] = *(unsigned int *)&a2[4 * v8 + 16];
        a1[v8 + 5] = *(unsigned int *)&a2[4 * v8 + 20];
        a1[v8 + 6] = *(unsigned int *)&a2[4 * v8 + 24];
        a1[v8 + 7] = *(unsigned int *)&a2[4 * v8 + 28];
        v8 += 8LL;
      }
      while ( v8 < (a3 & 0xFFFFFFFFFFFFFFF8uLL) );
    }
    if ( (a3 & 7) != 0 )
    {
      do
      {
        a1[v8] = *(unsigned int *)&a2[4 * v8];
        ++v8;
      }
      while ( v8 < a3 );
    }
  }
  else
  {
    v9 = 8 * a3;
    if ( v9 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v9] > 0x7FFFFFFF0000LL || &a2[v9] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(a1, a2, v9);
  }
  return 0LL;
}
