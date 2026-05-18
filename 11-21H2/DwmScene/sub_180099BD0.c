/*
 * XREFs of sub_180099BD0 @ 0x180099BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 */

__int64 __fastcall sub_180099BD0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_18002B024((_QWORD *)(a1 + 136), &v5);
  return sub_18002B780(a1, a2);
}
