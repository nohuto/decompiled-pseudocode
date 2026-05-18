/*
 * XREFs of sub_18006FBD0 @ 0x18006FBD0
 * Callers:
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006FBD0(__int64 a1)
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
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
