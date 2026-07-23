/*
 * XREFs of sub_140A83574 @ 0x140A83574
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 */

__int64 sub_140A83574()
{
  sub_140250C50(
    (__int64)&unk_140D59240,
    0LL,
    (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
    512,
    24,
    1666147926,
    0,
    dword_140C1AD3C);
  return (unsigned int)_InterlockedExchange(&dword_140D57868, 1);
}
