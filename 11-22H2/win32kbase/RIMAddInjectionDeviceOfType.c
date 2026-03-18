/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C00063E0
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0005F38 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0195108 (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C00750D0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00850DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(__int64 a1, ULONG64 a2, unsigned int a3, _OWORD *a4, int a5, _QWORD *a6)
{
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // edi
  int v13; // r8d
  PVOID *v14; // r14
  char *v15; // r13
  int v16; // edx
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  int v21; // ecx
  WCHAR *v22; // rax
  unsigned __int64 v23; // rdi
  ULONG64 v24; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v25; // r14
  int v26; // edx
  __int64 Pool2; // rax
  WCHAR *v28; // rdi
  WCHAR *v29; // rax
  __int64 v30; // r10
  char v31; // r15
  PDEVICE_OBJECT v32; // rcx
  _UNKNOWN **v33; // r8
  __int16 v34; // ax
  _UNKNOWN **v35; // r8
  _UNKNOWN **v36; // r8
  _BYTE v37[4]; // [rsp+50h] [rbp-238h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-234h]
  int v39; // [rsp+58h] [rbp-230h]
  __int64 v40; // [rsp+60h] [rbp-228h] BYREF
  WCHAR *v41; // [rsp+68h] [rbp-220h]
  unsigned int v42; // [rsp+70h] [rbp-218h] BYREF
  PVOID Object; // [rsp+78h] [rbp-210h] BYREF
  int v44; // [rsp+80h] [rbp-208h]
  __int64 v45; // [rsp+88h] [rbp-200h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-1F0h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-1E8h] BYREF
  unsigned __int64 v49; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-1D0h]
  _QWORD *v51; // [rsp+C0h] [rbp-1C8h]
  WCHAR *v52; // [rsp+C8h] [rbp-1C0h]
  __int64 v53; // [rsp+D0h] [rbp-1B8h]
  __int64 v54; // [rsp+D8h] [rbp-1B0h]
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-1A8h] BYREF
  _QWORD v56[4]; // [rsp+F0h] [rbp-198h] BYREF
  PVOID BackTrace[20]; // [rsp+110h] [rbp-178h] BYREF
  __int64 v58[18]; // [rsp+1B0h] [rbp-D8h] BYREF

  v38 = a3;
  LODWORD(v40) = a3;
  v50 = (__int64)a6;
  v54 = (__int64)a6;
  v51 = a6;
  v53 = (__int64)a6;
  Object = 0LL;
  memset(v58, 0, sizeof(v58));
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      40,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  if ( a4 )
  {
    v12 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
    v39 = v12;
    if ( v12 < 0 )
    {
      v12 = -1073741816;
LABEL_26:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v13,
          (_DWORD)gRimLog,
          4,
          1,
          46,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
          v12);
      }
      return (unsigned int)v12;
    }
    v14 = (PVOID *)Object;
    v15 = (char *)Object + 104;
    RIMLockExclusive((char *)Object + 104);
    if ( *((_BYTE *)v14 + 81) )
    {
      if ( !*((_BYTE *)v14 + 82) )
      {
        v12 = -1073741637;
        v32 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v16) = 0;
        }
        v33 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v34 = 45;
        goto LABEL_99;
      }
    }
    else if ( !*((_BYTE *)v14 + 82) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v38) & *((_DWORD *)v14 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = (struct _UNICODE_STRING *)a2;
          *(_OWORD *)v58 = *a4;
          *(_OWORD *)&v58[2] = a4[1];
          *(_OWORD *)&v58[4] = a4[2];
          *(_OWORD *)&v58[6] = a4[3];
          *(_OWORD *)&v58[8] = a4[4];
          *(_OWORD *)&v58[10] = a4[5];
          *(_OWORD *)&v58[12] = a4[6];
          *(_OWORD *)&v58[14] = a4[7];
          *(_OWORD *)&v58[16] = a4[8];
          v17 = (_QWORD *)v50;
LABEL_14:
          if ( v12 >= 0 )
          {
            v40 = 0LL;
            v12 = RIMCreateDev(v14, 1, (__int64)v58, (__int64)&v40);
            v39 = v12;
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                if ( (unsigned __int64)v17 >= MmUserProbeAddress )
                  v17 = (_QWORD *)MmUserProbeAddress;
                *v17 = *(_QWORD *)(v40 + 16);
                v18 = v40;
              }
              else
              {
                v18 = v40;
                if ( (v58[1] & 0x400000000LL) != 0 )
                  v19 = *(_QWORD *)(v40 + 24);
                else
                  v19 = *(_QWORD *)(v40 + 16);
                *v51 = v19;
              }
              if ( v14[104] || *((_DWORD *)v14 + 264) )
                *(_DWORD *)(v18 + 184) |= 0x80000u;
            }
          }
          if ( DestinationString.Buffer )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, DestinationString.Buffer);
          goto LABEL_25;
        }
        if ( a2 >= MmUserProbeAddress )
          a2 = MmUserProbeAddress;
        v21 = *(_DWORD *)a2;
        v44 = v21;
        *(_DWORD *)&SourceString.Length = v21;
        v22 = *(WCHAR **)(a2 + 8);
        SourceString.Buffer = v22;
        if ( ((unsigned __int8)v22 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = (unsigned __int16)v21;
        v24 = (ULONG64)v22 + (unsigned __int16)v21 + 2;
        if ( v24 <= (unsigned __int64)v22 || v24 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v21 > HIWORD(v44) )
        {
          if ( (v21 & 1) == 0 )
            goto LABEL_85;
        }
        else if ( (v21 & 1) == 0 )
        {
          DestinationString.MaximumLength = v21;
          DestinationString.Length = v21;
          v42 = 1886221394;
          v45 = 260LL;
          v25 = gpLeakTrackingAllocator;
          v56[2] = &v45;
          v56[3] = &v42;
          v49 = (unsigned __int16)v21;
          v26 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned __int16)v21, 1886221394LL);
            v28 = (WCHAR *)Pool2;
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v25 + 14);
            goto LABEL_56;
          }
          if ( v26 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
              && v23 + 16 >= v23 )
            {
              v29 = (WCHAR *)ExAllocatePool2(v45 & 0xFFFFFFFFFFFFFFFDuLL, v23 + 16, v42);
              v28 = v29;
              if ( v29 )
                _InterlockedIncrement64((volatile signed __int64 *)v25 + 14);
              v52 = v29;
              if ( !v29 || (*(_QWORD *)v29 = 1886221394LL, v28 = v29 + 8, v52 = v29 + 8, v29 == (WCHAR *)-16LL) )
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v25 + 1),
                  (const void *)0x706D7452);
              goto LABEL_65;
            }
