/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01F2134
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00043A4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ConvertPointCoordinates @ 0x1C003C35C (ConvertPointCoordinates.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D14C4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01F2030 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  unsigned int v2; // eax
  PVOID v3; // rbx
  __int64 v4; // rax
  __int64 Pool2; // rdi
  PVOID v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  unsigned int *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rdx
  CTouchProcessor *v20; // rcx
  char v21; // si
  char v22; // r12
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int128 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  struct tagRECT v28; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v29; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v31[20]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v32; // [rsp+1F0h] [rbp+F0h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  v2 = *a1 - 1;
  v26 = 0LL;
  v24 = 0LL;
  if ( v2 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_55;
  if ( !HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_55:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A747355) == 0x7A747355
    && (v4 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 2054452053 )
    {
      if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_11;
    }
    Pool2 = ExAllocatePool2(261LL, 256LL);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v3,
               (const void *)Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_12;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v3,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_12;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
  }
  else
  {
LABEL_11:
    Pool2 = ExAllocatePool2(261LL, 240LL);
  }
LABEL_12:
  v6 = gpLeakTrackingAllocator;
  v7 = 192LL * *a1;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A747355) == 0x7A747355
    && (v8 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 2054452053 )
    {
      if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_16;
    }
    v22 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v22 = 1;
      v7 += 16LL;
    }
    v9 = ExAllocatePool2(261LL, v7);
    if ( v9 )
    {
      memset(v31, 0, sizeof(v31));
      RtlCaptureStackBackTrace(0, 0x14u, v31, 0LL);
      if ( v22 && (unsigned __int64)(v9 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v6,
               (const void *)v9,
               (struct NSInstrumentation::CBackTrace *)v31) )
        {
          v9 += 16LL;
          goto LABEL_17;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v6,
                  v9,
                  (struct NSInstrumentation::CBackTrace *)v31) )
      {
        goto LABEL_17;
      }
      ExFreePoolWithTag((PVOID)v9, 0);
    }
    v9 = 0LL;
  }
  else
  {
LABEL_16:
    v9 = ExAllocatePool2(261LL, v7);
  }
LABEL_17:
  if ( Pool2 && v9 )
  {
    *(_QWORD *)(Pool2 + 232) = v9;
    v10 = 0LL;
    *(_QWORD *)(Pool2 + 32) = TouchExtensibility::ghInjectionDevice;
    *(_DWORD *)(Pool2 + 192) = 1;
    v11 = *((_QWORD *)a1 + 12);
    *(_DWORD *)(Pool2 + 28) = 0;
    *(_QWORD *)(Pool2 + 48) = v11;
    *(_DWORD *)(Pool2 + 24) = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v32 = 0LL;
        v12 = 18 * v10;
        v13 = 192 * v10;
        v14 = &a1[36 * v10];
        v15 = (_OWORD *)(192 * v10 + v9);
        v15[1] = *((_OWORD *)v14 + 1);
        v15[2] = *((_OWORD *)v14 + 2);
        v15[3] = *((_OWORD *)v14 + 3);
        v15[4] = *((_OWORD *)v14 + 4);
        v15[5] = *((_OWORD *)v14 + 5);
        v15[6] = *((_OWORD *)v14 + 6);
        v15[7] = *((_OWORD *)v14 + 7);
        v15[8] = *((_OWORD *)v14 + 8);
        v15[9] = *((_OWORD *)v14 + 9);
        v16 = *((_QWORD *)v14 + 8);
        *(_QWORD *)(192 * v10 + v9 + 48) = v16;
        v28 = TouchExtensibility::rcHimetricRect;
        v29 = TouchExtensibility::rcLogicalRect;
        if ( !(unsigned int)ConvertPointCoordinates(v16, &v29.left, &v28.left, &v32) )
          break;
        v17 = v32;
        v10 = (unsigned int)(v10 + 1);
        *(_QWORD *)(v13 + v9 + 56) = v32;
        *(_QWORD *)(v13 + v9 + 72) = v17;
        *(_QWORD *)(v13 + v9 + 32) = *(_QWORD *)(Pool2 + 32);
        *(_DWORD *)(v13 + v9 + 80) = a1[2 * v12 + 20];
        *(_QWORD *)(v13 + v9 + 96) = *(_QWORD *)&a1[2 * v12 + 24];
        LOWORD(v17) = a1[2 * v12 + 5];
        *(_DWORD *)(v13 + v9 + 20) = 0;
        *(_WORD *)(v13 + v9 + 8) = v17;
        if ( (unsigned int)v10 >= *a1 )
          goto LABEL_22;
      }
      v21 = 0;
    }
    else
    {
LABEL_22:
      if ( qword_1C029BD10 )
      {
        qword_1C029BD10(Pool2, &v26, Win32FreePool);
        if ( qword_1C029BD10 )
          qword_1C029BD10(v9, &v24, Win32FreePool);
      }
      v18 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
      InputTraceLogging::RIM::InjectInput(v18);
      CTouchProcessor::ProcessInjectedInput(v20, v19, (struct RIMCOMPLETEFRAME *)Pool2, a1[1] != 0, a1[3], a1[2] != 0);
      v21 = 1;
      if ( qword_1C029BD20 )
      {
        qword_1C029BD20(&v24);
        if ( qword_1C029BD20 )
          qword_1C029BD20(&v26);
      }
    }
    goto LABEL_48;
  }
  v21 = 0;
  if ( Pool2 )
LABEL_48:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( v9 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v9);
  return v21;
}
