/*
 * XREFs of USBType1RenderBytePosition @ 0x1C00051A0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetClockRatio @ 0x1C0002BC4 (USBHwGetClockRatio.c)
 *     USBHwGetCurrentFrame @ 0x1C0002ED4 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C00032B0 (USBMidiInGetCurrentTime.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C000362C (USBType1AdjustPositionWithin1Ms.c)
 *     WPP_RECORDER_AND_TRACE_SF_di @ 0x1C0005A80 (WPP_RECORDER_AND_TRACE_SF_di.c)
 *     WPP_RECORDER_AND_TRACE_SF_id @ 0x1C0005B54 (WPP_RECORDER_AND_TRACE_SF_id.c)
 */

__int64 __fastcall USBType1RenderBytePosition(__int64 a1, union _LARGE_INTEGER *a2)
{
  int CurrentFrame; // r12d
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // al
  KIRQL v9; // r13
  KIRQL v10; // al
  int v11; // edx
  int v12; // r8d
  char v13; // si
  int v14; // ebp
  __int64 *i; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // edx
  unsigned __int64 v19; // r8
  union _LARGE_INTEGER v20; // rax
  union _LARGE_INTEGER v21; // rcx
  union _LARGE_INTEGER v22; // rdx
  _OWORD v24[4]; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h] BYREF

  v25 = 0;
  v26 = 0LL;
  CurrentFrame = 0;
  v4 = 0LL;
  v24[0] = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225860LL;
  v6 = *(_QWORD *)(v5 + 16);
  if ( !v6 )
    return 3221225860LL;
  v7 = *(_QWORD *)(v5 + 152);
  if ( !v7 )
    return 3221225860LL;
  a2[2].QuadPart = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
  v9 = v8;
  if ( !*(_BYTE *)(v7 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v8);
    USBHwGetClockRatio(v5, v24, &v26);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
    v4 = v26;
    v9 = v10;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  if ( *(_BYTE *)(v5 + 45) )
  {
    CurrentFrame = USBHwGetCurrentFrame(v6, &v25);
    if ( CurrentFrame >= 0 )
    {
      USBMidiInGetCurrentTime();
      v13 = 1;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v12) = 0;
      }
      v14 = v25;
      if ( (_BYTE)v11 || (_BYTE)v12 )
        WPP_RECORDER_AND_TRACE_SF_di(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
      for ( i = *(__int64 **)(v5 + 64); i != (__int64 *)(v5 + 64); i = (__int64 *)*i )
      {
        v16 = i[3];
        v17 = *(_DWORD *)(v16 + 128);
        if ( v17 )
        {
          if ( (unsigned int)(v14 - v17) < *(_DWORD *)(v16 + 132) )
          {
            a2[2].QuadPart += *(unsigned int *)(v16 + 12LL * (unsigned int)(v14 - v17) + 140);
            v19 = USBType1AdjustPositionWithin1Ms(v5, v4, (__int64)v24, v14) + a2[2].QuadPart;
            a2[2].QuadPart = v19;
            LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v13 = 0;
            }
            if ( (_BYTE)v18 || v13 )
            {
              LOBYTE(v19) = v13;
              WPP_RECORDER_AND_TRACE_SF_id(
                WPP_GLOBAL_Control->AttachedDevice,
                v18,
                v19,
                WPP_GLOBAL_Control->DeviceExtension);
            }
            break;
          }
          if ( (unsigned int)(v14 - v17) < 0x7FFFFFFF )
            a2[2].QuadPart += *((unsigned int *)i + 9);
        }
      }
      v20.QuadPart = a2[2].QuadPart + *(_QWORD *)(v5 + 88);
      a2[2] = v20;
      v21 = *(union _LARGE_INTEGER *)(v5 + 80);
      if ( v20.QuadPart > (unsigned __int64)v21.QuadPart
        || (v21 = *(union _LARGE_INTEGER *)(v5 + 96), v20.QuadPart < (unsigned __int64)v21.QuadPart) )
      {
        a2[2] = v21;
      }
    }
  }
  else
  {
    v22 = *(union _LARGE_INTEGER *)(v5 + 88);
    if ( v22.QuadPart <= *(_QWORD *)(v5 + 96) )
      v22 = *(union _LARGE_INTEGER *)(v5 + 96);
    a2[2] = v22;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(v5 + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v9);
  return (unsigned int)CurrentFrame;
}
