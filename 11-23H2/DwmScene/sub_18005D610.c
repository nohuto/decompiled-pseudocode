/*
 * XREFs of sub_18005D610 @ 0x18005D610
 * Callers:
 *     sub_18008ED60 @ 0x18008ED60 (sub_18008ED60.c)
 * Callees:
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 */

__int64 __fastcall sub_18005D610(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_18005D26C(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_18005D0B8(a1, v3);
  return sub_180054C80((_QWORD *)(a1 + 448));
}
