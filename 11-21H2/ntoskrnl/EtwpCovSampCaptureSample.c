/*
 * XREFs of EtwpCovSampCaptureSample @ 0x140636520
 * Callers:
 *     EtwpCovSampProfileInterrupt @ 0x140636860 (EtwpCovSampProfileInterrupt.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140636DE4 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCoverageSamplerPageFault @ 0x140636FAC (EtwpCoverageSamplerPageFault.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1406371D4 (EtwpCoverageSamplerReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x140460BA4 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140460BDC (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140460F1A (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140636208 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140883A50 (EtwpCovSampCaptureUserAddresses.c)
 */

char __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  BOOL v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140C15D88;
  v13 = 0;
  v7 = ((unsigned int)*(_QWORD *)(qword_140C15D88 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v8, v7);
  v9 = ((unsigned int)*(_QWORD *)(qword_140C15D88 + 8) >> 4) & 0x1FF;
  v14 = v8;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2) + 8LL * (v7 ^ (1 << v8)) + 8);
  if ( *(_DWORD *)(v10 + 8 * v9 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8 * v9 + 304));
  }
  else
  {
    LOBYTE(v10) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v10 = EtwpCovSampCaptureBufferGet(qword_140C15D88);
      v4 = v10;
      if ( v10 )
      {
        EtwpCovSampCaptureBufferAddIP(v10, a1);
        if ( !*(_DWORD *)(v5 + 1036) )
          EtwpCovSampCaptureKernelStack(v11, a2);
        LOBYTE(v10) = EtwpCovSampCaptureBufferQueue(v5, v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      LODWORD(v10) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      if ( (v10 & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          LODWORD(v10) = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)v10 && !CurrentThread->SuspendCount )
          {
            LODWORD(v10) = EtwpCovSampSafeForUserAddressCapture(0, &v13);
            if ( (int)v10 >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
              {
                LOBYTE(v10) = EtwpCovSampCaptureUserAddresses(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
              }
            }
            else if ( !v13 )
            {
              LOBYTE(v10) = EtwpCovSampCaptureQueueApc(a1);
            }
          }
        }
      }
    }
    if ( v4 )
      LOBYTE(v10) = EtwpCovSampCaptureReleaseToLookaside(v5, *(_QWORD *)(v4 + 48), (struct _SLIST_ENTRY *)v4);
  }
  return v10;
}
