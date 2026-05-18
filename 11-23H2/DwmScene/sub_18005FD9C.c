/*
 * XREFs of sub_18005FD9C @ 0x18005FD9C
 * Callers:
 *     sub_18005F224 @ 0x18005F224 (sub_18005F224.c)
 *     sub_18005FB90 @ 0x18005FB90 (sub_18005FB90.c)
 * Callees:
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 *     sub_18005F2F0 @ 0x18005F2F0 (sub_18005F2F0.c)
 */

__int64 __fastcall sub_18005FD9C(__int64 a1)
{
  __int64 v2; // rcx

  sub_18003FF34((void **)(a1 + 16));
  sub_18005F2F0(v2, *(_QWORD *)a1);
  return sub_1800100E8(*(void **)a1, 0x20uLL);
}
