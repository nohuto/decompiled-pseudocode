/*
 * XREFs of USBType1ChangePowerState @ 0x1C0004640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBType1SetSampleRate @ 0x1C003A3D0 (USBType1SetSampleRate.c)
 */

__int64 __fastcall USBType1ChangePowerState(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  __int64 v7; // r15
  char v8; // di
  char v9; // dl
  KIRQL v10; // al
  __int64 v11; // r8
  PDEVICE_OBJECT v12; // rcx
  char v13; // r8
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 16);
  v6 = -1073741584;
  v7 = *(_QWORD *)(v3 + 144);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      8u,
      0x1Bu,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  if ( a2 != 1 )
  {
    if ( (unsigned int)(a2 - 2) <= 2 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
      *(_BYTE *)(v3 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), v10);
      v6 = USBHwDataPipeReset(a1);
      if ( v6 >= 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v7 + 144), v11);
    }
    return (unsigned int)v6;
  }
  v6 = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v7 + 136), a3);
  if ( v6 >= 0 )
  {
    v15 = *(_QWORD *)(v3 + 152);
    v16 = *(unsigned int *)(v3 + 104);
    if ( *(_BYTE *)(v15 + 96) )
      v16 = *(unsigned int *)(v15 + 856);
    v6 = USBType1SetSampleRate(a1, v16);
    if ( v6 < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = 29;
        goto LABEL_31;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = 28;
LABEL_31:
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)v12->AttachedDevice,
        v8,
        v13,
        (__int64)v12->DeviceExtension,
        v18,
        8u,
        v14,
        (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
    }
  }
  return (unsigned int)v6;
}
