/*
 * XREFs of sub_14062C524 @ 0x14062C524
 * Callers:
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062C2E4 @ 0x14062C2E4 (sub_14062C2E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14062C524(__int64 a1)
{
  __int64 v1; // r8
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)(a1 + 40); i = (__int64 *)*i )
  {
    if ( (i[8] & 1) != 0 )
      return v1;
  }
  v1 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) &= ~1u;
  return v1;
}
