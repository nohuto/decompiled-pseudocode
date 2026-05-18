/*
 * XREFs of sub_180028A90 @ 0x180028A90
 * Callers:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 *     sub_18009CD20 @ 0x18009CD20 (sub_18009CD20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180028A90(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
