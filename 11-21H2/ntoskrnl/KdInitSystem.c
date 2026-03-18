/*
 * XREFs of KdInitSystem @ 0x140A70470
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1405655BC (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x140566EC0 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140A47010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 *     KiSetProcessorSignature @ 0x140A56118 (KiSetProcessorSignature.c)
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     KeIsKernelCetEnabled @ 0x14025E490 (KeIsKernelCetEnabled.c)
 *     MmGetPagedPoolCommitPointer @ 0x14025E93C (MmGetPagedPoolCommitPointer.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     DbgLoadImageSymbols @ 0x1402D9D60 (DbgLoadImageSymbols.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 *     KdDisableDebuggerWithLock @ 0x140565378 (KdDisableDebuggerWithLock.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     KdRegisterDebuggerDataBlock @ 0x140A7141C (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  char v6; // r15
  char v7; // r14
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v10; // bp
  unsigned int v11; // ebp
  __int64 *j; // rdi
  __int64 v13; // rdx
  char *v14; // r9
  unsigned int v15; // r8d
  char v16; // al
  __int64 v17; // rcx
  unsigned int k; // edi
  __int64 Pool2; // rax
  __int64 v21; // rcx
  char *v22; // rsi
  char *v23; // rax
  const char *v24; // rdi
  char *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  const char *i; // rcx
  const char *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  char SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a1 == -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 8) != 0 )
      __debugbreak();
  }
  else
  {
    if ( !a1 )
    {
      if ( (_BYTE)KdDebuggerEnabled )
        goto LABEL_74;
      LOWORD(KdDebuggerEnabled) = 0;
      KdpDebugRoutineSelect = 0;
      if ( !KdPitchDebugger || (v7 = 1, !KdLocalDebugEnabled) )
        v7 = 0;
      if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
        KdTransportMaxPacketSize = 1152;
      if ( !KdpDebuggerDataListHead )
      {
        *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
        qword_140C02300 = (__int64)MmGetPagedPoolCommitPointer();
        KdpPowerSpinLock = 0LL;
        qword_140C404F8 = (__int64)&KdpPowerListHead;
        KdpPowerListHead = (__int64)&KdpPowerListHead;
        qword_140C404D8 = (__int64)&KdpDebuggerDataListHead;
        KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
        KdRegisterDebuggerDataBlock(v8, &KdDebuggerDataBlock);
        WORD1(KdVersionBlock) = NtBuildNumber;
        LOWORD(KdVersionBlock) = (unsigned int)NtBuildNumber >> 28;
        qword_140C097F0 = (__int64)&KdpDebuggerDataListHead;
        WORD3(KdVersionBlock) |= 1u;
        *((_QWORD *)&xmmword_140C097E0 + 1) = &PsLoadedModuleList;
        *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !CurrentPrcb->Context )
      {
        CurrentPrcb->ContextFlagsInit = 1048587;
        CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
      }
      if ( a2 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
        off_140C02468 = &KdpLoaderDebuggerBlock;
        KdpLoaderDebuggerBlock = a2 + 16;
        v22 = *(char **)(a2 + 216);
        *(_QWORD *)&xmmword_140C097E0 = v21;
        if ( v22 )
        {
          strupr(v22);
          KdPrintBufferAllocateSize = 0;
          v10 = 0;
          v23 = strstr(v22, "DBGPRINT_LOG_SIZE=");
          if ( v23 )
          {
            v32 = (atol(v23 + 18) + 4095) & 0xFFFFF000;
            KdPrintBufferAllocateSize = v32;
            if ( v32 <= 0x1000000 )
            {
              if ( v32 <= 0x1000 )
                KdPrintBufferAllocateSize = 0;
            }
            else
            {
              KdPrintBufferAllocateSize = 0x1000000;
            }
          }
          if ( strstr(v22, "NODEBUG") )
          {
            KdPitchDebugger = 1;
            KdPageDebuggerSection = 1;
            KdpBootedNodebug = 1;
          }
          else if ( strstr(v22, "DEBUGPORT=LOCAL") )
          {
            KdPitchDebugger = 1;
            v7 = 1;
            KdPageDebuggerSection = 1;
            LOBYTE(KdDebuggerNotPresent) = 1;
            KdLocalDebugEnabled = 1;
            KdpBootedNodebug = 0;
          }
          else
          {
            v24 = v22;
            do
            {
              v25 = strstr(v24, " DEBUG=");
              if ( !v25 )
              {
                v25 = strstr(v24, " DEBUG");
                if ( !v25 )
                  break;
              }
              v24 = v25 + 6;
              v26 = v25[6];
              if ( (unsigned __int8)v26 <= 0x3Du )
              {
                v27 = 0x2000000100000001LL;
                if ( _bittest64(&v27, v26) )
                {
                  KdpBootedNodebug = 0;
                  v10 = 1;
                  if ( v25[6] == 61 )
                  {
                    for ( i = v25 + 7; ; i = v29 + 1 )
                    {
                      LOBYTE(v26) = *i;
                      v29 = i;
                      while ( (_BYTE)v26 )
                      {
                        if ( (unsigned __int8)v26 <= 0x2Cu )
                        {
                          v30 = 0x100100000200LL;
                          if ( _bittest64(&v30, v26) )
                            break;
                        }
                        LOBYTE(v26) = *++v29;
                      }
                      v26 = (unsigned int)((_DWORD)v29 - (_DWORD)i);
                      if ( (_DWORD)v29 == (_DWORD)i )
                        break;
                      switch ( (_DWORD)v26 )
                      {
                        case 0xA:
                          LODWORD(v26) = strncmp(i, "AUTOENABLE", 0xAuLL);
                          if ( !(_DWORD)v26 )
                          {
                            v5 = 1;
                            KdAutoEnableOnEvent = 1;
                            v6 = 0;
                          }
                          break;
                        case 7:
                          LODWORD(v26) = strncmp(i, "DISABLE", 7uLL);
                          if ( !(_DWORD)v26 )
                          {
                            v5 = 1;
                            KdAutoEnableOnEvent = 0;
                            v6 = 1;
                          }
                          break;
                        case 6:
                          LODWORD(v26) = strncmp(i, "NOUMEX", 6uLL);
                          if ( !(_DWORD)v26 )
                            KdIgnoreUmExceptions = 1;
                          break;
                      }
                      if ( *v29 != 44 )
                        break;
                    }
                  }
                  break;
                }
              }
            }
            while ( v25 != (char *)-6LL );
          }
          if ( strstr(v22, "NOEVENT") )
          {
            KdEventLoggingEnabled = 0;
          }
          else if ( strstr(v22, "EVENT") )
          {
            KdEventLoggingEnabled = 1;
            v10 = 1;
            KdPageDebuggerSection = 0;
          }
        }
        else
        {
          KdPitchDebugger = 1;
          v10 = 0;
          KdPageDebuggerSection = 1;
        }
      }
      else
      {
        v10 = 1;
        *(_QWORD *)&xmmword_140C097E0 = PsNtosImageBase;
      }
      qword_140C021A8 = xmmword_140C097E0;
      if ( !v7 )
      {
        if ( a2 && *(_DWORD *)(a2 + 12) < 2u || !v10 )
        {
          LOBYTE(KdDebuggerNotPresent) = 1;
          goto LABEL_74;
        }
        if ( (int)KdInitialize(0LL, a2, &KdpContext, a4) < 0 )
        {
          KdPitchDebugger = 0;
          v10 = 0;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
        }
        else
        {
          KdpDebugRoutineSelect = 1;
        }
      }
      if ( !KdpDebuggerStructuresInitialized )
      {
        BYTE4(KdpContext) = 0;
        LODWORD(KdpContext) = 20;
        KeInitializeDpc(&KdpTimeSlipDpc, (PKDEFERRED_ROUTINE)KdpTimeSlipDpcRoutine, 0LL);
        KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
        KdpTimeSlipWorkItem.Parameter = 0LL;
        KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
        KdpTimeSlipWorkItem.List.Flink = 0LL;
        KdpDebuggerStructuresInitialized = 1;
      }
      KdTimerStart = 0LL;
      if ( KdEventLoggingEnabled && KdpBootedNodebug )
      {
        KdPitchDebugger = 1;
        KdEventLoggingPresent = v10;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 0;
      }
      else
      {
        LOBYTE(KdDebuggerEnabled) = 1;
        MEMORY[0xFFFFF780000002D4] = 1;
        if ( KdLocalDebugEnabled )
          goto LABEL_74;
      }
      if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
      {
        KdPitchDebugger = 0;
        if ( !v5 )
        {
          if ( !a2 )
          {
            DbgLoadImageSymbols(0LL, qword_140C021A8, 0xFFFFFFFFLL);
            return 1;
          }
          if ( KeIsKernelCetEnabled() && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 4;
            __writemsr(0x6A2u, __readmsr(0x6A2u) | 2);
          }
          v11 = 0;
          for ( j = *(__int64 **)(a2 + 16); j != (__int64 *)(a2 + 16); ++v11 )
          {
            if ( v11 >= 3 )
              break;
            DestinationString = 0LL;
            LODWORD(v13) = 0;
            v14 = (char *)j[10];
            v15 = *((unsigned __int16 *)j + 36) >> 1;
            if ( v15 >= 0x100 )
              v15 = 255;
            do
            {
              v16 = *v14;
              v14 += 2;
              v17 = (unsigned int)v13;
              v13 = (unsigned int)(v13 + 1);
              SourceString[v17] = v16;
            }
            while ( (unsigned int)v13 < v15 );
            if ( (unsigned int)v13 >= 0x100uLL )
              _report_rangecheckfailure();
            SourceString[v13] = 0;
            RtlInitString(&DestinationString, SourceString);
            DbgLoadImageSymbols((__int64)&DestinationString, j[6], 0xFFFFFFFFLL);
            j = (__int64 *)*j;
          }
          BYTE1(KdDebuggerEnabled) = KdPollBreakIn();
          goto LABEL_75;
        }
        KdDisableDebuggerWithLock();
        KdBlockEnable = v6;
      }
LABEL_74:
      if ( !a2 )
        return 1;
LABEL_75:
      v31 = *(_QWORD *)(a2 + 240);
      if ( v31 )
        memset((void *)(v31 + 2464), 0, 0x20uLL);
      return 1;
    }
    KeQueryPerformanceCounter(&KdPerformanceCounterRate);
    if ( !KdPitchDebugger )
    {
      for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
      {
        Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6F49644Bu);
        if ( Pool2 )
        {
          _InterlockedOr(v33, 0);
          KdLogBuffer[k] = Pool2;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
  }
  return 1;
}
