/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x140A26BA0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140A26650 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x140A26E60 (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076AAAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1F2C (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D1F80 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407D1FE0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A205FC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A26084 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A264C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // r14
  char v6; // si
  ULONG_PTR KcbAtLayerHeight; // r15
  __int16 v8; // dx
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 EntryAtLayerHeight; // r13
  __int16 v12; // dx
  __int64 v13; // r14
  __int16 v16[40]; // [rsp+30h] [rbp-89h] BYREF
  __int16 v17[40]; // [rsp+80h] [rbp-39h] BYREF

  memset(v17, 0, 0x4AuLL);
  memset(v16, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v17);
  CmpInitializeKeyNodeStack(v16);
  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
  v9 = CmpGetKcbAtLayerHeight(a2, v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v17, a1, 0LL);
  if ( started < 0 )
    goto LABEL_12;
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v16, a2, 0LL);
  if ( started < 0 )
    goto LABEL_12;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v17, v5);
  v13 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v16, v12);
  if ( *(_DWORD *)(v9 + 40) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v17, (__int64)v16);
    if ( started < 0 )
      goto LABEL_12;
    v6 = 1;
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v13 + 8);
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v17, v16);
    if ( started < 0 )
      goto LABEL_10;
    v6 = 1;
  }
  started = 0;
LABEL_10:
  if ( v6 )
  {
    ++*(_QWORD *)(v9 + 304);
    CmpRebuildKcbCacheFromNode(v9, *(_QWORD *)(v13 + 16), 0LL, 0);
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
  }
LABEL_12:
  CmpCleanupKeyNodeStack((__int64)v16);
  CmpCleanupKeyNodeStack((__int64)v17);
  return (unsigned int)started;
}
