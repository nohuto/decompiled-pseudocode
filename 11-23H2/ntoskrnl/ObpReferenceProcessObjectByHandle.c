/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1407BD634
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1407BD48C (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     ObpIncrPointerCount @ 0x14025A4D4 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     ExMapHandleToPointer @ 0x14073FE00 (ExMapHandleToPointer.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  unsigned __int64 HandlePointer; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  volatile signed __int64 *v17; // r15
  int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  bool v23; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v25[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = a1;
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    *a7 = 0;
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&a2[-1].SystemAffinityTokenListHead, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&a2[-1].SystemAffinityTokenListHead);
    *a6 = a2;
    return 0LL;
  }
  if ( a1 == -2LL )
  {
    *a7 = 0;
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].SystemAffinityTokenListHead, 1, 1u, a5);
    ObpIncrPointerCount((volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead);
    *a6 = CurrentThread;
    return 0LL;
  }
  if ( !a4 )
  {
    a3 = ObpKernelHandleTable;
    v11 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_2:
    --CurrentThread->KernelApcDisable;
    v12 = (__int64 *)ExMapHandleToPointer((unsigned int *)a3, v11);
    v13 = v12;
    if ( v12 )
    {
      HandlePointer = ExGetHandlePointer(v12);
      v16 = *((unsigned int *)v13 + 2);
      v17 = (volatile signed __int64 *)HandlePointer;
      v18 = v13[1] & 0x1FFFFFF;
      if ( *(_DWORD *)(a3 + 4)
        && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v11, v16, v15),
            LODWORD(v16) = *((_DWORD *)v13 + 2),
            HandleExtraInfo) )
      {
        v19 = *HandleExtraInfo;
      }
      else
      {
        v19 = 0LL;
      }
      *a8 = v19;
      v20 = ((__int64)*(unsigned int *)v13 >> 17) & 7;
      a7[1] = v18;
      v21 = v20 | 8;
      if ( (v16 & 0x2000000) == 0 )
        v21 = v20;
      *a7 = v21;
      ObpIncrPointerCount(v17);
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v25, 0);
      if ( *(_QWORD *)(a3 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)v17, 1, 1u, a5);
      *a6 = (struct _KTHREAD *)(v17 + 6);
      return 0LL;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return 3221225480LL;
}
