/*
 * XREFs of SeExchangePrimaryToken @ 0x140847260
 * Callers:
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 * Callees:
 *     SepSetTrustLevelForProcessToken @ 0x140205A98 (SepSetTrustLevelForProcessToken.c)
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     MmGetSessionObjectById @ 0x1402DF7D8 (MmGetSessionObjectById.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     SepSetTokenSessionById @ 0x140672524 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x1406965F4 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406AB17C (SepDereferenceLowBoxNumberEntry.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  unsigned int SessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // r14d
  unsigned __int64 v17; // rbx
  struct _KTHREAD *v18; // rax
  __int64 result; // rax
  PVOID v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-58h] BYREF
  char v25; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  v25 = 0;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, v9, v10, v11);
  v12 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v14 = v12;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v24, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v24, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v16 = SepSetTrustLevelForProcessToken(a2, a1, &v25);
    if ( v16 < 0 )
    {
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !SessionObjectById )
        return (unsigned int)v16;
      v20 = SessionObjectById;
LABEL_21:
      ObfDereferenceObject(v20);
      return (unsigned int)v16;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v21 = *(_DWORD *)(a2 + 120);
      if ( v21 != v14 )
      {
        SepDereferenceLowBoxNumberEntry(v21, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        LOBYTE(v22) = 1;
        SepSetTokenSessionById(a2, v14, v22, (__int64)SessionObjectById, &Object);
        v23 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v14;
        v16 = SepSetTokenLowboxNumber(a2, v23);
        if ( v16 < 0 )
        {
          _InterlockedOr(v24, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v20 = Object;
          if ( !Object )
            return (unsigned int)v16;
          goto LABEL_21;
        }
      }
    }
    LOBYTE(v15) = 1;
    SepSetTokenSessionById(a2, v14, v15, (__int64)SessionObjectById, &Object);
    *(_DWORD *)(a2 + 120) = v14;
    _InterlockedOr(v24, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
      SepAuditAssignPrimaryToken(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v17 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), a2);
    if ( v17 )
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 48), 1u);
      _InterlockedOr(v24, 0);
      *(_BYTE *)(v17 + 204) = 0;
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0LL;
      *a3 = v17;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
