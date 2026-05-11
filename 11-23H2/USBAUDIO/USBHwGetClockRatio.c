/*
 * XREFs of USBHwGetClockRatio @ 0x1C0001B30
 * Callers:
 *     USBCaptureBytePosition @ 0x1C00012C0 (USBCaptureBytePosition.c)
 *     USBType1RenderBytePosition @ 0x1C0001600 (USBType1RenderBytePosition.c)
 * Callees:
 *     UsbHwFrameCountTimestamp @ 0x1C0001010 (UsbHwFrameCountTimestamp.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002170 (USBMidiInGetCurrentTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_did @ 0x1C000A55C (WPP_RECORDER_AND_TRACE_SF_did.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBHwGetClockRatio(_QWORD *a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  _QWORD *QuadPart; // r12
  _OWORD *v7; // r13
  int v8; // r14d
  KIRQL v9; // al
  KIRQL v10; // si
  __int128 *v11; // r12
  __int128 *v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  LARGE_INTEGER v15; // rax
  __int128 v17; // xmm0
  unsigned __int64 v18; // rbx
  char v19; // r15
  int v20; // r13d
  __int64 CurrentTime; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  KIRQL v24; // al
  __int64 v25; // rcx
  KIRQL v26; // si
  __int64 v27; // rcx
  int v28; // edi
  LARGE_INTEGER v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rcx
  LARGE_INTEGER v32; // rax
  unsigned __int64 v33; // rbx
  int v34; // r8d
  PDEVICE_OBJECT *v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // r8d
  PDEVICE_OBJECT *v40; // rdx
  DWORD v41; // ebx
  unsigned __int64 v42; // rdi
  int v43; // [rsp+60h] [rbp-88h] BYREF
  int v44; // [rsp+64h] [rbp-84h]
  unsigned __int64 v45; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-78h]
  union _LARGE_INTEGER v47; // [rsp+78h] [rbp-70h] BYREF
  union _LARGE_INTEGER v48; // [rsp+80h] [rbp-68h] BYREF
  __int64 v49; // [rsp+88h] [rbp-60h]
  __int64 v50; // [rsp+90h] [rbp-58h]
  __int128 *v51; // [rsp+98h] [rbp-50h]
  int v52; // [rsp+F0h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+100h] [rbp+18h] BYREF
  DWORD v55; // [rsp+108h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = (LONGLONG)a3;
  v4 = a1 + 14;
  v50 = a1[19];
  v3 = v50;
  v52 = 0;
  v55 = 0;
  v46 = 0LL;
  v45 = 0LL;
  QuadPart = a3;
  *a3 = 0LL;
  v7 = a2;
  *a2 = 0LL;
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v10 = v9;
  *(_BYTE *)(v3 + 12) = 1;
  if ( *(_DWORD *)(v3 + 24) )
  {
    v11 = (__int128 *)(v3 + 40);
    v12 = (__int128 *)(v3 + 40);
    v51 = (__int128 *)(v3 + 40);
    if ( *(_DWORD *)(v3 + 40) )
      goto LABEL_3;
    v8 = -1073741275;
    v18 = USBMidiInGetCurrentTime() - *(_QWORD *)(v3 + 32);
    v44 = -1073741275;
    KeReleaseSpinLock(v4, v10);
    if ( v18 <= 0x7A120 )
    {
      v36 = v46;
    }
    else
    {
      v19 = 0;
      v20 = 0;
      CurrentTime = USBMidiInGetCurrentTime();
      v49 = a1[2];
      v22 = v49;
      v23 = CurrentTime;
      v24 = KeAcquireSpinLockRaiseToDpc(v4);
      v25 = *(_QWORD *)(v49 + 16);
      v26 = v24;
      v55 = 0;
      v27 = *(_QWORD *)(*(_QWORD *)(v25 + 72) + 56LL);
      if ( v27 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, DWORD *))(v27 + 40))(*(_QWORD *)(v27 + 8), &v55);
        if ( v28 >= 0 )
        {
          LODWORD(v45) = v55;
          while ( !v19 )
          {
            v47.QuadPart = 0LL;
            v29 = KeQueryPerformanceCounter(&v47);
            v43 = 0;
            v30 = ((10000000 * HIDWORD(v29.QuadPart) / (unsigned __int64)v47.QuadPart) << 32)
                + (10000000LL * v29.LowPart + ((10000000 * HIDWORD(v29.QuadPart) % (unsigned __int64)v47.QuadPart) << 32))
                / v47.QuadPart;
            v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 72LL) + 56LL);
            if ( v31 )
            {
              v28 = (*(__int64 (__fastcall **)(_QWORD, int *))(v31 + 40))(*(_QWORD *)(v31 + 8), &v43);
              if ( v28 >= 0 )
                v20 = v43;
            }
            else
            {
              v28 = -1073741637;
            }
            v48.QuadPart = 0LL;
            v32 = KeQueryPerformanceCounter(&v48);
            v33 = ((10000000 * HIDWORD(v32.QuadPart) / (unsigned __int64)v48.QuadPart) << 32)
                + (10000000LL * v32.LowPart + ((10000000 * HIDWORD(v32.QuadPart) % (unsigned __int64)v48.QuadPart) << 32))
                / v48.QuadPart;
            KeReleaseSpinLock(v4, v26);
            if ( v20 == (_DWORD)v45 )
            {
              if ( v33 - v23 > 0x5208 )
              {
                v28 = v44;
                v26 = KeAcquireSpinLockRaiseToDpc(v4);
                break;
              }
            }
            else
            {
              v28 = v44;
              if ( v20 == (_DWORD)v45 + 1 && v33 - v23 < 0x2904 && v33 - v30 < 0x7D0 )
              {
                v28 = 0;
                v52 = v20;
                v19 = 1;
                v46 = (v33 + v30) >> 1;
              }
            }
            v26 = KeAcquireSpinLockRaiseToDpc(v4);
            if ( v28 < 0 )
              break;
            v22 = v49;
          }
        }
      }
      else
      {
        v28 = -1073741637;
      }
      KeReleaseSpinLock(v4, v26);
      v8 = v28;
      v35 = &WPP_GLOBAL_Control;
      LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v34) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v35 || (_BYTE)v34 )
      {
        v36 = v46;
        WPP_RECORDER_AND_TRACE_SF_did(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v35,
          v34,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      else
      {
        v36 = v46;
      }
      v3 = v50;
      v11 = v51;
      v7 = a2;
    }
    v12 = v11;
    v10 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( v8 < 0
      || v52 == *(_DWORD *)(v3 + 24)
      || (v37 = (v36 - *(_QWORD *)(v3 + 32)) / (unsigned int)(v52 - *(_DWORD *)(v3 + 24)), v37 > 0x2904)
      || v37 < 0x251C )
    {
LABEL_3:
      QuadPart = (_QWORD *)PerformanceFrequency.QuadPart;
    }
    else
    {
      v38 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)v11 = v52;
      QuadPart = (_QWORD *)PerformanceFrequency.QuadPart;
      *(_QWORD *)(v3 + 48) = v36;
      if ( v38 )
        v37 = (v38 + v37) >> 1;
      *(_QWORD *)(v3 + 16) = v37;
    }
  }
  else
  {
    KeReleaseSpinLock(v4, v9);
    v8 = UsbHwFrameCountTimestamp((__int64)a1, &v55, &v45);
    v40 = &WPP_GLOBAL_Control;
    LOBYTE(v40) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v39) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    v41 = v55;
    v42 = v45;
    if ( (_BYTE)v40 || (_BYTE)v39 )
      WPP_RECORDER_AND_TRACE_SF_did(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v40,
        v39,
        WPP_GLOBAL_Control->DeviceExtension);
    v10 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( v8 >= 0 )
    {
      *(_DWORD *)(v3 + 24) = v41;
      *(_QWORD *)(v3 + 32) = v42;
    }
    v12 = (__int128 *)(v3 + 40);
  }
  v13 = *(_QWORD *)(v3 + 16);
  if ( v13 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v14 = *(_OWORD *)(v3 + 24);
      *QuadPart = v13;
      *v7 = v14;
      if ( *(_QWORD *)(v3 + 48) )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( ((10000000 * HIDWORD(v15.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
           + (10000000LL * v15.LowPart
            + ((10000000 * HIDWORD(v15.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
           / PerformanceFrequency.QuadPart
           - *(_QWORD *)(v3 + 48) > 0xF4240 )
        {
          v17 = *v12;
          *(_DWORD *)v12 = 0;
          *(_QWORD *)(v3 + 48) = 0LL;
          *(_OWORD *)(v3 + 24) = v17;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 12) = 0;
  KeReleaseSpinLock(v4, v10);
  return (unsigned int)v8;
}
