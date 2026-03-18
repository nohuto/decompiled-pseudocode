/*
 * XREFs of SeTokenCanImpersonate @ 0x1407AFBE0
 * Callers:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14021F6A0 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14021F6B4 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x14021F6E8 (SepAcquireOrderedReadLocks.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1402ED880 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1402ED98C (SepCopyTokenIntegrity.c)
 *     RtlSidDominatesForTrust @ 0x1402F8A20 (RtlSidDominatesForTrust.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405F5200 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SeTokenIsElevated @ 0x1406C7488 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406CB1F0 (RtlQueryElevationFlags.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407F4B20 (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409B9218 (RtlIsParentOfChildAppContainer.c)
 */

__int64 __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  void *v8; // rbx
  void *v9; // rdi
  int IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  char v14; // [rsp+70h] [rbp+8h] BYREF
  bool v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0LL;
  if ( a2[6] != 998 || a2[7] )
  {
    result = RtlSidDominatesForTrust(*((_QWORD *)Token + 138), *((_QWORD *)a2 + 138), &v14);
    if ( (int)result < 0 )
      return result;
    if ( !v14 )
      *a4 = 1;
    if ( (Token[16] & Token[18] & 0x20000000) != 0 )
      return 0LL;
    SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2);
    SepCopyTokenIntegrity((__int64)Token);
    SepCopyTokenIntegrity((__int64)a2);
    IsElevated = RtlSidDominates(0LL, 0LL, &v15);
    if ( IsElevated < 0 )
      goto LABEL_42;
    if ( !v15 )
      goto LABEL_41;
    if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability(Token) || Token[6] == a2[56] && Token[7] == a2[57] )
    {
      IsElevated = 0;
    }
    else
    {
      if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
      {
LABEL_41:
        IsElevated = -1073741727;
        goto LABEL_42;
      }
      if ( (int)RtlQueryElevationFlags(&v17) < 0 || (v17 & 1) == 0 )
      {
LABEL_31:
        IsElevated = 0;
        if ( (Token[50] & 0x4000) == 0
          || (a2[50] & 0x4000) != 0
          && ((v11 = (void *)*((_QWORD *)a2 + 98), v12 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v12, v11))
           || (unsigned __int8)RtlIsParentOfChildAppContainer(v12, v11)) )
        {
          if ( !SeTokenIsRestricted(Token)
            || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
          {
            v13 = a2[30];
            if ( Token[30] == v13 || v13 )
              goto LABEL_42;
          }
        }
        goto LABEL_41;
      }
      IsElevated = SeTokenIsElevated(a2, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 )
          goto LABEL_28;
        IsElevated = SeTokenIsElevated(Token, &v16);
        if ( IsElevated >= 0 )
        {
          if ( !v16 && (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) != 0 )
            goto LABEL_41;
LABEL_28:
          if ( (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) != 0
            && (*(_DWORD *)(*((_QWORD *)a2 + 27) + 32LL) & 4) == 0 )
          {
            SepLogUnmatchedSessionFlagImpersonationAttempt((__int64)Token, (__int64)a2);
            goto LABEL_41;
          }
          goto LABEL_31;
        }
      }
    }
LABEL_42:
    SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
    return (unsigned int)IsElevated;
  }
  if ( (Token[50] & 0x4000) == 0 )
    return 0LL;
  if ( (a2[50] & 0x4000) != 0 )
  {
    v8 = (void *)*((_QWORD *)a2 + 98);
    v9 = (void *)*((_QWORD *)Token + 98);
    if ( RtlEqualSid(v9, v8) || (unsigned __int8)RtlIsParentOfChildAppContainer(v9, v8) )
      return 0LL;
  }
  return 3221225569LL;
}
