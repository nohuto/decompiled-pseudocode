/*
 * XREFs of PopWriteSecurePagesCallback @ 0x14058F568
 * Callers:
 *     HvlIterateSecurePagesForHibernation @ 0x140546EF4 (HvlIterateSecurePagesForHibernation.c)
 * Callees:
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteSecurePagesCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = PopWriteHiberPages(
             a1,
             a2,
             a3,
             *(_DWORD *)(a1 + 252)
           + 2
           + *(_DWORD *)(a1 + 248)
           + (unsigned int)((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12));
  *(_DWORD *)(a1 + 252) += a3;
  return result;
}
