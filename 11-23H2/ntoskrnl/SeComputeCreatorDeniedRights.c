/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x14022F430
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1406C2B38 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 * Callees:
 *     SepTokenIsOwner @ 0x140229610 (SepTokenIsOwner.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1403378B0 (RtlpOwnerAcesPresent.c)
 *     SepGetScopedPolicySid @ 0x1405B8164 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1405B9E28 (SepRmReferenceFindCap.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbp
  __int16 v9; // r15
  __int16 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  ACL *v14; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v18; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h]
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp+18h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v6 = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 48LL);
  if ( !v8 )
  {
    v8 = a4;
    if ( !a4 )
    {
      v8 = *(_QWORD *)(a2 + 64);
      if ( !v8 )
        return 0LL;
    }
  }
  v9 = *(_WORD *)(v8 + 2);
  v10 = v9 & 0x8000;
  if ( (v9 & 4) != 0 )
  {
    if ( v10 )
    {
      v11 = *(unsigned int *)(v8 + 16);
      v12 = (_DWORD)v11 ? v11 + v8 : 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(v8 + 32);
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v12) )
  {
    if ( (v9 & 0x10) != 0 )
    {
      if ( v10 )
      {
        v13 = *(unsigned int *)(v8 + 12);
        v14 = (_DWORD)v13 ? (ACL *)(v13 + v8) : 0LL;
      }
      else
      {
        v14 = *(ACL **)(v8 + 24);
      }
    }
    else
    {
      v14 = 0LL;
    }
    v20 = 0LL;
    if ( !SepRmEnforceCap )
      return 0LL;
    if ( !v14 )
      return 0LL;
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v14);
    if ( !ScopedPolicySid )
      return 0LL;
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v18 = v20;
    if ( Cap < 0 )
      v18 = SepRmDefaultCap;
    if ( (*(_DWORD *)(v18 + 56) & 1) == 0 )
      return 0LL;
  }
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = SubjectSecurityContext->PrimaryToken;
  if ( !(unsigned __int8)SepTokenIsOwner((__int64)ClientToken, v8) )
    return 0LL;
  if ( (a3 & 0x40000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x40000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 = 0x40000;
  }
  if ( (a3 & 0x80000) != 0
    && !SeAccessCheck(
          (PSECURITY_DESCRIPTOR)v8,
          SubjectSecurityContext,
          1u,
          0x80000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&StandardBitMapping,
          KeGetCurrentThread()->PreviousMode,
          &GrantedAccess,
          &AccessStatus) )
  {
    v6 |= 0x80000u;
  }
  return v6;
}
