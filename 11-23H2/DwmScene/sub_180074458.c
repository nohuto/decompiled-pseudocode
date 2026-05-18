/*
 * XREFs of sub_180074458 @ 0x180074458
 * Callers:
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_180038EE8 @ 0x180038EE8 (sub_180038EE8.c)
 *     sub_180074358 @ 0x180074358 (sub_180074358.c)
 */

__int64 __fastcall sub_180074458(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 32);
  sub_180038EE8(a1 + 56, 0);
  if ( a1 + 64 != a2 + 56 )
    sub_180074358((_QWORD *)(a1 + 64), *(void **)(a2 + 56), *(_QWORD *)(a2 + 64));
  result = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = result;
  return result;
}
