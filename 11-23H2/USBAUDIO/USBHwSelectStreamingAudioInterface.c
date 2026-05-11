/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C003850C
 * Callers:
 *     USBCaptureStateChangePin @ 0x1C0004610 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x1C0004AB0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C000A9A0 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x1C000B0D0 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBHwFreePipes @ 0x1C002A2A8 (USBHwFreePipes.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     IsZeroBWInterface @ 0x1C003898C (IsZeroBWInterface.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0038A60 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  char v3; // bp
  _BYTE *v4; // rsi
  int v6; // ebx
  char v7; // r15
  __int64 v8; // rax
  char v9; // al
  int v10; // edx
  int v11; // r12d
  __int64 Pool2; // rdi
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // r13
  int v17; // r14d
  __int64 v19; // rcx
  int v20; // eax
  void *v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  _QWORD *v28; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v26 = v2;
  v4 = a2;
  v6 = -1073741808;
  v25 = *(_QWORD *)(v2 + 16);
  v7 = 1;
  v8 = *(_QWORD *)(v25 + 16);
  if ( *(_BYTE *)(v8 + 64) || *(_BYTE *)(v8 + 67) )
  {
    v6 = -1073741632;
LABEL_50:
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    goto LABEL_16;
  }
  v28 = *(_QWORD **)(v8 + 72);
  v9 = IsZeroBWInterface(v28[5], a2);
  v3 = v9;
  if ( *(_BYTE *)(v2 + 47) && !v9 )
    return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)v4);
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  v11 = (unsigned __int8)v4[4];
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * v11 + 56), 1096972357LL);
  if ( !Pool2 )
    goto LABEL_50;
  v13 = 0;
  v14 = v28[5];
  v15 = *(unsigned __int8 *)(v14 + 4);
  if ( *(_BYTE *)(v14 + 4) )
  {
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(v28[2] + 16LL * v13) + 2LL) == v4[2] )
        break;
      ++v13;
    }
    while ( v13 < v15 );
  }
  if ( v13 != v15 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(Pool2 + 34) = v4[2];
    *(_WORD *)(Pool2 + 32) = 24 * (v11 + 1);
    *(_BYTE *)(Pool2 + 35) = v4[3];
    if ( v3 )
    {
      if ( v11 )
        *(_DWORD *)(Pool2 + 72) = 0;
    }
    else
    {
      v19 = *(_QWORD *)(v16 + 144);
      v20 = *(_DWORD *)(v19 + 216) & 0xF000;
      if ( v20 && v20 != 0x2000 )
      {
        if ( v20 == 4096 )
          *(_DWORD *)(Pool2 + 72) = 3872;
      }
      else
      {
        *(_DWORD *)(Pool2 + 72) = 500 * *(_DWORD *)(v19 + 220);
        if ( !*(_QWORD *)(v19 + 176) )
          *(_DWORD *)(Pool2 + 76) |= 8u;
      }
    }
    *(_WORD *)Pool2 = 24 * v11 + 56;
    *(_WORD *)(Pool2 + 2) = 1;
    *(_QWORD *)(Pool2 + 24) = v28[3];
    v17 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v25 + 40), (PURB)Pool2, 0LL);
    if ( *(int *)(Pool2 + 4) >= 0 )
    {
      v6 = v17;
      if ( v17 >= 0 )
      {
        v22 = *(_QWORD *)(v16 + 152);
        if ( !v3 )
        {
          v23 = *(_DWORD *)(Pool2 + 48);
          *(_DWORD *)(v22 + 56) = v23;
          *(_QWORD *)(v22 + 64) = *(_QWORD *)(Pool2 + 64);
          if ( v23 > 0x14 )
          {
            v6 = -1073741438;
          }
          else
          {
            USBHwFreePipes(a1);
            v24 = ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v22 + 56), 1096972357LL);
            *(_QWORD *)(v22 + 72) = v24;
            if ( !v24 )
              v6 = -1073741670;
            if ( v6 >= 0 )
              memmove(*(void **)(v22 + 72), (const void *)(Pool2 + 56), 24LL * *(unsigned int *)(v22 + 56));
          }
        }
      }
    }
  }
  ExFreePool((PVOID)Pool2);
  if ( v6 < 0 )
    goto LABEL_50;
LABEL_16:
  if ( v3 && *(_BYTE *)(v26 + 47) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = &WPP_7d0eb062dabd3bbfcf0e7e4187f7f511_Traceguids;
      LOBYTE(v21) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v21,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v6;
}
