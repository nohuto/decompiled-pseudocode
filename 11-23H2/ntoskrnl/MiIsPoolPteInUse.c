/*
 * XREFs of MiIsPoolPteInUse @ 0x1402E64D8
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140286530 (MiLinkPoolCommitChain.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolPteInUse(__int16 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 )
    return (a1 & 0x3E0) != 0LL;
  return result;
}
