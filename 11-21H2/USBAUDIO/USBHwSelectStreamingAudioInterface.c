/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C0034900
 * Callers:
 *     USBType1ChangePowerState @ 0x1C0004640 (USBType1ChangePowerState.c)
 *     USBType1StateChangePin @ 0x1C0005490 (USBType1StateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00060B0 (USBCaptureChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     USBHwFreePipes @ 0x1C0033684 (USBHwFreePipes.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0035AA4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  char v5; // bp
  char v6; // si
  int v7; // ebx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // al
  __int64 EndpointDescriptor; // rax
  char v13; // dl
  int v14; // r12d
  __int64 Pool2; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // edx
  void *v25; // rcx
  char v26; // dl
  int v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+58h] [rbp-40h]
  _QWORD *v31; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v29 = v2;
  v5 = 0;
  v28 = *(_QWORD *)(v2 + 16);
  v6 = 1;
  v7 = -1073741808;
  v8 = *(_QWORD *)(v28 + 16);
  v9 = *(_QWORD **)(v8 + 72);
  v31 = v9;
  if ( *(_BYTE *)(v8 + 64) || *(_BYTE *)(v8 + 67) )
  {
    v7 = -1073741632;
    goto LABEL_45;
  }
  v10 = a2[4];
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      EndpointDescriptor = USBParseGetEndpointDescriptor(v9[5], a2, 0LL);
      if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
        v5 = 1;
    }
  }
  else
  {
    v5 = 1;
  }
  if ( *(_BYTE *)(v2 + 47) && !v5 )
    return USBHwSelectStreamingAudioInterfaceSideband(a1, a2);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v27,
      8u,
      0x26u,
      (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  v14 = (unsigned __int8)a2[4];
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * v14 + 56), 1096972357LL);
  if ( !Pool2 )
    goto LABEL_45;
  v16 = 0;
  v17 = v31[5];
  v18 = *(unsigned __int8 *)(v17 + 4);
  if ( *(_BYTE *)(v17 + 4) )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v31[2] + 16LL * v16) + 2LL) != a2[2] )
    {
      if ( ++v16 >= v18 )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    if ( v16 == v18 )
      goto LABEL_42;
  }
  v19 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(Pool2 + 34) = a2[2];
  *(_WORD *)(Pool2 + 32) = 24 * (v14 + 1);
  *(_BYTE *)(Pool2 + 35) = a2[3];
  if ( v5 )
  {
    if ( v14 )
      *(_DWORD *)(Pool2 + 72) = 0;
    goto LABEL_33;
  }
  v20 = *(_QWORD *)(v19 + 144);
  v21 = *(_DWORD *)(v20 + 216) & 0xF000;
  switch ( v21 )
  {
    case 0:
      goto LABEL_28;
    case 0x1000:
      *(_DWORD *)(Pool2 + 72) = 3872;
      break;
    case 0x2000:
LABEL_28:
      *(_DWORD *)(Pool2 + 72) = 500 * *(_DWORD *)(v20 + 220);
      if ( !*(_QWORD *)(v20 + 176) )
        *(_DWORD *)(Pool2 + 76) |= 8u;
      break;
  }
LABEL_33:
  *(_WORD *)Pool2 = 24 * v14 + 56;
  *(_WORD *)(Pool2 + 2) = 1;
  *(_QWORD *)(Pool2 + 24) = v31[3];
  v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v28 + 40), (PURB)Pool2, 0LL);
  if ( *(int *)(Pool2 + 4) >= 0 )
  {
    v7 = v22;
    if ( v22 >= 0 )
    {
      v23 = *(_QWORD *)(v19 + 152);
      if ( !v5 )
      {
        v24 = *(_DWORD *)(Pool2 + 48);
        *(_DWORD *)(v23 + 56) = v24;
        *(_QWORD *)(v23 + 64) = *(_QWORD *)(Pool2 + 64);
        if ( v24 > 0x14 )
        {
          v7 = -1073741438;
        }
        else
        {
          USBHwFreePipes(a1);
          v25 = (void *)ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v23 + 56), 1096972357LL);
          *(_QWORD *)(v23 + 72) = v25;
          if ( !v25 )
            v7 = -1073741670;
          if ( v7 >= 0 )
            memmove(v25, (const void *)(Pool2 + 56), 24LL * *(unsigned int *)(v23 + 56));
        }
      }
    }
  }
LABEL_42:
  ExFreePool((PVOID)Pool2);
  if ( v7 < 0 )
  {
LABEL_45:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v26 = 0;
    }
    if ( v26 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v26,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v27,
        8u,
        0x27u,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  }
  if ( v5 && *(_BYTE *)(v29 + 47) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v27,
        9u,
        0x28u,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  }
  return (unsigned int)v7;
}
