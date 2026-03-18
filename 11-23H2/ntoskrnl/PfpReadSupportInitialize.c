/*
 * XREFs of PfpReadSupportInitialize @ 0x1402F9BEC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14075D490 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x14097DEE4 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x1408A58F0 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
