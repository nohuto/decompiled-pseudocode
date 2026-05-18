/*
 * XREFs of sub_18009010C @ 0x18009010C
 * Callers:
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 * Callees:
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 */

__int64 __fastcall sub_18009010C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  result = *(unsigned int *)(a1 + 1172);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = (*(_QWORD *)(a1 + 88) - v3) >> 2;
  if ( result )
  {
    v5 = v4 + result - 1;
    result = ~(result - 1);
    v6 = result & v5;
    if ( v6 >= v4 )
    {
      if ( v6 <= v4 )
        return result;
      if ( v6 > (*(_QWORD *)(v2 + 16) - v3) >> 2 )
        return sub_18008EE60((__int64 *)v2, v6);
      result = (__int64)sub_18008F14C(*(char **)(v2 + 8), v6 - v4);
    }
    else
    {
      result = v3 + 4 * v6;
    }
    *(_QWORD *)(v2 + 8) = result;
  }
  return result;
}
