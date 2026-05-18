/*
 * XREFs of sub_180044970 @ 0x180044970
 * Callers:
 *     sub_18009ABE0 @ 0x18009ABE0 (sub_18009ABE0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 */

__int64 __fastcall sub_180044970(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned __int16 v4; // r10
  __int64 v5; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001246C(v7, a3);
  return sub_1800856EC(v5, v4, v3);
}
