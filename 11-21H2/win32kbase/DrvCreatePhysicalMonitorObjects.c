/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00CF400
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00CF370 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C006A010 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006A058 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00CF6B8 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C016CF00 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        unsigned int a3,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        volatile void *Address)
{
  unsigned int v9; // r15d
  __int64 Pool2; // rsi
  signed int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r13
  __int64 i; // r12
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 j; // rdx
  PVOID v24; // rbx
  __int64 v25; // rdx
  char v26; // di
  __int64 k; // rdi
  __int64 v28; // rcx
  int v29; // eax
  int v30; // [rsp+30h] [rbp-108h]
  unsigned int v31; // [rsp+34h] [rbp-104h] BYREF
  int v32; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-FCh]
  struct tagGRAPHICS_DEVICE *v34; // [rsp+40h] [rbp-F8h] BYREF
  int v35; // [rsp+48h] [rbp-F0h]
  int v36; // [rsp+4Ch] [rbp-ECh]
  __int64 v37; // [rsp+50h] [rbp-E8h]
  int v38; // [rsp+58h] [rbp-E0h]
  __int64 v39; // [rsp+60h] [rbp-D8h]
  __int64 v40; // [rsp+68h] [rbp-D0h]
  PVOID BackTrace[20]; // [rsp+70h] [rbp-C8h] BYREF

  v39 = a5;
  WdLogSingleEntry4(4LL, a1, (int)a3);
  v9 = 0;
  v33 = 0;
  Pool2 = 0LL;
  UpdateMonitorDevices(0);
  v34 = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v34);
  v30 = DeviceFromNameAndValidateDevice;
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_31;
  v31 = 0;
  DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v34, &v31);
  v30 = DeviceFromNameAndValidateDevice;
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_31;
  if ( a5 < v31 )
  {
    DeviceFromNameAndValidateDevice = -1071774234;
LABEL_37:
    v30 = DeviceFromNameAndValidateDevice;
    goto LABEL_64;
  }
  v13 = 8LL * v31;
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = 8 * v31;
  DeviceFromNameAndValidateDevice = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v30 = DeviceFromNameAndValidateDevice;
  if ( v13 <= 0xFFFFFFFF )
  {
    if ( !v14 )
    {
LABEL_8:
      v37 = Pool2;
      if ( Pool2 )
      {
        v15 = 0LL;
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= *((_DWORD *)v12 + 54) )
          {
            v20 = 8 * v39;
            v21 = -1;
            if ( (unsigned __int64)(8 * v39) <= 0xFFFFFFFF )
              v21 = 8 * v39;
            DeviceFromNameAndValidateDevice = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
            v30 = DeviceFromNameAndValidateDevice;
            if ( v20 <= 0xFFFFFFFF )
            {
              ProbeForWrite(Address, v21, 8u);
              ProbeForWrite(a6, 4uLL, 4u);
              if ( v9 > a5 )
              {
                DeviceFromNameAndValidateDevice = -1071774234;
                v30 = -1071774234;
                v36 = -1071774234;
              }
              else
              {
                for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                {
                  v35 = j;
                  if ( (unsigned int)j >= v9 )
                    break;
                  *((_QWORD *)Address + j) = *(_QWORD *)(Pool2 + 8 * j);
                }
                *a6 = v9;
              }
            }
            goto LABEL_31;
          }
          v17 = 5 * i;
          v18 = *((_QWORD *)v12 + 28);
          if ( (*(_DWORD *)(v18 + 20 * i) & 1) != 0 )
            break;
LABEL_18:
          ;
        }
        if ( v9 == v31 )
          goto LABEL_36;
        if ( a3 )
        {
          if ( a3 != 1 )
          {
LABEL_36:
            DeviceFromNameAndValidateDevice = -1071774233;
            goto LABEL_37;
          }
          if ( qword_1C029B190 )
          {
            DeviceFromNameAndValidateDevice = qword_1C029B190(a3);
            v30 = DeviceFromNameAndValidateDevice;
          }
          else
          {
            DeviceFromNameAndValidateDevice = -1073741637;
            v30 = -1073741637;
          }
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_64;
          if ( qword_1C029B198 )
          {
            DeviceFromNameAndValidateDevice = qword_1C029B198(
                                                v18 + 4 * (v17 + 2),
                                                *(unsigned int *)(v18 + 20 * i + 4),
                                                Pool2 + 8 * v15);
            v30 = DeviceFromNameAndValidateDevice;
          }
          else
          {
            DeviceFromNameAndValidateDevice = -1073741637;
            v30 = -1073741637;
          }
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_64;
        }
        else
        {
          v32 = 0;
          DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                              a4,
                                              (struct _LUID *)(v18 + 4 * (v17 + 2)),
                                              *(_DWORD *)(v18 + 20 * i + 4),
                                              (void **)(Pool2 + 8 * v15),
                                              &v32);
          v30 = DeviceFromNameAndValidateDevice;
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_31;
          if ( v32 )
            goto LABEL_17;
        }
        v15 = (unsigned int)(v15 + 1);
        v33 = ++v9;
LABEL_17:
        v12 = v34;
        goto LABEL_18;
      }
      DeviceFromNameAndValidateDevice = -1073741801;
      goto LABEL_37;
    }
    v38 = 1986291527;
    v40 = 260LL;
    v24 = gpLeakTrackingAllocator;
    v25 = v14;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) != 0x76646747
      || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_40:
      Pool2 = ExAllocatePool2(260LL, v14);
LABEL_41:
      v12 = v34;
      goto LABEL_8;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1986291527 )
    {
      if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_40;
    }
    v26 = 0;
    if ( v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
    {
      v26 = 1;
      v25 = v14 + 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v25);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v26 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v24,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_41;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v24,
                                   Pool2,
                                   BackTrace) )
      {
        goto LABEL_41;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
    goto LABEL_41;
  }
LABEL_31:
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    if ( Pool2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
LABEL_64:
  if ( Pool2 )
  {
    if ( v9 )
    {
      for ( k = 0LL; (unsigned int)k < v9; k = (unsigned int)(k + 1) )
      {
        OPMDestroyProtectedOutput(*(void **)(Pool2 + 8 * k));
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v29 = qword_1C029B1A0 ? qword_1C029B1A0(v28) : -1073741637;
            if ( v29 >= 0 && qword_1C029B1A8 )
              qword_1C029B1A8(*(_QWORD *)(Pool2 + 8 * k));
          }
        }
        else
        {
          OPMDestroyProtectedOutput(*(void **)(Pool2 + 8 * k));
        }
      }
      DeviceFromNameAndValidateDevice = v30;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  }
  WdLogSingleEntry1(5LL, DeviceFromNameAndValidateDevice);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
