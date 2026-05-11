/*
 * XREFs of USBHwGetClockRatio @ 0x1C0002BC4
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C00051A0 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C0005F20 (USBCaptureBytePosition.c)
 * Callees:
 *     UsbHwFrameCountTimestamp @ 0x1C0003148 (UsbHwFrameCountTimestamp.c)
 *     USBMidiInGetCurrentTime @ 0x1C00032B0 (USBMidiInGetCurrentTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_did @ 0x1C000330C (WPP_RECORDER_AND_TRACE_SF_did.c)
 */

__int64 __fastcall USBHwGetClockRatio(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  int v5; // r14d
  __int64 v6; // r15
  KSPIN_LOCK *v7; // rbx
  int v8; // r12d
  KIRQL v9; // bp
  char v10; // si
  int v11; // r8d
  PDEVICE_OBJECT *v12; // rdx
  int v13; // ebx
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  PDEVICE_OBJECT *v16; // rdx
  int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-58h]
  int v25; // [rsp+C0h] [rbp+8h] BYREF
  _OWORD *v26; // [rsp+C8h] [rbp+10h]
  _QWORD *v27; // [rsp+D0h] [rbp+18h]
  __int64 v28; // [rsp+D8h] [rbp+20h] BYREF

  v27 = a3;
  v26 = a2;
  v3 = *(_QWORD *)(a1 + 152);
  v5 = 0;
  v25 = 0;
  v6 = 0LL;
  v28 = 0LL;
  v7 = (KSPIN_LOCK *)(a1 + 112);
  *a3 = 0LL;
  v8 = 0;
  SpinLock = (PKSPIN_LOCK)(a1 + 112);
  *a2 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  v10 = 1;
  *(_BYTE *)(v3 + 12) = 1;
  if ( *(_DWORD *)(v3 + 24) )
  {
    if ( !*(_DWORD *)(v3 + 40) )
    {
      v15 = USBMidiInGetCurrentTime() - *(_QWORD *)(v3 + 32);
      v8 = -1073741275;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v9);
      if ( v15 > 0x7A120 )
      {
        v8 = UsbHwFrameCountTimestamp(a1, &v25, &v28);
        v16 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          v17 = 0;
          LOBYTE(v16) = 0;
        }
        else
        {
          LOBYTE(v16) = 1;
          v17 = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 0;
        }
        v5 = v25;
        v6 = v28;
        if ( (_BYTE)v16 || v10 )
        {
          LOBYTE(v17) = v10;
          WPP_RECORDER_AND_TRACE_SF_did(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v16,
            v17,
            WPP_GLOBAL_Control->DeviceExtension);
        }
      }
      v7 = (KSPIN_LOCK *)(a1 + 112);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
      if ( v8 >= 0 && v5 != *(_DWORD *)(v3 + 24) )
      {
        v18 = (v6 - *(_QWORD *)(v3 + 32)) / (unsigned __int64)(unsigned int)(v5 - *(_DWORD *)(v3 + 24));
        if ( v18 - 9500 <= 0x3E8 )
        {
          v19 = *(_QWORD *)(v3 + 16);
          *(_QWORD *)(v3 + 48) = v6;
          *(_DWORD *)(v3 + 40) = v5;
          if ( v19 )
            v18 = (v19 + v18) >> 1;
          *(_QWORD *)(v3 + 16) = v18;
        }
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v7, v9);
    v8 = UsbHwFrameCountTimestamp(a1, &v25, &v28);
    v12 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    v13 = v25;
    v14 = v28;
    if ( (_BYTE)v12 || v10 )
    {
      LOBYTE(v11) = v10;
      WPP_RECORDER_AND_TRACE_SF_did(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v12,
        v11,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
    if ( v8 >= 0 )
    {
      *(_DWORD *)(v3 + 24) = v13;
      *(_QWORD *)(v3 + 32) = v14;
    }
    v7 = SpinLock;
  }
  v20 = *(_QWORD *)(v3 + 16);
  if ( v20 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v21 = *(_OWORD *)(v3 + 24);
      *v27 = v20;
      *v26 = v21;
      if ( *(_QWORD *)(v3 + 48) )
      {
        if ( (unsigned __int64)(USBMidiInGetCurrentTime() - *(_QWORD *)(v3 + 48)) > 0xF4240 )
        {
          v22 = *(_OWORD *)(v3 + 40);
          *(_DWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0LL;
          *(_OWORD *)(v3 + 24) = v22;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 12) = 0;
  KeReleaseSpinLock(v7, v9);
  return (unsigned int)v8;
}