LABEL_78:
            v41 = 0LL;
            v28 = 0LL;
            goto LABEL_79;
          }
          if ( v26 != 2 )
            goto LABEL_78;
          v46 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7452u, &v46) )
          {
            v56[0] = &v45;
            v56[1] = &v42;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      v25,
                      v56,
                      &v49);
            v28 = (WCHAR *)Pool2;
LABEL_56:
            v41 = (WCHAR *)Pool2;
LABEL_79:
            DestinationString.Buffer = v28;
            if ( v28 )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
              v12 = v39;
            }
            else
            {
              v12 = -1073741801;
              v39 = -1073741801;
            }
            v14 = (PVOID *)Object;
            v17 = (_QWORD *)v50;
            goto LABEL_14;
          }
          v31 = 0;
          if ( v23 < 0x1000 || (v23 & 0xFFF) != 0 )
          {
            v31 = 1;
            v23 += 16LL;
            v49 = v23;
          }
          v28 = (WCHAR *)ExAllocatePool2(v30, v23, 1886221394LL);
          if ( !v28 )
            goto LABEL_78;
          _InterlockedIncrement64((volatile signed __int64 *)v25 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v31 && (unsigned __int64)((unsigned __int16)v28 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v25,
                                    v28,
                                    v46,
                                    BackTrace) )
            {
              v28 += 8;
LABEL_65:
              v41 = v28;
              goto LABEL_79;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v25,
                                       v28,
                                       v46,
                                       BackTrace) )
          {
            goto LABEL_65;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v25 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v28);
          goto LABEL_78;
        }
        v38 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1250LL);
LABEL_85:
        ExRaiseAccessViolation();
      }
      v12 = -1073741637;
      v32 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v33 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v34 = 42;
LABEL_99:
      WPP_RECORDER_AND_TRACE_SF_(
        v32->AttachedDevice,
        v16,
        (_DWORD)v33,
        (_DWORD)gRimLog,
        3,
        1,
        v34,
        (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
LABEL_25:
      v14[14] = 0LL;
      ExReleasePushLockExclusiveEx(v14 + 13, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v14);
      goto LABEL_26;
    }
    v14 = (PVOID *)Object;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)Object + 5) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v35 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          (_DWORD)v35,
          (_DWORD)gRimLog,
          3,
          1,
          43,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      v12 = -1073741637;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      v36 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          (_DWORD)v36,
          (_DWORD)gRimLog,
          3,
          1,
          44,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      }
      ++*((_DWORD *)v14 + 276);
      *((_QWORD *)v15 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v37);
      KeWaitForSingleObject(v14[137], UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v37);
      RIMLockExclusive(v15);
      v12 = -2147483631;
    }
    goto LABEL_25;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      3,
      1,
      41,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  return 3221225485LL;
}
