/*
 * XREFs of sub_140A91EAC @ 0x140A91EAC
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A91EAC(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  sub_140A8C924(0xC4u, 0xD5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return 1LL;
}
