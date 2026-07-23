/*
 * XREFs of sub_1405223E0 @ 0x1405223E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052CCA8 @ 0x14052CCA8 (sub_14052CCA8.c)
 */

__int64 __fastcall sub_1405223E0(__int64 a1)
{
  __int64 result; // rax

  result = sub_14052CCA8(a1 + 48, *(unsigned int *)(a1 + 44), 11LL, 0LL);
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
