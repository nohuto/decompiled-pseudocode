/*
 * XREFs of UsbHwFrameCountTimestamp @ 0x1C0001010
 * Callers:
 *     USBHwGetClockRatio @ 0x1C0001B30 (USBHwGetClockRatio.c)
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x1C0002170 (USBMidiInGetCurrentTime.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbHwFrameCountTimestamp(__int64 a1, DWORD *a2, unsigned __int64 *a3)
{
  char v4; // r14
  DWORD LowPart; // r13d
  __int64 CurrentTime; // r12
  KSPIN_LOCK *v7; // rbp
  KIRQL v8; // al
  __int64 v9; // rbx
  KIRQL v10; // si
  __int64 v11; // rcx
  int v12; // edi
  LARGE_INTEGER v13; // rax
  _LARGE_INTEGER v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  LARGE_INTEGER v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF
  DWORD *v23; // [rsp+88h] [rbp+10h]
  unsigned __int64 *v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v24 = a3;
  v23 = a2;
  v4 = 0;
  LowPart = 0;
  CurrentTime = USBMidiInGetCurrentTime();
  v7 = (KSPIN_LOCK *)(a1 + 112);
  v21 = *(_QWORD *)(a1 + 16);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  v9 = v21;
  v10 = v8;
  v25 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 72LL) + 56LL);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(v11 + 40))(*(_QWORD *)(v11 + 8), &v25);
    if ( v12 >= 0 )
    {
      while ( !v4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v14 = PerformanceFrequency;
        PerformanceFrequency.LowPart = 0;
        v15 = ((10000000 * HIDWORD(v13.QuadPart) / (unsigned __int64)v14.QuadPart) << 32)
            + (10000000LL * v13.LowPart + ((10000000 * HIDWORD(v13.QuadPart) % (unsigned __int64)v14.QuadPart) << 32))
            / v14.QuadPart;
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 72LL) + 56LL);
        if ( v16 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, _LARGE_INTEGER *))(v16 + 40))(
                  *(_QWORD *)(v16 + 8),
                  &PerformanceFrequency);
          if ( v12 >= 0 )
            LowPart = PerformanceFrequency.LowPart;
        }
        else
        {
          v12 = -1073741637;
        }
        PerformanceFrequency.QuadPart = 0LL;
        v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v18 = ((10000000 * HIDWORD(v17.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
            + (10000000LL * v17.LowPart
             + ((10000000 * HIDWORD(v17.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
            / PerformanceFrequency.QuadPart;
        KeReleaseSpinLock(v7, v10);
        if ( LowPart == v25 )
        {
          if ( v18 - CurrentTime > 0x5208 )
          {
            v12 = -1073741275;
            v10 = KeAcquireSpinLockRaiseToDpc(v7);
            break;
          }
        }
        else
        {
          v12 = -1073741275;
          if ( LowPart == v25 + 1 && v18 - CurrentTime < 0x2904 && v18 - v15 < 0x7D0 )
          {
            v12 = 0;
            v20 = v24;
            v4 = 1;
            *v23 = LowPart;
            *v20 = (v18 + v15) >> 1;
          }
        }
        v10 = KeAcquireSpinLockRaiseToDpc(v7);
        if ( v12 < 0 )
          break;
        v9 = v21;
      }
    }
  }
  else
  {
    v12 = -1073741637;
  }
  KeReleaseSpinLock(v7, v10);
  return (unsigned int)v12;
}
