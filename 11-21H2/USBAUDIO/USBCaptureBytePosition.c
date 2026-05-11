/*
 * XREFs of USBCaptureBytePosition @ 0x1C0005F20
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetClockRatio @ 0x1C0002BC4 (USBHwGetClockRatio.c)
 *     USBHwGetCurrentFrame @ 0x1C0002ED4 (USBHwGetCurrentFrame.c)
 *     USBCaptureAdjustPositionWithin1Ms @ 0x1C0005E30 (USBCaptureAdjustPositionWithin1Ms.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  int AvailableByteCount; // r15d
  KIRQL v7; // al
  KIRQL v8; // r13
  KIRQL v9; // al
  union _LARGE_INTEGER v10; // rcx
  union _LARGE_INTEGER v11; // r8
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // eax
  union _LARGE_INTEGER v15; // rax
  bool v16; // cc
  unsigned int v18[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+48h] BYREF
  LONG OutputBufferBytes; // [rsp+88h] [rbp+50h] BYREF
  LONG InputDataBytes; // [rsp+90h] [rbp+58h] BYREF
  __int64 v22; // [rsp+98h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v19 = 0;
  v22 = 0LL;
  v4 = *(_QWORD *)(Context + 152);
  v5 = 0LL;
  InputDataBytes = 0;
  OutputBufferBytes = 0;
  *(_OWORD *)v18 = 0LL;
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
  v8 = v7;
  if ( !*(_BYTE *)(v4 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v7);
    USBHwGetClockRatio(Context, v18, &v22);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
    v5 = v22;
    v8 = v9;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v10 = *(union _LARGE_INTEGER *)(Context + 80);
  a2[3] = v10;
  a2[2] = v10;
  if ( *(_BYTE *)(Context + 45) )
  {
    AvailableByteCount = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v19);
    if ( AvailableByteCount < 0 )
      goto LABEL_13;
    v11 = *(union _LARGE_INTEGER *)(Context + 88);
    v12 = v19;
    a2[2] = v11;
    v13 = *(unsigned int *)(v4 + 104);
    if ( v12 - v13 >= 0 )
    {
      v14 = *(_DWORD *)(v4 + 100);
      if ( v5 )
      {
        a2[2].QuadPart += USBCaptureAdjustPositionWithin1Ms(v13, v5, v18, v14);
        v11 = a2[2];
      }
      else
      {
        v11.QuadPart += v14 * ((_DWORD)v12 - (_DWORD)v13) / 0x3E8;
        a2[2] = v11;
      }
    }
    v15 = *(union _LARGE_INTEGER *)(Context + 96);
    v16 = v15.QuadPart <= (unsigned __int64)v11.QuadPart;
  }
  else
  {
    v15 = *(union _LARGE_INTEGER *)(Context + 96);
    v16 = v15.QuadPart <= (unsigned __int64)v10.QuadPart;
  }
  if ( !v16 )
    a2[2] = v15;
LABEL_13:
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v8);
  return (unsigned int)AvailableByteCount;
}
