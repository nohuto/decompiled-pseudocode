/*
 * XREFs of sub_18004493C @ 0x18004493C
 * Callers:
 *     sub_180013890 @ 0x180013890 (sub_180013890.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 */

__int64 __fastcall sub_18004493C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001246C(v7, a3);
  return sub_180085680(v4, v5, v3);
}
