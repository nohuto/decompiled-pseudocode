/*
 * XREFs of sub_1402783C0 @ 0x1402783C0
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14045CC5A @ 0x14045CC5A (sub_14045CC5A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402783C0(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // r11
  __int64 v7; // r10
  __int64 v9; // rbx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v1 - 1 > v2 )
  {
    v1 = v2 + 1;
    *(_QWORD *)(a1 + 8) = v2 + 1;
  }
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v4 )
  {
    *(_QWORD *)a1 = v4;
    v3 = v4;
  }
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v10 = ~(v5 - 1);
    v3 = v10 & (v5 + v3 - 1);
    *(_QWORD *)a1 = v3;
    v1 &= v10;
    *(_QWORD *)(a1 + 8) = v1;
  }
  if ( v3 < v1 )
  {
    v6 = *(_BYTE *)(a1 + 56);
    while ( v6 || *(_QWORD *)(a1 + 40) <= v1 - v3 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( !v7 )
        return 1LL;
      v9 = ~(v7 - 1);
      if ( (((v1 - 1) ^ (v1 - *(_QWORD *)(a1 + 40))) & v9) == 0 )
        return 1LL;
      if ( (v9 & v1) != v1 )
        *(_QWORD *)(a1 + 8) = v9 & v1;
      if ( (v9 & v3) == v3 || (*(_QWORD *)a1 = v9 & (v3 + v7 - 1), (v9 & (v3 + v7 - 1)) != 0) )
      {
        v3 = *(_QWORD *)a1;
        v1 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 < v1 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
