/*
 * XREFs of sub_14035FCE0 @ 0x14035FCE0
 * Callers:
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_DWORD *sub_14035FCE0()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(64LL, 69632LL, 1112564547LL);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
