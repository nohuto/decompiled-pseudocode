/*
 * XREFs of EtwpUpdateTrace @ 0x1406ECE0C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1402E1C80 (EtwpQueryUsedProcessorCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406EF020 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406EF140 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1406EF170 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1406EFA84 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpCheckForStackTracingExtension @ 0x1406EFB1C (EtwpCheckForStackTracingExtension.c)
 *     EtwpValidateFlagExtension @ 0x1406F0238 (EtwpValidateFlagExtension.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140797BD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14079805C (EtwpFreeSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1408141A0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14081C500 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckSystemTraceAccess @ 0x140864164 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0AEC (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E491C (EtwpUpdatePerProcessTracing.c)
 *     EtwpSendDbgId @ 0x1409E92F8 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EB878 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int updated; // ebx
  unsigned int *v9; // rdi
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rdx
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
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension();
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      updated = EtwpAcquireLoggerContext(a1, a2, &v30);
      if ( updated < 0 )
      {
LABEL_8:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return (unsigned int)updated;
      }
      v9 = v30;
      v10 = *(_DWORD *)(a2 + 64);
      v11 = v30[3];
      v27 = v30 + 3;
      if ( (v11 & 0x40) != 0
        || (v10 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v10 & 2) != 0 && (v11 & 2) == 0
        || (v10 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v13 = ((v11 | v10) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v13 |= 0x40u;
      updated = EtwpCheckLoggerControlAccess(v13);
      if ( updated < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v11 & 8) != 0 || (v10 & 8) != 0 || (v11 & 0x400) != 0 )
          goto LABEL_6;
        updated = EtwpCaptureString(a2 + 128, &UnicodeString);
        if ( updated < 0 )
          goto LABEL_7;
        if ( *((_QWORD *)v9 + 90) )
        {
          SeDeleteClientSecurity(v9 + 176);
          *((_QWORD *)v9 + 90) = 0LL;
        }
        v9 = v30;
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
        *(UNICODE_STRING *)(v9 + 46) = v23;
        EtwpSynchronizeWithLogger((__int64)v9, 4u);
        updated = EtwpSynchronizeWithLogger((__int64)v9, 2u);
        if ( updated < 0 || !v9[80] )
          goto LABEL_7;
      }
      else if ( (v11 & 0x400) != 0 )
      {
        goto LABEL_20;
      }
      if ( (v10 & 0x100) != 0 )
      {
        v11 |= 0x100u;
        if ( !v9[52] )
          v9[52] = (v11 & 0x10) != 0 ? 1000 : 1;
LABEL_20:
        v14 = v9 + 69;
        v15 = *(_QWORD *)(v9 + 69);
        v16 = HeapGuid - v15;
        if ( HeapGuid == v15 )
          v16 = 0x4AA2F2756B3425A8LL - *(_QWORD *)(v9 + 71);
        if ( v16 )
        {
          v17 = CritSecGuid - v15;
          if ( CritSecGuid == v15 )
            v17 = 0x6B81390EF58D1581LL - *(_QWORD *)(v9 + 71);
          if ( v17 )
          {
LABEL_26:
            updated = EtwpCheckForStackTracingExtension(a2, v9);
            if ( updated < 0 )
              goto LABEL_7;
            if ( (*v27 & 0x2000000) != 0 )
            {
              updated = EtwpCheckSystemTraceAccess(v9, 128LL);
              if ( updated < 0 )
                goto LABEL_7;
              if ( a1 == EtwpHostSiloState )
              {
                updated = EtwpCheckForPoolTagFilterExtension(v9, a2, 0LL);
                if ( updated < 0 )
                  goto LABEL_7;
              }
              updated = EtwpUpdateLoggerGroupMasks(v9, a2);
              if ( updated < 0 )
                goto LABEL_7;
            }
            if ( !*(_DWORD *)(a2 + 56) )
              goto LABEL_33;
            if ( v9[1] )
            {
              SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v9);
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
            if ( v19 > v9[59] )
              v9[59] = v19;
LABEL_33:
            if ( (v11 & 0x400) == 0 )
            {
              v20 = *(_DWORD *)(a2 + 68);
              if ( v20 )
              {
                if ( v20 != v9[52] )
                {
                  v9[52] = v20;
                  EtwpSynchronizeWithLogger((__int64)v9, 4u);
                }
              }
            }
            if ( (v10 & 0x80000) == 0 )
            {
              if ( (v11 & 0x80000) != 0 )
                v11 &= ~0x80000u;
              goto LABEL_40;
            }
            if ( v9[75] != 1 )
            {
              _InterlockedOr((volatile signed __int32 *)v9 + 206, 0x800u);
              v11 |= 0x80000u;
              if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
              {
                v9 = v30;
              }
              else
              {
                v9 = v30;
                EtwpSendDbgId(v30);
              }
LABEL_40:
              if ( (v10 & 0x80u) == 0
                || (v31 = 0LL,
                    EtwpGetSecurityDescriptorByGuid(v14, &v31),
                    updated = EtwpUpdateLoggerSecurityDescriptor(v9, v31),
                    EtwpFreeSecurityDescriptor(&v31),
                    updated >= 0) )
              {
                *v27 = v11;
                v21 = *(_DWORD *)(a2 + 76);
                if ( v21 )
                {
                  if ( v9[52] || (v11 & 0x400) != 0 )
                    goto LABEL_86;
                  v25 = v9[59] - EtwpQueryUsedProcessorCount((__int64)v9);
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
                v9[53] = v21;
                updated = EtwpGetLoggerInfoFromContext(a2, v9);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                  EtwpEventWriteTemplateSession(v22, &ETW_EVENT_UPDATE_TRACE, v9);
              }
              goto LABEL_7;
            }
            updated = -1073741637;
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            LOBYTE(v12) = 1;
            EtwpReleaseLoggerContext(v9, v12);
            goto LABEL_8;
          }
          v24 = 1LL;
        }
        else
        {
          v24 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v9, v24);
        goto LABEL_26;
      }
      if ( (v11 & 0x100) == 0 )
        goto LABEL_20;
      if ( *((_QWORD *)v9 + 100) )
      {
        v11 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)v9, 8u);
        goto LABEL_20;
      }
LABEL_6:
      updated = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
