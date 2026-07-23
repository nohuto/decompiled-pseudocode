/*
 * XREFs of sub_14022A6A0 @ 0x14022A6A0
 * Callers:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_14024DEFC @ 0x14024DEFC (sub_14024DEFC.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     sub_1405566A4 @ 0x1405566A4 (sub_1405566A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022A6A0(volatile signed __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  __int64 v5; // rdx

  v2 = *a1;
  v3 = a2;
  do
  {
    v4 = v2;
    v5 = v3 + ((v2 >> 1) & 3);
    v2 = _InterlockedCompareExchange64(a1, v2 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v5), v2);
  }
  while ( v4 != v2 );
  return (unsigned int)v5;
}
