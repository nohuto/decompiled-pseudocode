/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x14076D84C
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1406833F0 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140880410 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CFFC0 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     SepDeleteSessionLowboxEntries @ 0x140309A34 (SepDeleteSessionLowboxEntries.c)
 *     ObRevokeHandles @ 0x140682F10 (ObRevokeHandles.c)
 *     SepDeleteLogonSessionClaims @ 0x14076D9E0 (SepDeleteLogonSessionClaims.c)
 *     ObDestroyHandleRevocationBlock @ 0x14076DE24 (ObDestroyHandleRevocationBlock.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObDereferenceDeviceMap @ 0x1407B040C (ObDereferenceDeviceMap.c)
 *     SepDeleteLogonSessionSidValues @ 0x1409CF74C (SepDeleteLogonSessionSidValues.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v4; // rbp
  unsigned __int64 v5; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v4 = 0LL;
  v5 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v6 = (_DWORD **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( *((_QWORD *)i + 20) == PsGetCurrentServerSilo() && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    ObRevokeHandles((_QWORD *)i + 16);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v10 = *((_QWORD *)i + 3);
  if ( !v10 || (i[8] & 8) == 0 && v10 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v11 = (void *)*((_QWORD *)i + 5);
    if ( v11 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v4 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v4 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((_QWORD *)i + 20));
      ObDereferenceDeviceMap(v4);
    }
    v12 = (void *)*((_QWORD *)i + 20);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = (void *)*((_QWORD *)i + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 32);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
