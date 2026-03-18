/*
 * XREFs of MiPrefetchControlArea @ 0x1406B85C8
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x1402792E0 (MiPfCompletePrefetchIos.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406FACF8 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(int a1, int a2, __int64 a3, int a4, unsigned int a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  int List; // edi
  int v9; // eax
  PVOID v10; // rcx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0, a1, a2, 0, a3, a4, a6, (__int64)P);
  if ( List >= 0 && P[0] )
  {
    ++BYTE6(CurrentThread[1].Queue);
    *((_DWORD *)P[0] + 26) = 0;
    v9 = MiPfPutPagesInTransition((__int64)P[0], 0);
    v10 = P[0];
    List = v9;
    if ( v9 >= 0 && *((PVOID *)P[0] + 15) != (char *)P[0] + 120 )
    {
      MiPfExecuteReadList(P[0], a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD *)P[0] + 15, 0LL, 0LL);
      v10 = P[0];
    }
    MiReleaseReadListResources(v10);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(P[0], 0);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)List;
}
