/*
 * XREFs of sub_18006C37C @ 0x18006C37C
 * Callers:
 *     sub_180078A68 @ 0x180078A68 (sub_180078A68.c)
 * Callees:
 *     sub_18006B748 @ 0x18006B748 (sub_18006B748.c)
 */

__int64 __fastcall sub_18006C37C(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // r9

  if ( a1 != a2 )
  {
    do
    {
      result = sub_18006B748(a1, a3);
      a1 = (__int64 *)(v4 + 8);
    }
    while ( a1 != v5 );
  }
  return result;
}
