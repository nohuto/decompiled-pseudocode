/*
 * XREFs of sub_180042838 @ 0x180042838
 * Callers:
 *     sub_180042B88 @ 0x180042B88 (sub_180042B88.c)
 * Callees:
 *     sub_18003F5A8 @ 0x18003F5A8 (sub_18003F5A8.c)
 */

__int64 __fastcall sub_180042838(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_18003F5A8((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
