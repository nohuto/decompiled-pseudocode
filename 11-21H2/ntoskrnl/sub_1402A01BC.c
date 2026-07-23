/*
 * XREFs of sub_1402A01BC @ 0x1402A01BC
 * Callers:
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_14057B33C @ 0x14057B33C (sub_14057B33C.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 * Callees:
 *     sub_1402A0244 @ 0x1402A0244 (sub_1402A0244.c)
 *     sub_1403DE5C8 @ 0x1403DE5C8 (sub_1403DE5C8.c)
 */

__int64 __fastcall sub_1402A01BC(__int64 a1, _WORD *a2, unsigned __int16 a3)
{
  __int64 v3; // rbx
  _WORD *v4; // rax
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v9 = 0LL;
  WORD4(v9) = a3;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 88);
  *(_QWORD *)&v9 = v6;
  if ( !a2 )
    v4 = (_WORD *)sub_1403DE5C8(&v9);
  v7 = *(_QWORD *)&v4[4 * v3 + 12];
  *(_WORD *)(a1 + 2 * v3 + 772) = *v4;
  *(_QWORD *)&v9 = v6 & *(_QWORD *)(v7 + 128);
  result = sub_1402A0244(v7, &v9);
  *(_WORD *)(a1 + 2 * v3 + 708) = result;
  *(_WORD *)(a1 + 2 * v3 + 644) = result;
  return result;
}
