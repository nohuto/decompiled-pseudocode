/*
 * XREFs of MiPrefetchControlArea @ 0x1407DCBDC
 * Callers:
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E748 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     MiPfCompletePrefetchIos @ 0x1402A3CD0 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402BD6A8 (MiDereferenceInPageAutoBoostLock.c)
 *     MiGetInPageAutoBoostLock @ 0x1402BD6D8 (MiGetInPageAutoBoostLock.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140721550 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1407242F4 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        signed __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rax
  ULONG_PTR v14; // rbp
  int List; // ebx
  int v17; // eax
  PVOID v18; // rcx
  PVOID P[2]; // [rsp+50h] [rbp-38h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = MiGetInPageAutoBoostLock();
  v12 = v11;
  if ( v11 )
  {
    v13 = KeAbPreAcquire((__int64)v11, 0LL);
    v14 = v13;
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    List = MiPfPrepareSequentialReadList(0LL, a1, a2, 0LL, a3, a4, a6, (__int64)v12, (__int64 *)P);
    if ( List >= 0 && P[0] )
    {
      ++BYTE6(CurrentThread[1].Queue);
      *((_DWORD *)P[0] + 26) = 0;
      v17 = MiPfPutPagesInTransition((__int64)P[0], 0, a5, a6);
      v18 = P[0];
      List = v17;
      if ( v17 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
      {
        MiPfExecuteReadList((__int64)P[0], a5, a6, 0LL);
        MiPfCompletePrefetchIos((_QWORD **)P[0] + 15, 0LL, 0LL);
        v18 = P[0];
      }
      MiReleaseReadListResources((__int64)v18);
      --BYTE6(CurrentThread[1].Queue);
      ExFreePoolWithTag(P[0], 0);
    }
    if ( v14 )
      KeAbPostReleaseEx((ULONG_PTR)v12, v14);
    MiDereferenceInPageAutoBoostLock(v12);
  }
  else
  {
    List = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)List;
}
