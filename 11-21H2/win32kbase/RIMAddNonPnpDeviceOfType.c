/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0181990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  unsigned int v6; // r12d
  struct _UNICODE_STRING *v7; // r14
  int v9; // edx
  int v10; // edi
  int v11; // r8d
  CDeviceIdentity **v12; // rsi
  int v13; // edx
  __int64 v14; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v16; // r8
  _BYTE **v17; // rax
  __int64 Length; // rdx
  PVOID v19; // rsi
  unsigned __int64 i; // rcx
  char v21; // r14
  __int64 Pool2; // rdi
  _QWORD *v23; // rdx
  PDEVICE_OBJECT v24; // rcx
  _UNKNOWN **v25; // r8
  __int16 v26; // ax
  int v28; // [rsp+50h] [rbp-168h]
  __int64 v29; // [rsp+58h] [rbp-160h] BYREF
  PVOID Object; // [rsp+60h] [rbp-158h] BYREF
  __int64 v31; // [rsp+68h] [rbp-150h]
  int v32; // [rsp+70h] [rbp-148h]
  int v33; // [rsp+78h] [rbp-140h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-138h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-130h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-118h]
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v40; // [rsp+D0h] [rbp-E8h]
  __int128 v41; // [rsp+E0h] [rbp-D8h]
  PVOID BackTrace[25]; // [rsp+F0h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a2;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      31,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v28 = v10;
  if ( v10 >= 0 )
  {
    v12 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v12) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v6) & *((_DWORD *)v12 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v7;
LABEL_47:
          if ( v10 >= 0 )
          {
            v29 = 0LL;
            v10 = RIMCreateDev(v12, v6, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v29);
            if ( v10 >= 0 )
            {
              *(_DWORD *)(v29 + 184) |= 1u;
              v10 = rimOnPnpArrived((__int64)v12, v29, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v10 >= 0 )
              {
                if ( a4 )
                {
                  v23 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v23 = (_QWORD *)MmUserProbeAddress;
                  *v23 = *(_QWORD *)(v29 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v29 + 16);
                }
              }
              if ( v10 < 0 )
                RIMFreeDev((__int64)v12, v29);
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (char *)DestinationString.Buffer);
          goto LABEL_59;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v14 = *(unsigned int *)&v7->Length;
        v32 = v14;
        *(_DWORD *)&SourceString.Length = v14;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)Buffer + (unsigned __int16)v14 + 2;
        v17 = (_BYTE **)MmUserProbeAddress;
        if ( v16 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v32) )
        {
          if ( (v14 & 1) != 0 )
            goto LABEL_23;
          if ( v16 > (unsigned __int64)Buffer )
            goto LABEL_25;
        }
        if ( (v14 & 1) == 0 )
        {
LABEL_24:
          **v17 = 0;
LABEL_25:
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          Length = SourceString.Length;
          v33 = 1886221394;
          v38 = 260LL;
          v19 = gpLeakTrackingAllocator;
          *(_QWORD *)&v41 = &v38;
          *((_QWORD *)&v41 + 1) = &v33;
          v36 = v41;
          v39 = SourceString.Length;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7452) != 0x706D7452 )
          {
LABEL_42:
            Pool2 = ExAllocatePool2(*(_QWORD *)v36 & 0xFFFFFFFFFFFFFFFDuLL, SourceString.Length);
            v31 = Pool2;
LABEL_43:
            DestinationString.Buffer = (PWSTR)Pool2;
            if ( Pool2 )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
              v10 = v28;
            }
            else
            {
              v10 = -1073741801;
            }
            v12 = (CDeviceIdentity **)Object;
            goto LABEL_47;
          }
          for ( i = 0LL; ; ++i )
          {
            v40 = i;
            if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_42;
            if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1886221394 )
              break;
          }
          v21 = 0;
          if ( SourceString.Length < 0x1000uLL || (SourceString.Length & 0xFFF) != 0 )
          {
            v21 = 1;
            Length = SourceString.Length + 16LL;
            v39 = Length;
          }
          Pool2 = ExAllocatePool2(*(_QWORD *)v36 & 0xFFFFFFFFFFFFFFFDuLL, Length);
          if ( Pool2 )
          {
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v19,
                     (const void *)Pool2,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_34;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v19,
                        Pool2,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_34;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          Pool2 = 0LL;
LABEL_34:
          v31 = Pool2;
          goto LABEL_43;
        }
LABEL_23:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, Buffer, v16);
        v17 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_24;
      }
      v10 = -1073741637;
      v24 = WPP_GLOBAL_Control;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v25 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_59:
        v12[14] = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 13, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v12);
        goto LABEL_77;
      }
      v26 = 32;
    }
    else
    {
      v10 = -1073741637;
      v24 = WPP_GLOBAL_Control;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v25 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_59;
      v26 = 33;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v24->AttachedDevice,
      v13,
      (_DWORD)v25,
      (_DWORD)gRimLog,
      3,
      1,
      v26,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    goto LABEL_59;
  }
LABEL_77:
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
