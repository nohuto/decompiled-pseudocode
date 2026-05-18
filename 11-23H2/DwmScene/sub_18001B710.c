/*
 * XREFs of sub_18001B710 @ 0x18001B710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 */

LPVOID __fastcall sub_18001B710(__int64 a1)
{
  void *v1; // rcx
  LPVOID result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return sub_180018010(v1, 1);
  return result;
}
