/*
 * XREFs of sub_1403D2A68 @ 0x1403D2A68
 * Callers:
 *     sub_140A5AE1C @ 0x140A5AE1C (sub_140A5AE1C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1403D2A68(int a1, __int64 **a2)
{
  __int64 *result; // rax

  for ( result = *a2; result != (__int64 *)a2; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 29) == a1 )
      return result;
  }
  return 0LL;
}
