/*
 * XREFs of sub_1409E2E78 @ 0x1409E2E78
 * Callers:
 *     sub_1403D683C @ 0x1403D683C (sub_1403D683C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409E2E78(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 1428);
  *a1 = result;
  return result;
}
