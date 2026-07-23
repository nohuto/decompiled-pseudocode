/*
 * XREFs of Xp10ScatteredCopy @ 0x18011FE9C
 * Callers:
 *     Xp10ScatteredCopyFromPrevious @ 0x180120150 (Xp10ScatteredCopyFromPrevious.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     Xp10ScatteredNextBuffer @ 0x1801201A8 (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ScatteredCopy(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  size_t v7; // r8
  size_t v8; // r9
  __int64 v9; // rbx

  v6 = 0;
  do
  {
    v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    v8 = a3 - v6;
    if ( v7 >= *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 )
      v7 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( v8 <= v7 )
      v7 = (unsigned int)v8;
    v9 = (unsigned int)v7;
    memmove(*(void **)a1, *(const void **)a2, v7);
    *(_QWORD *)a1 += v9;
    v6 += v9;
    *(_QWORD *)a2 += v9;
  }
  while ( v6 != a3
       && (*(_QWORD *)a1 != *(_QWORD *)(a1 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a1))
       && (*(_QWORD *)a2 != *(_QWORD *)(a2 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a2)) );
  return v6;
}
