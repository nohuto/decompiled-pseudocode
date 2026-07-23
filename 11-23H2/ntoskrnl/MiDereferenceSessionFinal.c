/*
 * XREFs of MiDereferenceSessionFinal @ 0x140681B80
 * Callers:
 *     MiDereferenceSession @ 0x1407E0E90 (MiDereferenceSession.c)
 * Callees:
 *     MiUnlinkSessionWorkingSet @ 0x140200794 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x1402007FC (MiMarkSessionDeletePending.c)
 *     MiSessionUnlinkProcess @ 0x14020086C (MiSessionUnlinkProcess.c)
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiPartitionIdToPointer @ 0x14020B9C4 (MiPartitionIdToPointer.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiReturnResident @ 0x1402930A0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiDetachProcessFromSession @ 0x14033F2D8 (MiDetachProcessFromSession.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MiSessionUnloadAllImages @ 0x140681CD8 (MiSessionUnloadAllImages.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1407CCB2C (ExpWnfDeleteScopeById.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rbx
  __int64 v2; // rsi
  void (__fastcall *v3)(_QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  void *v7; // rcx
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+8h] BYREF

  memset(v8, 0, sizeof(v8));
  v10 = 0LL;
  v9 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].Affinity.StaticBitmap[25];
  v2 = MiPartitionIdToPointer(*(_WORD *)(v1 + 366));
  MiMarkSessionDeletePending(v1);
  if ( *(_QWORD *)(v1 + 56) )
  {
    KeSetEvent(*(PRKEVENT *)(v1 + 48), 1, 0);
    ObCloseHandle(*(HANDLE *)(v1 + 56), 0);
  }
  v3 = *(void (__fastcall **)(_QWORD))(v1 + 608);
  if ( (unsigned __int64)v3 > 1 )
    v3(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v1);
  v11 = *(_DWORD *)(v1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v11);
  KeLeaveCriticalRegion();
  if ( Process[1].Affinity.StaticBitmap[2] )
  {
    MiSessionUnlinkProcess(v5, (__int64)Process);
    Process[1].Affinity.StaticBitmap[2] = 0LL;
  }
  MiDeleteSessionAddressSpace(v1, (__int64)v8);
  MiDetachProcessFromSession(0LL);
  MiReturnCommit(v2, v9 - *((_QWORD *)&v8[0] + 1));
  MiReturnResident(v2, *(unsigned __int64 *)&v8[0]);
  result = MiReturnResident(v2, *(_QWORD *)(v1 + 304));
  v7 = *(void **)(v1 + 784);
  if ( v7 )
    result = ObfDereferenceObjectWithTag(v7, 0x73536D4Du);
  *(_QWORD *)(v1 + 784) = 0LL;
  return result;
}
