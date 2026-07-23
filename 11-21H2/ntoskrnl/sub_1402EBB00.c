/*
 * XREFs of sub_1402EBB00 @ 0x1402EBB00
 * Callers:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     PsSetProcessPriorityByClass @ 0x14079D240 (PsSetProcessPriorityByClass.c)
 *     sub_14079D270 @ 0x14079D270 (sub_14079D270.c)
 * Callees:
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     sub_14079D364 @ 0x14079D364 (sub_14079D364.c)
 */

__int64 __fastcall sub_1402EBB00(int a1, int a2)
{
  int v3; // eax
  int v4; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  v8 = 0;
  v3 = sub_14079D364(a1, a2, (unsigned int)&v6, (unsigned int)&v8, (__int64)&v7);
  LOBYTE(v4) = v6;
  return sub_1402EBB58(a1, v3, v4, v8, v7);
}
