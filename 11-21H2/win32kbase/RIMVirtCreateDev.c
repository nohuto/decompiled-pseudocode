/*
 * XREFs of RIMVirtCreateDev @ 0x1C017C948
 * Callers:
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01AAA30 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimCreateDev @ 0x1C0045360 (rimCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     rimDereferenceDev @ 0x1C00A12A0 (rimDereferenceDev.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C00A1600 (RIMLoadDeviceLegacyInfo.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00C1EA4 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C018C290 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01F0198 (FindRimDevByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        CDeviceIdentity **Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  int v6; // r12d
  char v8; // r13
  struct _UNICODE_STRING *Dev; // rbx
  PVOID v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  __int64 Pool2; // rdi
  __int64 v16; // r8
  char v17; // r12
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 RimDevByName; // rax
  _DWORD *v22; // r15
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdi
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // r9
  PVOID v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 HidDesc; // rax
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  PVOID v37; // r15
  char *v38; // rdi
  CDeviceIdentity *v39; // rcx
  CDeviceIdentity *v40; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  PVOID Objecta[2]; // [rsp+58h] [rbp-89h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-79h] BYREF
  int v47; // [rsp+150h] [rbp+6Fh]

  v47 = a4;
  v6 = a4;
  v8 = a2;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(Object, a2, a3);
  Dev = (struct _UNICODE_STRING *)rimCreateDev((__int64)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( !*(_QWORD *)(a3 + 8) )
    goto LABEL_32;
  v11 = gpLeakTrackingAllocator;
  v12 = *(unsigned __int16 *)(a3 + 2);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) == 0x70707352 )
  {
    v13 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1886417746 )
      {
        if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_9;
      }
      v17 = 0;
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v17 = 1;
        v12 += 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v12);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_20;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_20;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
LABEL_20:
      v6 = v47;
      goto LABEL_10;
    }
  }
LABEL_9:
  Pool2 = ExAllocatePool2(260LL, v12);
LABEL_10:
  Dev[13].Buffer = (PWSTR)Pool2;
  if ( !Pool2 )
  {
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v16,
        (_DWORD)gRimLog,
        2,
        1,
        29,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
        *(_QWORD *)(a3 + 8));
    goto LABEL_118;
  }
  Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
  RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
LABEL_32:
  v18 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  LODWORD(Dev[11].Buffer) = v18;
  if ( !v6 )
  {
    v28 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656B52) == 0x76656B52
      && (v29 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v29) != 1986358098 )
      {
        if ( ++v29 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_58;
      }
      v30 = ExAllocatePool2(68LL, 40LL);
      if ( v30 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(v30 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v28,
                 (const void *)v30,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v30 += 16LL;
            goto LABEL_59;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v28,
                    v30,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_59;
        }
        ExFreePoolWithTag((PVOID)v30, 0);
      }
      v30 = 0LL;
    }
    else
    {
LABEL_58:
      v30 = ExAllocatePool2(68LL, 24LL);
    }
LABEL_59:
    *(_QWORD *)&Dev[22].Length = v30;
    if ( v30 )
    {
      KeInitializeEvent((PRKEVENT)v30, SynchronizationEvent, 0);
      goto LABEL_61;
    }
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v24) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_118;
    v27 = 31;
LABEL_117:
    WPP_RECORDER_AND_TRACE_SF_(
      v26->AttachedDevice,
      v24,
      v16,
      (_DWORD)gRimLog,
      2,
      1,
      v27,
      (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
LABEL_118:
    *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
    RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev, v16);
    rimDereferenceDev((__int64)Dev, v42, v43, v44);
    return 3221225495LL;
  }
  v19 = v18 | 0x2000;
  LODWORD(Dev[11].Buffer) = v19;
  v20 = ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a5 + 24) << 14)) & 0x4000 ^ v19;
  LODWORD(Dev[11].Buffer) = v20;
  LODWORD(Dev[11].Buffer) = ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a5 + 28) << 15)) & 0x8000 ^ v20 | 0x20;
  LODWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1328);
  HIDWORD(Dev[24].Buffer) = *(_DWORD *)(a5 + 1332);
  *(_DWORD *)&Dev[25].Length = *(_DWORD *)(a5 + 1336);
  HIDWORD(Dev[82].Buffer) = *(_DWORD *)(a5 + 1340);
  RimDevByName = FindRimDevByName((PCUNICODE_STRING)(a5 + 1344));
  v22 = gpLeakTrackingAllocator;
  *(_QWORD *)&Dev[83].Length = RimDevByName;
  if ( (v22[10] & 0x76656B52) != 0x76656B52 || (v23 = 0LL, !v22[11]) )
  {
LABEL_37:
    v25 = ExAllocatePool2(68LL, 24LL);
    goto LABEL_38;
  }
  while ( v22[v23] != 1986358098 )
  {
    if ( ++v23 >= (unsigned __int64)(unsigned int)v22[11] )
      goto LABEL_37;
  }
  v25 = ExAllocatePool2(68LL, 40LL);
  if ( !v25 )
    goto LABEL_41;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(v25 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v22,
            (const void *)v25,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_44;
    v25 += 16LL;
  }
  else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v22,
               v25,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_44:
    ExFreePoolWithTag((PVOID)v25, 0);
LABEL_41:
    v25 = 0LL;
  }
LABEL_38:
  Dev[23].Buffer = (PWSTR)v25;
  if ( !v25 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v24) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_118;
    v27 = 30;
    goto LABEL_117;
  }
  KeInitializeEvent((PRKEVENT)v25, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x80000u;
LABEL_61:
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, a5);
    Dev[28].Buffer = (PWSTR)HidDesc;
    if ( !HidDesc )
    {
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v24) = 0;
      }
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_118;
      v27 = 32;
      goto LABEL_117;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    LOWORD(Dev[28].Buffer) = *(_WORD *)(a5 + 80);
    WORD1(Dev[28].Buffer) = *(_WORD *)(a5 + 84);
    WORD2(Dev[28].Buffer) = *(_WORD *)(a5 + 88);
    *(_DWORD *)&Dev[29].Length = *(_DWORD *)(a5 + 92);
    Dev[55].Length = *(_WORD *)(a5 + 96);
    Dev[55].MaximumLength = *(_WORD *)(a5 + 100);
    *(&Dev[55].MaximumLength + 1) = *(_WORD *)(a5 + 104);
    LODWORD(Dev[56].Buffer) ^= (LODWORD(Dev[56].Buffer) ^ *(_DWORD *)(a5 + 108)) & 1;
    if ( v6 )
    {
      Dev[55].Length = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v16) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v32) = 0;
        }
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v33,
            (_DWORD)gRimLog,
            3,
            1,
            33,
            (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse((__int64)Dev, Objecta, v33) )
      {
        v37 = Objecta[0];
        v38 = (char *)Objecta[0] + 88;
        if ( !Objecta[0] )
          v38 = 0LL;
        if ( v38[48] != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v38 + 57) + 40LL));
        ObfDereferenceObject(v37);
      }
      else
      {
        RIMLoadDeviceLegacyInfo((__int64)Dev, v34, v36);
      }
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 )
  {
    LOBYTE(Dev[28].Buffer) = *(_BYTE *)(a5 + 80);
    BYTE1(Dev[28].Buffer) = *(_BYTE *)(a5 + 84);
    WORD1(Dev[28].Buffer) = *(_WORD *)(a5 + 88);
    WORD2(Dev[28].Buffer) = *(_WORD *)(a5 + 92);
    HIWORD(Dev[28].Buffer) = *(_WORD *)(a5 + 96);
    Dev[29].Length = *(_WORD *)(a5 + 100);
    *(_DWORD *)(&Dev[29].MaximumLength + 1) = *(_DWORD *)(a5 + 104);
    LOWORD(Dev[29].Buffer) = *(_WORD *)(a5 + 108);
    WORD1(Dev[29].Buffer) = *(_WORD *)(a5 + 112);
    WORD2(Dev[29].Buffer) = *(_WORD *)(a5 + 116);
    HIWORD(Dev[29].Buffer) = *(_WORD *)(a5 + 120);
    Dev[30].Length = *(_WORD *)(a5 + 124);
    Dev[30].MaximumLength = *(_WORD *)(a5 + 128);
    *(_DWORD *)(&Dev[30].MaximumLength + 1) = *(_DWORD *)(a5 + 132);
    LODWORD(Dev[30].Buffer) = *(_DWORD *)(a5 + 136);
    HIDWORD(Dev[30].Buffer) ^= (HIDWORD(Dev[30].Buffer) ^ *(_DWORD *)(a5 + 140)) & 1;
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_118;
  *(_QWORD *)&Dev[21].Length = Object;
  v40 = Object[53];
  if ( v40 )
  {
    do
    {
      v39 = v40;
      v40 = (CDeviceIdentity *)*((_QWORD *)v40 + 5);
    }
    while ( v40 );
    *((_QWORD *)v39 + 5) = Dev;
  }
  else
  {
    Object[53] = (CDeviceIdentity *)Dev;
  }
  CDeviceIdentity::IssueIdentityOnDeviceArrival(v39, *(struct RawInputManagerDeviceObject **)&Dev[2].Length, v16);
  if ( !Object[108] || *((_DWORD *)Object + 272) || !v6 )
  {
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1LL);
    if ( !Object[108] && !*((_DWORD *)Object + 272) && v6 )
      rimDoRimDevChange((__int64)Object, (__int64)Dev, 2LL);
  }
  *a6 = Dev;
  return 0LL;
}
