/*
 * XREFs of sub_18004CF7C @ 0x18004CF7C
 * Callers:
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 *     sub_180062BB4 @ 0x180062BB4 (sub_180062BB4.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004CF7C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx

  sub_180025470(a1, a2);
  sub_180017648((_QWORD *)(a1[1] + 32LL), a4);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
