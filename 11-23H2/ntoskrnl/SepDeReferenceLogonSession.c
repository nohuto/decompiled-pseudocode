/*
 * XREFs of SepDeReferenceLogonSession @ 0x14076CFF0
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140370CC0 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x140729790 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x14076CFF0 (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     SepDeleteSessionLowboxEntries @ 0x140309DF4 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     SepInformLsaOfDeletedLogon @ 0x14076CF50 (SepInformLsaOfDeletedLogon.c)
 *     SepDeReferenceLogonSession @ 0x14076CFF0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionClaims @ 0x14076D6C0 (SepDeleteLogonSessionClaims.c)
 *     ObDestroyHandleRevocationBlock @ 0x14076DB04 (ObDestroyHandleRevocationBlock.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 *     SepDeleteLogonSessionSidValues @ 0x1409CF89C (SepDeleteLogonSessionSidValues.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1409D023C (SepInformFileSystemsOfDeletedLogon.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 i; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned __int64)(unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (__int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_QWORD *)(i + 160) == a2 && *(_DWORD *)a1 == *(_DWORD *)(i + 8) && *(_DWORD *)(a1 + 4) == *(_DWORD *)(i + 12) )
      break;
    v5 = (__int64 *)i;
  }
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(i + 24));
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = *(_QWORD *)i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (*(_DWORD *)(i + 32) & 4) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
      SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 160));
    v10 = *(void **)(i + 48);
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      *(_QWORD *)(i + 48) = 0LL;
    }
    v11 = *(void **)(i + 40);
    if ( v11 )
    {
      *(_QWORD *)(i + 40) = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObDereferenceDeviceMap(v11);
    }
    if ( (*(_DWORD *)(i + 32) & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v12 = *(void **)(i + 64);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 128);
    SepInformLsaOfDeletedLogon((__int64 *)a1, *(void **)(i + 160), i);
    SepDeleteSessionLowboxEntries();
  }
}
