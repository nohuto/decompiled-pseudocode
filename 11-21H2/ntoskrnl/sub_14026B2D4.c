/*
 * XREFs of sub_14026B2D4 @ 0x14026B2D4
 * Callers:
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026B2D4(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  if ( a1 == 2 )
    return 0LL;
  return *(_QWORD *)(a2 - 8);
}
