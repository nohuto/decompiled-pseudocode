/*
 * XREFs of sub_180084DC0 @ 0x180084DC0
 * Callers:
 *     sub_180044320 @ 0x180044320 (sub_180044320.c)
 *     sub_18004B7C0 @ 0x18004B7C0 (sub_18004B7C0.c)
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 * Callees:
 *     sub_180028EE8 @ 0x180028EE8 (sub_180028EE8.c)
 *     sub_180085E18 @ 0x180085E18 (sub_180085E18.c)
 */

__int64 __fastcall sub_180084DC0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_180028EE8((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_180085E18(a1 + 88, &v6);
}
