/*
 * XREFs of EtwpCovSampCaptureWorkerThread @ 0x1408A8A90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140412370 (EtwpCovSampCaptureBufferRelease.c)
 *     RtlpInterlockedFlushSList @ 0x1404292C0 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A58A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x140603E58 (EtwpCovSampLookasideGrow.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A8824 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409F2DD4 (EtwpCovSampSampleBufferProcess.c)
 */

void __fastcall __noreturn EtwpCovSampCaptureWorkerThread(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  PSLIST_ENTRY v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ecx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-68h] BYREF

  Object[0] = (PVOID)(a1 + 1104);
  Object[1] = (PVOID)(a1 + 1040);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
          v3 = v2;
        }
        while ( v2 >= 2 );
        KeResetEvent((PRKEVENT)Object[v2]);
        if ( v3 )
          break;
        v4 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 1088));
        while ( v4 )
        {
          v5 = (__int64)v4;
          v4 = v4->Next;
          v6 = *(_QWORD *)(v5 + 16);
          switch ( v6 )
          {
            case 1342288122LL:
              EtwpCovSampSampleBufferProcess(a1, v5);
              EtwpCovSampCaptureReleaseToLookaside(a1, a1 + 880, (_SLIST_ENTRY *)v5);
              break;
            case 3401298175LL:
              EtwpCovSampCaptureBufferProcess(a1, v5);
              EtwpCovSampCaptureBufferRelease(a1, v5);
              break;
            case 4054171642LL:
              KeSetEvent((PRKEVENT)(v5 + 48), 0, 0);
              break;
          }
        }
      }
      if ( v3 == 1 )
      {
        v7 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 1064)) >= 0x40 )
        {
          *(_DWORD *)(a1 + 1064) = MEMORY[0xFFFFF78000000320];
          v8 = *(_QWORD **)(a1 + 944);
          *(_DWORD *)(a1 + 1068) = v7;
          if ( v8 != (_QWORD *)(a1 + 944) )
            break;
        }
      }
    }
    do
    {
      v9 = (__int64)(v8 - 2);
      if ( *((_DWORD *)v8 + 8) )
      {
        *(_DWORD *)(v9 + 48) = 0;
        EtwpCovSampLookasideGrow(a1, v9);
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != (_QWORD *)(a1 + 944) );
  }
}
