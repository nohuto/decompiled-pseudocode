/*
 * XREFs of EtwpBuildNotificationPacket @ 0x140781DA4
 * Callers:
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpCalculateUpdateNotification @ 0x140781690 (EtwpCalculateUpdateNotification.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7760 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ED060 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     EtwpGetSchematizedFilterSize @ 0x1406BF588 (EtwpGetSchematizedFilterSize.c)
 *     EtwpAllocDataBlock @ 0x140781E28 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1409F543C (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpBuildNotificationPacket(__int64 a1, _OWORD *a2, unsigned __int8 a3, _QWORD *a4)
{
  int SchematizedFilterSize; // eax
  int v7; // ebp
  int v8; // edi
  int v10; // r14d

  SchematizedFilterSize = EtwpGetSchematizedFilterSize(a1, a3);
  v7 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
  {
    v10 = SchematizedFilterSize + 136;
    v8 = EtwpAllocDataBlock((unsigned int)(SchematizedFilterSize + 136), 0LL);
    if ( v8 >= 0 )
    {
      if ( a2 )
      {
        MEMORY[0] = *a2;
        MEMORY[0x10] = a2[1];
        MEMORY[0x20] = a2[2];
        MEMORY[0x30] = a2[3];
        MEMORY[0x40] = a2[4];
        MEMORY[0x50] = a2[5];
        MEMORY[0x60] = a2[6];
        MEMORY[0x70] = *((_QWORD *)a2 + 14);
      }
      MEMORY[0x74] = 1;
      MEMORY[8] = 1;
      MEMORY[4] = v10;
      *a4 = 0LL;
      MEMORY[0x78] = 136LL;
      MEMORY[0x84] = 0x80000000;
      MEMORY[0x80] = v7;
      EtwpCopySchematizedFilters((void *)0x88);
    }
  }
  else if ( a2 )
  {
    return (unsigned int)EtwpAllocDataBlock(*((unsigned int *)a2 + 1), a2);
  }
  else
  {
    v8 = EtwpAllocDataBlock(0x78uLL, 0LL);
    if ( v8 >= 0 )
    {
      *a4 = 0LL;
      MEMORY[8] = 1;
      MEMORY[4] = 120;
    }
  }
  return (unsigned int)v8;
}
