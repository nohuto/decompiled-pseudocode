/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x14076F8E0
 * Callers:
 *     PspSystemThreadStartup @ 0x14030BCD0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14076F6E0 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x1409B18F0 (PspSecureThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329C0 (PsReferencePrimaryTokenWithTag.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     KeSynchronizeAddressPolicy @ 0x1403608FC (KeSynchronizeAddressPolicy.c)
 *     PspLockUnlockProcessExclusive @ 0x140361A28 (PspLockUnlockProcessExclusive.c)
 *     KeKvaShadowingActive @ 0x14036A108 (KeKvaShadowingActive.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     SeTokenIsAdmin @ 0x1407D04A0 (SeTokenIsAdmin.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rbx
  BOOL v3; // edi
  BOOL v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 1120), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 2172) & 0x400000) == 0 )
  {
    v2 = (void *)PsReferencePrimaryTokenWithTag(v1, 0x746C6644u);
    v3 = SeTokenIsAdmin(v2) != 0;
    ObfDereferenceObject(v2);
    if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
      v3 = 1;
    v4 = 0;
    if ( (*(_DWORD *)(v1 + 2172) & 0x800000) == 0 )
      v4 = v3;
    if ( v4 )
    {
      *(_QWORD *)(v1 + 2528) = 0LL;
      *(_QWORD *)(v1 + 2536) = 0LL;
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 2172) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu);
    }
    else
    {
      if ( v4 )
      {
        *(_BYTE *)(v1 + 912) = 1;
        _InterlockedOr(v5, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0xEu)
        && *(_BYTE *)(v1 + 912) == 1
        && (PEPROCESS)v1 != PsInitialSystemProcess )
      {
        MiDeleteProcessShadow(v1, 1);
      }
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 2172), 0x16u) )
      PspOneDirectionSecurityDomainCombine(v1);
  }
  _InterlockedOr(v5, 0);
}
