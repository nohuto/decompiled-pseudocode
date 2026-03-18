/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C01B6298
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C019E298 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01B6804 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // ebx
  __int64 v4; // r8
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 Pool2; // rsi
  __int64 v16; // r8
  PVOID v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int i; // ecx
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // esi
  _QWORD *v25; // rdx
  unsigned int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // r11
  _QWORD *v29; // r8
  char v30; // r15
  char v31; // r15
  __int64 v32; // rsi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-168h] BYREF
  PVOID v35[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(unsigned int *)(a1 + 768);
  v6 = a2;
  v7 = v4;
  if ( v2 != 7 )
    goto LABEL_5;
  if ( !(_DWORD)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v4);
    v7 = *(unsigned int *)(a1 + 768);
    v4 = v7;
    v2 = *(_DWORD *)(a1 + 24);
  }
  v8 = 1LL;
  if ( v2 != 7 )
LABEL_5:
    v8 = 0LL;
  v9 = v7 - 1;
  if ( !(_DWORD)v8 )
    v9 = v7;
  if ( (unsigned int)v7 > v9 + 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v8, v4);
    v7 = *(unsigned int *)(a1 + 768);
    v4 = v7;
  }
  if ( !(_DWORD)v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v8, v4);
    LODWORD(v7) = *(_DWORD *)(a1 + 768);
    LODWORD(v4) = v7;
  }
  v10 = 10;
  if ( (unsigned int)v7 <= 0xA )
    v10 = v7;
  *(_DWORD *)(a1 + 1000) = v10;
  v11 = gpLeakTrackingAllocator;
  v12 = 2840LL * (unsigned int)v4;
  *(_QWORD *)(a1 + 992) = 0LL;
  if ( (v6 & v11[10]) != v6 || (v13 = 0LL, !v11[11]) )
  {
LABEL_18:
    Pool2 = ExAllocatePool2(260LL, v12);
    goto LABEL_19;
  }
  while ( v11[v13] != v6 )
  {
    if ( ++v13 >= (unsigned __int64)(unsigned int)v11[11] )
      goto LABEL_18;
  }
  v30 = 0;
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v30 = 1;
    v12 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v12);
  if ( !Pool2 )
    goto LABEL_37;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v11,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_19;
    }
LABEL_43:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_37:
    Pool2 = 0LL;
    goto LABEL_19;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v11,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_43;
LABEL_19:
  *(_QWORD *)(a1 + 968) = Pool2;
  if ( !Pool2 )
  {
LABEL_56:
    RIMCmFreePointerDeviceContacts(a1, v14, v16);
    return (unsigned int)-1073741670;
  }
  v17 = gpLeakTrackingAllocator;
  v18 = 16LL * *(unsigned int *)(a1 + 1000);
  if ( (v6 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != v6 || (v19 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_24:
    v20 = ExAllocatePool2(260LL, v18);
    goto LABEL_25;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != v6 )
  {
    if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_24;
  }
  v31 = 0;
  if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
  {
    v31 = 1;
    v18 += 16LL;
  }
  v32 = ExAllocatePool2(260LL, v18);
  if ( !v32 )
  {
LABEL_55:
    *(_QWORD *)(a1 + 992) = 0LL;
    goto LABEL_56;
  }
  memset(v35, 0, sizeof(v35));
  RtlCaptureStackBackTrace(0, 0x14u, v35, 0LL);
  if ( !v31 || (unsigned __int64)(v32 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v17,
           v32,
           (struct NSInstrumentation::CBackTrace *)v35) )
    {
      *(_QWORD *)(a1 + 992) = v32;
      goto LABEL_26;
    }
    goto LABEL_54;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v17,
          (const void *)v32,
          (struct NSInstrumentation::CBackTrace *)v35) )
  {
LABEL_54:
    ExFreePoolWithTag((PVOID)v32, 0);
    goto LABEL_55;
  }
  v20 = v32 + 16;
LABEL_25:
  *(_QWORD *)(a1 + 992) = v20;
  if ( !v20 )
    goto LABEL_56;
LABEL_26:
  for ( i = 0; i < *(_DWORD *)(a1 + 1000); *v23 = v23 )
  {
    v22 = i++;
    v23 = (_QWORD *)(*(_QWORD *)(a1 + 992) + 16 * v22);
    v23[1] = v23;
  }
  v24 = *(_DWORD *)(a1 + 768);
  v25 = (_QWORD *)(a1 + 976);
  *(_QWORD *)(a1 + 984) = a1 + 976;
  *(_QWORD *)(a1 + 976) = a1 + 976;
  v26 = *(_DWORD *)(a1 + 24) == 7;
  if ( v26 < v24 )
  {
    v27 = a1 + 976;
    v28 = a1 + 976;
    while ( 1 )
    {
      v29 = (_QWORD *)(2840LL * v26 + *(_QWORD *)(a1 + 968) + 16LL);
      if ( v28 != v27 )
        __fastfail(3u);
      *v29 = v27;
      ++v26;
      v29[1] = v25;
      *v25 = v29;
      *(_QWORD *)(a1 + 984) = v29;
      if ( v26 >= v24 )
        break;
      v28 = *v29;
      v25 = v29;
    }
  }
  return v3;
}
