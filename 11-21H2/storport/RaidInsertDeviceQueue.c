/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C000ACB0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0009628 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000B654 (RiGetEnqueueReason.c)
 *     RiEnqueueDeviceQueue @ 0x1C000B74C (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C003DD94 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 */

char __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  char v11; // cl
  char v13; // r8
  char v14; // dl
  char v15; // r8
  char v16; // dl
  char v17; // r8
  char v18; // r8
  KIRQL v19; // r8
  char v20; // al
  char result; // al
  LARGE_INTEGER v22; // rbx
  char v23; // r15
  bool v24; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  KIRQL v26; // r11
  int EnqueueReason; // r14d
  KIRQL v28; // r11
  __int64 v29; // rax
  __int128 v30; // [rsp+58h] [rbp-50h] BYREF

  v8 = a2 + 120;
  v11 = *(_BYTE *)(a2 + 142);
  v24 = (a3 & 2) == 0;
  v13 = v11 | 2;
  if ( v24 )
    v13 = v11 & 0xFD;
  v14 = v13 | 4;
  if ( (a3 & 4) == 0 )
    v14 = v13 & 0xFB;
  v15 = v14 | 1;
  if ( (a3 & 1) == 0 )
    v15 = v14 & 0xFE;
  v16 = v15 | 8;
  if ( (a3 & 8) == 0 )
    v16 = v15 & 0xF7;
  v17 = v16 | 0x20;
  v30 = 0LL;
  if ( (a3 & 0x10) == 0 )
    v17 = v16 & 0xDF;
  if ( (a3 & 0x20) != 0 )
    v18 = v17 | 0x40;
  else
    v18 = v17 & 0xBF;
  *(_BYTE *)(v8 + 22) = v18 ^ (v18 ^ (16 * a5)) & 0x10;
  v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( !*(_DWORD *)(a1 + 32)
    && *(_DWORD *)(a1 + 76) <= *(_DWORD *)(a1 + 4)
    && (!*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v8 + 22) & 4) != 0)
    && (!*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v8 + 22) & 2) != 0)
    && *(int *)(a1 + 28) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
      || (v29 = RiPeekDeviceQueue(a1), v8 == v29)
      || (*(_BYTE *)(v29 + 22) & 1) == 0
      || (*(_BYTE *)(v8 + 22) & 6) != 0 )
    {
      v20 = *(_BYTE *)(v8 + 22);
      if ( ((v20 & 1) == 0 || *(int *)(a1 + 76) < 1)
        && (!*(_BYTE *)(a1 + 39) || (v20 & 8) != 0)
        && (v20 & 0x10) == 0
        && (v20 & 0x40) == 0
        && (v20 & 1) == 0 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v19);
        result = 0;
        *(_BYTE *)(v8 + 20) = 0;
        return result;
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v19);
  v22.QuadPart = 0LL;
  v23 = 0;
  if ( byte_1C00799E2 < 0 )
  {
    IoGetActivityIdIrp(a2, &v30);
    v23 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( StorEtwLoggingEnabled )
  {
    v24 = UseQPCTime == 0;
    goto LABEL_32;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
      goto LABEL_57;
    v24 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_32:
    if ( !v24 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_34:
      v22 = PerformanceCounter;
      goto LABEL_35;
    }
LABEL_57:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_34;
  }
LABEL_35:
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  EnqueueReason = RiGetEnqueueReason(a1, v8, 0LL);
  if ( EnqueueReason )
  {
    RiEnqueueDeviceQueue(a1, v8);
    *(_BYTE *)(v8 + 20) = 1;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v28);
    *a6 = v22;
    *a7 = EnqueueReason;
    *a8 = *(_DWORD *)(a1 + 16);
    if ( byte_1C00799E2 < 0 )
      McTemplateK0pquuqqd_EtwWriteTransfer(
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
        (unsigned int)&v30,
        a1,
        v23,
        3,
        EnqueueReason,
        *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
        *(_DWORD *)(a1 + 76));
    return 1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
      *(_BYTE *)(a1 + 38) = 1;
    *(_BYTE *)(v8 + 20) = 0;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v26);
    return 0;
  }
}
