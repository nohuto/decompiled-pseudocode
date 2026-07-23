/*
 * XREFs of sub_140457800 @ 0x140457800
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 * Callees:
 *     sub_140457862 @ 0x140457862 (sub_140457862.c)
 *     sub_14045795A @ 0x14045795A (sub_14045795A.c)
 */

__int64 __fastcall sub_140457800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *(_QWORD *)(a3 + 56) = a3;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a3 + 48);
    if ( *(_BYTE *)(a1 + 434) )
    {
      if ( (v3 & 4) == 0 )
        return sub_14045795A(a1, a3, 0LL, a3);
      a1 = a2;
      if ( (v3 & 8) != 0 )
        return sub_14045795A(a1, a3, 0LL, a3);
    }
    else if ( (v3 & 4) != 0 )
    {
      a1 = a2;
    }
  }
  else
  {
    a1 = a2;
    if ( (*(_BYTE *)(a3 + 48) & 8) != 0 )
      return sub_14045795A(a1, a3, 0LL, a3);
  }
  return sub_140457862(a1, a3, 0LL, a3);
}
