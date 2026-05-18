/*
 * XREFs of sub_1800566D0 @ 0x1800566D0
 * Callers:
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800566D0(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 8);
  }
  return result;
}
