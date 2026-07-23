/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x140860054
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     RtlNumberOfSetBits @ 0x140293450 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x1402967D0 (RtlFindSetBits.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BDAC4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB0C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BDB60 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406D5DF0 (SeQuerySecurityDescriptorInfo.c)
 *     PsGetNextProcess @ 0x1407446C0 (PsGetNextProcess.c)
 *     EtwpMapEnableFlags @ 0x1407FC7A0 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408262CC (EtwpCheckSystemTraceAccess.c)
 *     EtwpGetPmcProfileSource @ 0x1409E6050 (EtwpGetPmcProfileSource.c)
 *     EtwpUMGLEnabled @ 0x1409E78B4 (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED3E4 (EtwpGetSoftRestartInformation.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3B34 (EtwpQueryCoverageSamplerInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  ULONG SetBits; // r15d
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  KPROCESSOR_MODE v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // r13
  unsigned int v14; // edx
  struct _KTHREAD *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rax
  unsigned int *p_SizeOfBitMap; // rcx
  char v20; // dl
  __int64 result; // rax
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  unsigned int *v24; // rax
  __int64 v25; // r13
  void *v26; // rbx
  ULONG v27; // ebx
  unsigned int v28; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v30; // rax
  _RTL_BITMAP *v31; // rsi
  unsigned int v32; // eax
  DWORD v33; // ebx
  ULONG v34; // r14d
  _DWORD *i; // r12
  unsigned int v36; // r14d
  unsigned int v38; // edx
  struct _KTHREAD *v39; // rax
  unsigned int *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // r13d
  unsigned int v44; // r14d
  struct _KPROCESS *j; // rcx
  __int64 *NextProcess; // rax
  struct _KPROCESS *v47; // rdi
  unsigned int ProcessId; // eax
  DWORD SecurityInformation; // [rsp+30h] [rbp-58h] BYREF
  __int64 v50; // [rsp+38h] [rbp-50h] BYREF
  int v51; // [rsp+40h] [rbp-48h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor[2]; // [rsp+48h] [rbp-40h] BYREF
  _RTL_BITMAP *v53; // [rsp+58h] [rbp-30h]
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v51 = *(_DWORD *)a1;
  v9 = v51;
  v13 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v51 > 18 )
  {
    if ( v51 != 25 )
      return (unsigned int)-1073741822;
    return (unsigned int)EtwpQueryCoverageSamplerInformation(a1);
  }
  if ( v51 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, v10, a4);
  if ( v51 <= 6 )
  {
    switch ( v51 )
    {
      case 6:
        v27 = 0;
        Length = 0;
        ObjectsSecurityDescriptor[0] = (PSECURITY_DESCRIPTOR)(a1 + 16);
        if ( a2 >= 0x10 )
        {
          v53 = *(_RTL_BITMAP **)(a1 + 8);
          v28 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v28 = *(unsigned __int8 *)(v13 + 4232);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v30 = EtwpAcquireLoggerContextByLoggerId(v13, v28, 1);
          v31 = (_RTL_BITMAP *)v30;
          ObjectsSecurityDescriptor[1] = v30;
          if ( v30 )
          {
            v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v30);
            if ( (v8 & 0x80000000) == 0 )
            {
              if ( (v31[51].SizeOfBitMap & 0x80u) != 0 )
              {
                v27 = RtlNumberOfSetBits(v31 + 62);
                Length = v27;
              }
              v53 = v31 + 62;
              v32 = 4 * v27 + 16;
              *a4 = v32;
              if ( v32 > a2 )
              {
                v8 = -1073741789;
              }
              else
              {
                v33 = 0;
                v34 = Length;
                for ( i = ObjectsSecurityDescriptor[0]; ; i[v33++] = SetBits )
                {
                  SecurityInformation = v33;
                  if ( v33 >= v34 )
                    break;
                  SetBits = RtlFindSetBits(v31 + 62, 1u, SetBits + 1);
                  LODWORD(v50) = SetBits;
                }
              }
            }
            p_SizeOfBitMap = &v31->SizeOfBitMap;
            goto LABEL_15;
          }
          goto LABEL_48;
        }
        return 3221225476LL;
      case 0:
        *v12 = 8;
        if ( a2 == 8 )
        {
          *(_DWORD *)(a1 + 4) = 85;
          return v8;
        }
        return 3221225476LL;
      case 1:
        *v12 = 48;
        if ( a2 == 48 )
        {
          v53 = *(_RTL_BITMAP **)(a1 + 8);
          v14 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v14 = *(unsigned __int8 *)(v13 + 4232);
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          v16 = EtwpAcquireLoggerContextByLoggerId(v13, v14, 1);
          v17 = v16;
          ObjectsSecurityDescriptor[0] = v16;
          if ( v16 )
          {
            if ( (v16[3] & 0x2000000) != 0 )
            {
              v18 = 32LL * *((unsigned __int8 *)v16 + 818);
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(v18 + v13 + 4284);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(v18 + v13 + 4300);
              EtwpMapEnableFlags(a1 + 16, 0);
LABEL_14:
              p_SizeOfBitMap = v17;
LABEL_15:
              v20 = 1;
LABEL_16:
              EtwpReleaseLoggerContext(p_SizeOfBitMap, v20);
LABEL_17:
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              return v8;
            }
            EtwpReleaseLoggerContext(v16, 1);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return 3221225485LL;
          }
LABEL_48:
          v8 = -1073741162;
          goto LABEL_17;
        }
        return 3221225476LL;
      case 2:
        *v12 = 16;
        if ( a2 == 16 )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 4136LL);
          return v8;
        }
        return 3221225476LL;
      case 3:
        *v12 = 8;
        if ( a2 == 8 )
        {
          *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
          return v8;
        }
        return 3221225476LL;
      case 4:
        *v12 = 24;
        if ( a2 >= 0x18 )
        {
          v53 = *(_RTL_BITMAP **)(a1 + 8);
          SecurityInformation = *(_DWORD *)(a1 + 4);
          v22 = (unsigned __int16)v53;
          if ( (unsigned __int16)v53 == 0xFFFF )
            v22 = *(unsigned __int8 *)(v13 + 4232);
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          v24 = EtwpAcquireLoggerContextByLoggerId(v13, v22, 0);
          v25 = (__int64)v24;
          if ( v24 )
          {
            v26 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v24);
            ObjectsSecurityDescriptor[0] = v26;
            Length = a2 - 16;
            v8 = SeQuerySecurityDescriptorInfo(
                   &SecurityInformation,
                   (PSECURITY_DESCRIPTOR)(a1 + 16),
                   &Length,
                   ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            EtwpDereferenceLoggerSecurityDescriptor(v25, (__int64)v26);
            v20 = 0;
            p_SizeOfBitMap = (unsigned int *)v25;
            goto LABEL_16;
          }
          goto LABEL_48;
        }
        return 3221225476LL;
      case 5:
        *v12 = 20;
        if ( (((_DWORD)v10 - 16) & 0xFFFFFFFB) == 0 )
        {
          *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
          *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
          *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
          if ( a2 == 20 )
            *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
          return v8;
        }
        return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
  switch ( v51 )
  {
    case 7:
      *v12 = 16;
      if ( a2 == 16 )
      {
        *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
        *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
        return v8;
      }
      return 3221225476LL;
    case 8:
    case 9:
      v43 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v44 = (a2 - 4) >> 2;
        for ( j = 0LL; ; j = v47 )
        {
          NextProcess = PsGetNextProcess(j);
          v47 = (struct _KPROCESS *)NextProcess;
          ObjectsSecurityDescriptor[0] = NextProcess;
          if ( !NextProcess )
            break;
          if ( (*((_DWORD *)NextProcess + 543) & 0x1000) == 0
            && (v9 == 9 || (unsigned __int8)EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v47);
            if ( v43 < v44 )
              *(_DWORD *)(a1 + 4LL * v43 + 4) = ProcessId;
            ++v43;
          }
        }
        *a4 = 4 * v43 + 4;
        return v44 < v43 ? 0xC0000023 : 0;
      }
      return 3221225506LL;
    case 10:
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v53 = *(_RTL_BITMAP **)(a1 + 8);
        v38 = (unsigned __int16)v53;
        if ( (unsigned __int16)v53 == 0xFFFF )
          v38 = *(unsigned __int8 *)(v13 + 4232);
        v39 = KeGetCurrentThread();
        --v39->KernelApcDisable;
        v40 = EtwpAcquireLoggerContextByLoggerId(v13, v38, 1);
        v17 = v40;
        v53 = (_RTL_BITMAP *)v40;
        if ( v40 )
        {
          if ( (v40[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v40, 1);
            v8 = -1073741811;
            goto LABEL_17;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v40, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v41 = 5LL * *((unsigned __int8 *)v17 + 818);
            v42 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v17 + 818)] + 16;
            *a4 = v42;
            if ( v42 > a2 )
              v8 = -1073741789;
            else
              memmove(
                (void *)(a1 + 16),
                &EtwpPoolTagFilter[2 * v41 + 2],
                4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v41]);
          }
          goto LABEL_14;
        }
        goto LABEL_48;
      }
      return 3221225506LL;
    case 12:
      return (unsigned int)EtwpGetPmcProfileSource(a1, v10, a4);
  }
  if ( v51 != 13 )
    return (unsigned int)-1073741822;
  ObjectsSecurityDescriptor[0] = 0LL;
  v50 = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  v36 = a2 - 8;
  result = ExLockUserBuffer(a1 + 8, v36, v11, IoWriteAccess, &v50, (struct _MDL **)ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))off_140C020E8[0])(20LL, v36, v50, a4);
    if ( v50 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor[0]);
    return v8;
  }
  return result;
}
