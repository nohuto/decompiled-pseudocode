/*
 * XREFs of sub_1405F32FC @ 0x1405F32FC
 * Callers:
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 * Callees:
 *     sub_1405F338C @ 0x1405F338C (sub_1405F338C.c)
 *     sub_1405F39B4 @ 0x1405F39B4 (sub_1405F39B4.c)
 */

unsigned __int64 __fastcall sub_1405F32FC(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // r10
  int v8; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v8 = *(_WORD *)(a2 + 8) & 1;
      if ( v8 )
        _InterlockedOr(v10, 0);
      *a5 = v8;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    return sub_1405F338C(*(_QWORD *)(a1 + 24), v5, a3, a5);
  }
  else
  {
    return sub_1405F39B4(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
