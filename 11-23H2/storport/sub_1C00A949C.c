/*
 * XREFs of sub_1C00A949C @ 0x1C00A949C
 * Callers:
 *     sub_1C0035018 @ 0x1C0035018 (sub_1C0035018.c)
 *     sub_1C003609C @ 0x1C003609C (sub_1C003609C.c)
 * Callees:
 *     sub_1C0057C30 @ 0x1C0057C30 (sub_1C0057C30.c)
 */

__int64 __fastcall sub_1C00A949C(bool *a1, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  result = sub_1C0057C30(a2, (ULONG_PTR)&unk_1C00898D8, 0x40u, (__int64)a2, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
