/*
 * XREFs of sub_140287F58 @ 0x140287F58
 * Callers:
 *     sub_14023F590 @ 0x14023F590 (sub_14023F590.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 * Callees:
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 */

__int64 *__fastcall sub_140287F58(_DWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi

  v4 = sub_140287B04(a2, 4);
  ++*(_QWORD *)(a2 + 24);
  v5 = v4;
  sub_140287A2C(a2);
  if ( (*a1 & 1) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(a2 + 48);
  return v5;
}
