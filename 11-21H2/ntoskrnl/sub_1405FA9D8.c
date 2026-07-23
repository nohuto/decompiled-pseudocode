/*
 * XREFs of sub_1405FA9D8 @ 0x1405FA9D8
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1405FA434 @ 0x1405FA434 (sub_1405FA434.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405FA9D8(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = a2[2];
  if ( v2 == 2 )
  {
    ExFreePoolWithTag(a2, 0);
  }
  else if ( v2 == 3 )
  {
    *(_DWORD *)(a1 + 4248) &= ~1u;
  }
}
