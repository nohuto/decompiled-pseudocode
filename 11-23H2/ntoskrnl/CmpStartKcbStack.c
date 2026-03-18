/*
 * XREFs of CmpStartKcbStack @ 0x1406D7D20
 * Callers:
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B6C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BB0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD5C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A20730 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x140A263A0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CEEC (CmpAllocatePool.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 result; // rax

  Pool = 0LL;
  if ( a2 > 1 )
  {
    Pool = CmpAllocatePool(256LL, 8LL * (unsigned int)(a2 - 1), 892751171LL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_QWORD *)(a1 + 24) = Pool;
  *(_WORD *)(a1 + 2) = -1;
  result = 0LL;
  *(_WORD *)a1 = a2;
  return result;
}
