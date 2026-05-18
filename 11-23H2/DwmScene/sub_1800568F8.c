/*
 * XREFs of sub_1800568F8 @ 0x1800568F8
 * Callers:
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800568F8(__int64 a1)
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
      return *(unsigned int *)(v3 + 24);
  }
  return result;
}
