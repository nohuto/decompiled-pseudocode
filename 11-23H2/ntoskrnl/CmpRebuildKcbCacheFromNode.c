/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x14076AAAC
 * Callers:
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpRebuildKcbCache @ 0x140769420 (CmpRebuildKcbCache.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25FB0 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A26BA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26D3C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0F30 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCleanUpSubKeyInfo @ 0x14076ABB4 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 */

__int64 __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // al
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  __int64 result; // rax
  ULONG_PTR v12; // rdx

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 13) & 3;
  LOBYTE(a2) = 1;
  *(_BYTE *)(BugCheckParameter3 + 65) = v5;
  CmpCleanUpSubKeyInfo(BugCheckParameter3, a2);
  v8 = *(_DWORD *)(BugCheckParameter3 + 184);
  if ( (v8 & 0x400000) == 0 )
  {
    if ( a4 )
    {
      CmpCleanUpKcbCachedSymlink(BugCheckParameter3);
      v8 = *(_DWORD *)(BugCheckParameter3 + 184);
    }
    v9 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(BugCheckParameter3 + 100) = v9;
  }
  *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v4 + 4);
  *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v4 + 52);
  *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v4 + 60);
  *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v4 + 64);
  v10 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 184) = v10;
  *(_DWORD *)(BugCheckParameter3 + 184) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v4 + 55);
  result = *(unsigned __int16 *)(v4 + 2);
  *(_WORD *)(BugCheckParameter3 + 186) = result;
  v12 = *(unsigned int *)(v4 + 44);
  if ( (_DWORD)v12 != -1 )
    return CmpAssignSecurityToKcb(BugCheckParameter3, v12, 0);
  *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  return result;
}
