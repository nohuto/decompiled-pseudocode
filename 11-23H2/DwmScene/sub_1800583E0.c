/*
 * XREFs of sub_1800583E0 @ 0x1800583E0
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800583E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r10d
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 448);
  if ( (_DWORD)v2 )
  {
    if ( a2 < *(_QWORD *)(a1 + 456) )
      *(_QWORD *)(a1 + 456) = a2;
    v4 = a2 + *(_QWORD *)(a1 + 464) * v2;
    v3 = v2 + 1;
    result = v4 / v3;
    *(_QWORD *)(a1 + 464) = result;
    if ( *(_QWORD *)(a1 + 472) < a2 )
      *(_QWORD *)(a1 + 472) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 456) = a2;
    v3 = 1;
    *(_QWORD *)(a1 + 464) = a2;
    *(_QWORD *)(a1 + 472) = a2;
  }
  *(_DWORD *)(a1 + 448) = v3;
  return result;
}
