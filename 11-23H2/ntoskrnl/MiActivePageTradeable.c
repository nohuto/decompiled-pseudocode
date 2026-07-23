/*
 * XREFs of MiActivePageTradeable @ 0x1402EB940
 * Callers:
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiActivePageTradeable(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, char a4)
{
  return (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(BugCheckParameter2 + 32) == 1
      && (a3 != 2
       || ((MiFlags & 0x4000) == 0 || !(unsigned int)MiGetPagePrivilege(BugCheckParameter2, 0, 0LL))
       && ((MiFlags & 0x20000) == 0 || !(unsigned int)MiGetPagePrivilege(BugCheckParameter2, 0, 0LL))
       && ((MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x42) == 0 || (a4 & 2) != 0));
}
