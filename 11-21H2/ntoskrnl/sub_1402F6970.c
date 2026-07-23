/*
 * XREFs of sub_1402F6970 @ 0x1402F6970
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_14057D0C0 @ 0x14057D0C0 (sub_14057D0C0.c)
 * Callees:
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 */

__int64 __fastcall sub_1402F6970(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 result; // rax
  __int64 *v4; // r8

  sub_1402F69A0(a2);
  result = *v2;
  v4 += 27;
  *v4 = *v2;
  *v2 = (__int64)v4;
  return result;
}
