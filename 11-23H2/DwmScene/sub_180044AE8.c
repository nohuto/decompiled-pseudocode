/*
 * XREFs of sub_180044AE8 @ 0x180044AE8
 * Callers:
 *     sub_180013890 @ 0x180013890 (sub_180013890.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 */

__int64 __fastcall sub_180044AE8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001246C(v7, a3);
  return sub_180085870(v4, v5, v3);
}
