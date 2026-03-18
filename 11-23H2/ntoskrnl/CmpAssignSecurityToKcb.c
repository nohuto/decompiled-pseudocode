/*
 * XREFs of CmpAssignSecurityToKcb @ 0x14076AA60
 * Callers:
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076A8BC (CmpRebuildKcbCacheFromNode.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A27FC4 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A286F0 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14022CFB0 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     CmLockHiveSecurityShared @ 0x140AF50A0 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v6; // r14
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  v6 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( !a4 )
      CmLockHiveSecurityShared(*(_QWORD *)(BugCheckParameter3 + 32));
    if ( CmpFindSecurityCellCacheIndex(v10, v6, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v10 + 1888) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v6);
      v9 = 0;
    }
    if ( !a4 )
      CmUnlockHiveSecurity(v10);
  }
  return v9;
}
