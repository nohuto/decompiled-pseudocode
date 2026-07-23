/*
 * XREFs of PiDcCompareUpdateProperties @ 0x1407D10E0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

__int64 __fastcall PiDcCompareUpdateProperties(_RTL_AVL_TABLE *a1, PVOID a2, PVOID a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = memcmp(a2, a3, 0x14uLL);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
