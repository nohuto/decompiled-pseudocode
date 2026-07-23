/*
 * XREFs of sub_1408071C4 @ 0x1408071C4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_140807218 @ 0x140807218 (sub_140807218.c)
 */

void sub_1408071C4()
{
  __int64 v0; // rdx
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, sizeof(v1));
  sub_140750EC4(v1);
  sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
  sub_140807218(v1, v0);
  qword_140C548A8 = 0LL;
  sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
}
