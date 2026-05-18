/*
 * XREFs of sub_1800A2D68 @ 0x1800A2D68
 * Callers:
 *     sub_1800A3764 @ 0x1800A3764 (sub_1800A3764.c)
 *     sub_1800A3840 @ 0x1800A3840 (sub_1800A3840.c)
 * Callees:
 *     sub_1800A2CD0 @ 0x1800A2CD0 (sub_1800A2CD0.c)
 */

char __fastcall sub_1800A2D68(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800A2CD0(a1, a1 + 32, (_QWORD *)(a1 + 208));
  return sub_1800A2CD0(v2, a1 + 216, (_QWORD *)(a1 + 392));
}
