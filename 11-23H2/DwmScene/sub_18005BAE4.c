/*
 * XREFs of sub_18005BAE4 @ 0x18005BAE4
 * Callers:
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BAE4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
