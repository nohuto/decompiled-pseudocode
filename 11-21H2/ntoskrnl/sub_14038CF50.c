/*
 * XREFs of sub_14038CF50 @ 0x14038CF50
 * Callers:
 *     sub_140377590 @ 0x140377590 (sub_140377590.c)
 *     sub_1403784C0 @ 0x1403784C0 (sub_1403784C0.c)
 *     sub_14038C7A0 @ 0x14038C7A0 (sub_14038C7A0.c)
 *     sub_1405F0724 @ 0x1405F0724 (sub_1405F0724.c)
 *     sub_1405F0E44 @ 0x1405F0E44 (sub_1405F0E44.c)
 *     sub_1405F1474 @ 0x1405F1474 (sub_1405F1474.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_14038CF50(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
