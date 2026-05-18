/*
 * XREFs of sub_18001C9D4 @ 0x18001C9D4
 * Callers:
 *     sub_18001C9A4 @ 0x18001C9A4 (sub_18001C9A4.c)
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 *     sub_18001DEDC @ 0x18001DEDC (sub_18001DEDC.c)
 *     sub_1800DE1E8 @ 0x1800DE1E8 (sub_1800DE1E8.c)
 *     sub_1800DF56C @ 0x1800DF56C (sub_1800DF56C.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 * Callees:
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 *     sub_18001CB14 @ 0x18001CB14 (sub_18001CB14.c)
 */

__int64 __fastcall sub_18001C9D4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18001CB14(v7, v6) )
  {
    sub_18001C9D4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
