/*
 * XREFs of sub_1800315AC @ 0x1800315AC
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 *     sub_1800743F0 @ 0x1800743F0 (sub_1800743F0.c)
 * Callees:
 *     sub_18003164C @ 0x18003164C (sub_18003164C.c)
 */

_QWORD *__fastcall sub_1800315AC(__int64 a1)
{
  _QWORD *v1; // r10
  __int64 v2; // r11
  _QWORD *result; // rax

  *(_DWORD *)a1 = -1082130432;
  *(_DWORD *)(a1 + 4) = -1082130432;
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 2LL;
  *(_DWORD *)(a1 + 20) = -1082130432;
  *(_DWORD *)(a1 + 24) = -1082130432;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 2;
  sub_18003164C(a1 + 48);
  v1[7] = v2;
  result = v1;
  v1[8] = v2;
  v1[9] = v2;
  v1[10] = v2;
  return result;
}
