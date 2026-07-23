/*
 * XREFs of EtwpUpdateTrace @ 0x1407F8630
 * Callers:
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409EBA9C (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140228144 (EtwpQueryUsedProcessorCount.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB0C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x1406C04DC (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0FAC (EtwpGetSecurityDescriptorByGuid.c)
 *     SeDeleteClientSecurity @ 0x14071D1F0 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurity @ 0x14071D3C0 (SeCreateClientSecurity.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1407F7AA8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpValidateFlagExtension @ 0x1407F8470 (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x1407F8584 (EtwpCheckForStackTracingExtension.c)
 *     EtwpValidateLoggerInfo @ 0x1407F90BC (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x1407F90F4 (EtwpAcquireLoggerContext.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F91F0 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x1407FB2E0 (EtwpCaptureString.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408262CC (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140827444 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14085C6D0 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E3CB4 (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E7A0C (EtwpUpdatePerProcessTracing.c)
 *     EtwpSendDbgId @ 0x1409EBF34 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EC3C4 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int updated; // ebx
  unsigned int *v10; // rdi
  int v11; // r15d
  unsigned int v12; // r14d
  ACCESS_MASK v13; // eax
  unsigned int *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v19; // r10d
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  UNICODE_STRING v23; // xmm0
  __int64 v24; // r9
  int v25; // ecx
  int v26; // ecx
  unsigned int *v27; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+50h] BYREF
  void *v31; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v7);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v30);
      if ( updated < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)updated;
      }
      v10 = v30;
      v11 = *(_DWORD *)(a2 + 64);
      v12 = v30[3];
      v27 = v30 + 3;
      if ( (v12 & 0x40) != 0
        || (v11 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v11 & 2) != 0 && (v12 & 2) == 0
        || (v11 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v13 = ((v12 | v11) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v13 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v13, (__int64)v30);
      if ( updated < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v12 & 8) != 0 || (v11 & 8) != 0 || (v12 & 0x400) != 0 )
          goto LABEL_6;
        updated = EtwpCaptureString(a2 + 128, &UnicodeString);
        if ( updated < 0 )
          goto LABEL_7;
        if ( *((_QWORD *)v10 + 90) )
        {
          SeDeleteClientSecurity((__int64)(v10 + 176));
          *((_QWORD *)v10 + 90) = 0LL;
        }
        v10 = v30;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        updated = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    &ClientSecurityQos,
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v30 + 176));
        if ( updated < 0 )
          goto LABEL_7;
        v23 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v10 + 46) = v23;
        EtwpSynchronizeWithLogger((__int64)v10, 4u);
        updated = EtwpSynchronizeWithLogger((__int64)v10, 2u);
        if ( updated < 0 || !v10[80] )
          goto LABEL_7;
      }
      else if ( (v12 & 0x400) != 0 )
      {
        goto LABEL_20;
      }
      if ( (v11 & 0x100) != 0 )
      {
        v12 |= 0x100u;
        if ( !v10[52] )
          v10[52] = (v12 & 0x10) != 0 ? 1000 : 1;
LABEL_20:
        v14 = v10 + 69;
        v15 = *(_QWORD *)(v10 + 69);
        v16 = *(_QWORD *)&HeapGuid.Data1 - v15;
        if ( *(_QWORD *)&HeapGuid.Data1 == v15 )
          v16 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v10 + 71);
        if ( v16 )
        {
          v17 = *(_QWORD *)&CritSecGuid.Data1 - v15;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v15 )
            v17 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v10 + 71);
          if ( v17 )
          {
LABEL_26:
            updated = EtwpCheckForStackTracingExtension(a2, (__int64)v10);
            if ( updated < 0 )
              goto LABEL_7;
            if ( (*v27 & 0x2000000) != 0 )
            {
              updated = EtwpCheckSystemTraceAccess(v10, 128LL);
              if ( updated < 0 )
                goto LABEL_7;
              if ( a1 == EtwpHostSiloState )
              {
                updated = EtwpCheckForPoolTagFilterExtension(v10, a2, 0LL);
                if ( updated < 0 )
                  goto LABEL_7;
              }
              updated = EtwpUpdateLoggerGroupMasks(v10, a2);
              if ( updated < 0 )
                goto LABEL_7;
            }
            if ( !*(_DWORD *)(a2 + 56) )
              goto LABEL_33;
            if ( v10[1] )
            {
              SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v10);
              if ( v19 <= SystemMaximumBufferCount )
                goto LABEL_31;
            }
            else
            {
              SystemMaximumBufferCount = 0;
            }
            *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
            v19 = SystemMaximumBufferCount;
LABEL_31:
            if ( v19 > v10[59] )
              v10[59] = v19;
LABEL_33:
            if ( (v12 & 0x400) == 0 )
            {
              v20 = *(_DWORD *)(a2 + 68);
              if ( v20 )
              {
                if ( v20 != v10[52] )
                {
                  v10[52] = v20;
                  EtwpSynchronizeWithLogger((__int64)v10, 4u);
                }
              }
            }
            if ( (v11 & 0x80000) == 0 )
            {
              if ( (v12 & 0x80000) != 0 )
                v12 &= ~0x80000u;
              goto LABEL_40;
            }
            if ( v10[75] != 1 )
            {
              _InterlockedOr((volatile signed __int32 *)v10 + 206, 0x800u);
              v12 |= 0x80000u;
              if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
              {
                v10 = v30;
              }
              else
              {
                v10 = v30;
                EtwpSendDbgId(v30);
              }
LABEL_40:
              if ( (v11 & 0x80u) == 0
                || (v31 = 0LL,
                    EtwpGetSecurityDescriptorByGuid(v14, &v31),
                    updated = EtwpUpdateLoggerSecurityDescriptor(v10, v31),
                    EtwpFreeSecurityDescriptor(&v31),
                    updated >= 0) )
              {
                *v27 = v12;
                v21 = *(_DWORD *)(a2 + 76);
                if ( v21 )
                {
                  if ( v10[52] || (v12 & 0x400) != 0 )
                    goto LABEL_86;
                  v25 = v10[59] - EtwpQueryUsedProcessorCount((__int64)v10);
                  v21 = *(_DWORD *)(a2 + 76);
                  v26 = v25 - 1;
                  if ( v21 > v26 )
                  {
                    *(_DWORD *)(a2 + 76) = v26;
                    v21 = v26;
                  }
                  if ( v21 < 0 )
                  {
LABEL_86:
                    *(_DWORD *)(a2 + 76) = 0;
                    v21 = 0;
                  }
                }
                v10[53] = v21;
                updated = EtwpGetLoggerInfoFromContext(a2, v10);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                  EtwpEventWriteTemplateSession(v22, &ETW_EVENT_UPDATE_TRACE, v10);
              }
              goto LABEL_7;
            }
            updated = -1073741637;
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            EtwpReleaseLoggerContext(v10, 1);
            goto LABEL_8;
          }
          v24 = 1LL;
        }
        else
        {
          v24 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v10, v24);
        goto LABEL_26;
      }
      if ( (v12 & 0x100) == 0 )
        goto LABEL_20;
      if ( *((_QWORD *)v10 + 100) )
      {
        v12 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)v10, 8u);
        goto LABEL_20;
      }
LABEL_6:
      updated = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
