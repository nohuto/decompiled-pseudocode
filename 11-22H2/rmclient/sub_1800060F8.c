/*
 * XREFs of sub_1800060F8 @ 0x1800060F8
 * Callers:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 * Callees:
 *     sub_1800063D4 @ 0x1800063D4 (sub_1800063D4.c)
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001F1F8 @ 0x18001F1F8 (sub_18001F1F8.c)
 */

__int64 __fastcall sub_1800060F8(_OWORD *a1, void *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax

  memset((void *)a3, 0, 0xA0uLL);
  sub_18001F1F8(a3 + 120);
  if ( a1 )
    *(_OWORD *)(a3 + 104) = *a1;
  if ( a2 == &unk_1800207D0 )
  {
    *(_BYTE *)(a3 + 156) = 0;
    return sub_1800063D4(v7, v6, v8, a3 + 24);
  }
  if ( a2 == &unk_180020010 )
  {
    *(_BYTE *)(a3 + 156) = 2;
    return sub_1800063D4(v7, v6, v8, a3 + 24);
  }
  result = (__int64)&unk_1800208C0;
  if ( a2 == &unk_1800208C0 )
  {
    *(_BYTE *)(a3 + 156) = 6;
    return result;
  }
  if ( a2 == &unk_180020BC0 )
  {
    *(_BYTE *)(a3 + 156) = 1;
    return sub_1800063D4(v7, v6, v8, a3 + 24);
  }
  if ( a2 == &unk_180020F20 )
  {
    *(_BYTE *)(a3 + 156) = 3;
    return sub_1800063D4(v7, v6, v8, a3 + 24);
  }
  result = (__int64)&unk_180020C80;
  if ( a2 == &unk_180020C80 )
  {
    *(_BYTE *)(a3 + 156) = 4;
  }
  else
  {
    result = 7LL;
    if ( a2 == &unk_180020C20 )
      result = 5LL;
    *(_BYTE *)(a3 + 156) = result;
  }
  return result;
}
