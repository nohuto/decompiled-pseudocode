/*
 * XREFs of PmWmiCounterEnable @ 0x1C00223F0
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     PmIoctlGetPerformanceInfo @ 0x1C001D4F8 (PmIoctlGetPerformanceInfo.c)
 *     PmIoctlPerformance @ 0x1C001DCC4 (PmIoctlPerformance.c)
 *     ?PmWmiFunctionControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KW4_WMIENABLEDISABLECONTROL@@E@Z @ 0x1C0022340 (-PmWmiFunctionControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KW4_WMIENABLEDISABLECONTROL@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmWmiCounterEnable(struct _KMUTANT **a1)
{
  unsigned int v1; // ebx
  struct _KMUTANT *v3; // rax
  __int64 MaximumProcessorCount; // r14
  ULONG ActiveProcessorCount; // ebp
  __int64 Pool2; // rax
  struct _KMUTANT *v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG64 v12; // rax
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    if ( *a1 )
    {
      if ( !v3[1].Header.LockNV && !HIDWORD(v3[1].Header.WaitListHead.Flink) )
      {
        QpcTimeStamp = 0LL;
        (*a1)[1].MutantListEntry.Blink = (struct _LIST_ENTRY *)KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        if ( !LODWORD((*a1)[1].Header.WaitListHead.Flink) )
          (*a1)[1].MutantListEntry.Flink = (*a1)[1].MutantListEntry.Blink;
      }
      _InterlockedIncrement(&(*a1)[1].Header.Lock);
    }
    else
    {
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      Pool2 = ExAllocatePool2(
                64LL,
                8 * ((unsigned int)MaximumProcessorCount + 16 * ActiveProcessorCount) + 224,
                1162898768LL);
      if ( Pool2 )
      {
        v8 = (struct _KMUTANT *)Pool2;
        *(_QWORD *)(Pool2 + 72) = Pool2 + 96;
        v9 = (Pool2 + 96 + 8 * MaximumProcessorCount + 128) & 0xFFFFFFFFFFFFFF80uLL;
        if ( ActiveProcessorCount )
        {
          v10 = 0LL;
          v11 = ActiveProcessorCount;
          do
          {
            *(_QWORD *)(v10 + *(_QWORD *)(Pool2 + 72)) = v9;
            v9 += 128LL;
            v10 += 8LL;
            --v11;
          }
          while ( v11 );
        }
        *(_DWORD *)(Pool2 + 56) = 1;
        *(_DWORD *)(Pool2 + 60) = ActiveProcessorCount;
        QpcTimeStamp = 0LL;
        v12 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        v8[1].MutantListEntry.Flink = (struct _LIST_ENTRY *)v12;
        v8[1].MutantListEntry.Blink = (struct _LIST_ENTRY *)v12;
        KeInitializeMutex(v8, 0);
        *a1 = v8;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
