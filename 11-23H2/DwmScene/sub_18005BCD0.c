/*
 * XREFs of sub_18005BCD0 @ 0x18005BCD0
 * Callers:
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BCD0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
