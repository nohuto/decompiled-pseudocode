/*
 * XREFs of USBType1ChangePowerState @ 0x1C000A9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C00381D0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 */

__int64 __fastcall USBType1ChangePowerState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // ebx
  int v7; // edi
  __int64 v8; // r15
  char v9; // si
  int v10; // ebx
  int v11; // ebx
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v7 = -1073741584;
  v8 = *(_QWORD *)(v4 + 144);
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v10 = v5 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 || (unsigned int)(v11 - 1) <= 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
      *(_BYTE *)(v4 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), v12);
      v7 = USBHwDataPipeReset(a1);
      if ( v7 >= 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 144), v13, v14);
    }
    return (unsigned int)v7;
  }
  v7 = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v8 + 136), a3, a4);
  if ( v7 >= 0 )
  {
    v17 = *(_QWORD *)(v4 + 152);
    v18 = *(unsigned int *)(v4 + 104);
    if ( *(_BYTE *)(v17 + 96) )
      v18 = *(unsigned int *)(v17 + 856);
    v7 = USBType1SetSampleRate(a1, v18);
    if ( v7 < 0 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v15) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_31:
      v19 = &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids;
      LOBYTE(v19) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(v16->AttachedDevice, (_DWORD)v19, v15, v16->DeviceExtension);
    }
  }
  return (unsigned int)v7;
}
