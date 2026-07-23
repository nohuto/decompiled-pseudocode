/*
 * XREFs of sub_1402EABF8 @ 0x1402EABF8
 * Callers:
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 * Callees:
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_1402EABF8(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, char a4)
{
  return (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(BugCheckParameter2 + 32) == 1
      && (a3 != 2
       || ((dword_140D06880 & 0x4000) == 0 || !(unsigned int)sub_140313B20(BugCheckParameter2))
       && ((dword_140D06880 & 0x20000) == 0 || !(unsigned int)sub_140313B20(BugCheckParameter2))
       && ((sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x42) == 0 || (a4 & 2) != 0));
}
