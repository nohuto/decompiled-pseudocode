/*
 * XREFs of SeTokenCanImpersonate @ 0x1407354A0
 * Callers:
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 * Callees:
 *     RtlSidDominates @ 0x140226A50 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140226B60 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x140228850 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x14022A790 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x1402B33C0 (RtlSidDominatesForTrust.c)
 *     SepReleaseOrderedReadLocks @ 0x140356698 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1403566CC (SepAcquireOrderedReadLocks.c)
 *     SeTokenIsWriteRestricted @ 0x140370D60 (SeTokenIsWriteRestricted.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1405B92E8 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SeTokenIsElevated @ 0x1407D1B74 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1407D5200 (RtlQueryElevationFlags.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ED23C (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC348 (RtlIsParentOfChildAppContainer.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  _BYTE *v7; // r11
  NTSTATUS IsElevated; // esi
  int v9; // eax
  void *v10; // rdi
  void *v11; // rbx
  void *v12; // rbp
  void *v13; // r14
  __int128 Sid2; // [rsp+20h] [rbp-48h] BYREF
  __int128 Sid1; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+20h] BYREF

  Dominates = 0;
  DominatesTrust = 0;
  v18 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  Sid1 = 0LL;
  Sid2 = 0LL;
  if ( a3 < 2 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(Token + 200) & 0x4000) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
        return -1073741727;
      v10 = *(void **)(a2 + 784);
      v11 = *(void **)(Token + 784);
      if ( !RtlEqualSid(v11, v10) && !RtlIsParentOfChildAppContainer(v11, v10) )
        return -1073741727;
    }
    return 0;
  }
  result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
  if ( result < 0 )
    return result;
  if ( !DominatesTrust )
    *v7 = 1;
  if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) == 0 )
  {
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity(Token, (__int64)&Sid1);
    SepCopyTokenIntegrity(a2, (__int64)&Sid2);
    IsElevated = RtlSidDominates((PSID)Sid1, (PSID)Sid2, &Dominates);
    if ( IsElevated >= 0 )
    {
      if ( !Dominates )
        goto LABEL_38;
      if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
        || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
      {
        IsElevated = 0;
        goto LABEL_24;
      }
      if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
LABEL_38:
        IsElevated = -1073741727;
        goto LABEL_24;
      }
      if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
      {
LABEL_21:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v12 = *(void **)(a2 + 784), v13 = *(void **)(Token + 784), RtlEqualSid(v13, v12))
           || RtlIsParentOfChildAppContainer(v13, v12)) )
        {
          if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
            || SeTokenIsRestricted((PACCESS_TOKEN)a2)
            && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
          {
            v9 = *(_DWORD *)(a2 + 120);
            if ( *(_DWORD *)(Token + 120) == v9 || v9 )
              goto LABEL_24;
          }
        }
        goto LABEL_38;
      }
      IsElevated = SeTokenIsElevated(a2, &v18);
      if ( IsElevated >= 0 )
      {
        if ( v18 )
        {
          IsElevated = SeTokenIsElevated(Token, &v18);
          if ( IsElevated < 0 )
            goto LABEL_24;
          if ( !v18 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
            goto LABEL_38;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
          goto LABEL_38;
        }
        goto LABEL_21;
      }
    }
LABEL_24:
    SepReleaseOrderedReadLocks(Token, a2);
    return IsElevated;
  }
  return 0;
}
