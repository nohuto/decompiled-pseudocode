/*
 * XREFs of sub_1800166CC @ 0x1800166CC
 * Callers:
 *     sub_180014410 @ 0x180014410 (sub_180014410.c)
 *     sub_180016454 @ 0x180016454 (sub_180016454.c)
 * Callees:
 *     sub_180013624 @ 0x180013624 (sub_180013624.c)
 */

__int64 __fastcall sub_1800166CC(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  int v6; // eax
  __int64 v7; // rax

  v3 = *(_QWORD *)a1;
  v4 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v3 )
    {
      v3 ^= a1;
      goto LABEL_13;
    }
    return 0LL;
  }
  else
  {
LABEL_13:
    while ( v3 )
    {
      v6 = sub_180013624(a2, v3);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          return v3;
        v7 = *(_QWORD *)(v3 + 8);
      }
      else
      {
        v7 = *(_QWORD *)v3;
      }
      if ( v4 && v7 )
        v3 ^= v7;
      else
        v3 = v7;
    }
    return v3;
  }
}
