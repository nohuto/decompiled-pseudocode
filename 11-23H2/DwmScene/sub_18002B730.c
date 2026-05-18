/*
 * XREFs of sub_18002B730 @ 0x18002B730
 * Callers:
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AFDC @ 0x18002AFDC (sub_18002AFDC.c)
 *     sub_18002C0C0 @ 0x18002C0C0 (sub_18002C0C0.c)
 * Callees:
 *     sub_18002B35C @ 0x18002B35C (sub_18002B35C.c)
 */

__int64 __fastcall sub_18002B730(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  sub_18002B35C((__int64 *)(a1 + 136), (_QWORD *)(a2 + 136));
  return a1;
}
