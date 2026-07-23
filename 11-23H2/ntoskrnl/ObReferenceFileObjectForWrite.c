/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x140749FD4
 * Callers:
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     IopIoRingReferenceFileObject @ 0x14094A104 (IopIoRingReferenceFileObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     PsDereferenceSiloContext @ 0x14036A410 (PsDereferenceSiloContext.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     ObpHandlesToObjectAreRevoked @ 0x1407496F8 (ObpHandlesToObjectAreRevoked.c)
 *     ObpReferenceObjectByHandle @ 0x14074A12C (ObpReferenceObjectByHandle.c)
 *     IoComputeDesiredAccessFileObject @ 0x14074A1B4 (IoComputeDesiredAccessFileObject.c)
 *     ObpAuditObjectAccess @ 0x14097C314 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v7; // rbx
  _KPROCESS *Process; // rax
  ULONG_PTR v9; // r14
  __int64 v10; // r13
  unsigned int v12; // ebx
  int v13; // [rsp+80h] [rbp+8h] BYREF

  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( !a2 && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = ObpKernelHandleTable;
      v7 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
      goto LABEL_3;
    }
    return 3221225480LL;
  }
  Process = CurrentThread->ApcState.Process;
  v9 = Process[1].Affinity.StaticBitmap[28];
  if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    return 3221225480LL;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  v10 = ObpReferenceObjectByHandle(v9, v7);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v10 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(0LL, 1, 1u, 0x746C6644u);
    if ( (int)IoComputeDesiredAccessFileObject(48LL, &v13) < 0 )
    {
      v12 = -1073741788;
    }
    else
    {
      a4[1] = 0;
      *a4 = 0;
      v12 = -1073741790;
    }
    PsDereferenceSiloContext((void *)0x30);
  }
  else
  {
    v12 = -1073741816;
  }
  *a3 = 0LL;
  return v12;
}
