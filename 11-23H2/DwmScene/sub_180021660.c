/*
 * XREFs of sub_180021660 @ 0x180021660
 * Callers:
 *     sub_180021BFC @ 0x180021BFC (sub_180021BFC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 *__fastcall sub_180021660(__int64 *a1)
{
  __int64 v2; // rax

  v2 = sub_18001C190();
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  *a1 = v2;
  return a1;
}
