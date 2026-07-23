/*
 * XREFs of ExpPartitionDestroy @ 0x140A00B78
 * Callers:
 *     ExpPartitionInitialize @ 0x140849908 (ExpPartitionInitialize.c)
 *     PspTeardownPartition @ 0x1409B68B0 (PspTeardownPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x14028FC50 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     ZwWaitForSingleObject @ 0x14041B170 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExpWorkQueueDestroy @ 0x140A00D54 (ExpWorkQueueDestroy.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P)
{
  unsigned __int16 i; // si
  __int64 v3; // rdi
  unsigned __int16 j; // si
  unsigned __int16 *v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  _DWORD *v8; // rdi

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 264) )
        {
          *(_DWORD *)(v3 + 272) = 1;
          KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v3 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v3 + 264));
        }
        KeCancelTimer2(v3 + 128);
        KeCancelTimer((PKTIMER)(v3 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  if ( *((_QWORD *)P + 1) )
  {
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * j) )
      {
        v5 = 0LL;
        v6 = 0LL;
        if ( (_UNKNOWN *)KeNodeBlock[j] != (_UNKNOWN *)((char *)&KiNodeInit + 304 * j) )
          v5 = (unsigned __int16 *)KeNodeBlock[j];
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *v5);
          v8 = *(_DWORD **)(v7 + v6);
          if ( ((unsigned __int8)v8 & 1) == 0 && v8 )
          {
            if ( v8[1] )
              KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v7 + v6), 0LL);
            ExpWorkQueueDestroy(*(_QWORD *)(v7 + v6));
            ExFreePoolWithTag(v8, 0);
          }
          v6 += 8LL;
        }
        while ( v6 < 64 );
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * j), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 1), 0);
  }
  ExFreePoolWithTag(P, 0);
}
