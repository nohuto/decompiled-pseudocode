/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x140A25D00
 * Callers:
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57A0 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076A8BC (CmpRebuildKcbCacheFromNode.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1C5C (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D1CB0 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407D1D10 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A2034C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25DD4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  int started; // ebx
  __int64 EntryAtLayerHeight; // rax
  _QWORD v6[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v6);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v6, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v6);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v6, *(_WORD *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack((__int64)v6);
  return (unsigned int)started;
}
