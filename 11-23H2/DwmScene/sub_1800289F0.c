/*
 * XREFs of sub_1800289F0 @ 0x1800289F0
 * Callers:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800289F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
