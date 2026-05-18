/*
 * XREFs of sub_1800A0184 @ 0x1800A0184
 * Callers:
 *     sub_18009FFB8 @ 0x18009FFB8 (sub_18009FFB8.c)
 *     sub_1800A0204 @ 0x1800A0204 (sub_1800A0204.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

_QWORD *__fastcall sub_1800A0184(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 *a5, __int64 *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *result; // rax

  v7 = *a6;
  v8 = *a5;
  *(_DWORD *)a2 = *a3;
  result = sub_180017648((_QWORD *)(a2 + 8), a4);
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  return result;
}
