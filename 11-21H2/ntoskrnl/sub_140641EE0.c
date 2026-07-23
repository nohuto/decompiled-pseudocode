/*
 * XREFs of sub_140641EE0 @ 0x140641EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall sub_140641EE0(ULONG_PTR BugCheckParameter3)
{
  DbgkWerCaptureLiveKernelDump(
    (unsigned int)L"ResourceTimeout",
    460,
    *(_QWORD *)(BugCheckParameter3 + 40),
    *(_QWORD *)(BugCheckParameter3 + 32),
    *(unsigned int *)(BugCheckParameter3 + 48),
    *(unsigned int *)(BugCheckParameter3 + 52),
    0LL,
    0LL,
    0);
  return sub_140348B40(BugCheckParameter3);
}
