/*
 * XREFs of sub_140A70470 @ 0x140A70470
 * Callers:
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 *     KeEnterKernelDebugger @ 0x140566EC0 (KeEnterKernelDebugger.c)
 *     DriverEntry @ 0x140A47010 (DriverEntry.c)
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 *     sub_140A56118 @ 0x140A56118 (sub_140A56118.c)
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     sub_14025E490 @ 0x14025E490 (sub_14025E490.c)
 *     sub_14025E93C @ 0x14025E93C (sub_14025E93C.c)
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
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_140565378 @ 0x140565378 (sub_140565378.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A7141C @ 0x140A7141C (sub_140A7141C.c)
 */

char __fastcall sub_140A70470(int a1, __int64 a2, __int64 a3, __int64 a4)
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
  CHAR *v14; // r9
  unsigned int v15; // r8d
  CHAR v16; // al
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
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

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
      dword_140C54ED8 = 0;
      if ( !byte_140C09804 || (v7 = 1, !byte_140C31E42) )
        v7 = 0;
      if ( qword_140C4BED0 && *(_DWORD *)(qword_140C4BED0 + 236) == 3 )
        dword_140C097F8 = 1152;
      if ( !qword_140C404D0 )
      {
        *((_QWORD *)&xmmword_140C31E60 + 1) = qword_140C4BED0;
        qword_140C02300 = (__int64)sub_14025E93C();
        qword_140D00AD8 = 0LL;
        qword_140C404F8 = (__int64)&qword_140C404F0;
        qword_140C404F0 = (__int64)&qword_140C404F0;
        qword_140C404D8 = (__int64)&qword_140C404D0;
        qword_140C404D0 = (__int64)&qword_140C404D0;
        sub_140A7141C(v8, &xmmword_140C02190);
        WORD1(xmmword_140C097D0) = NtBuildNumber;
        LOWORD(xmmword_140C097D0) = (unsigned int)NtBuildNumber >> 28;
        qword_140C097F0 = (__int64)&qword_140C404D0;
        WORD3(xmmword_140C097D0) |= 1u;
        *((_QWORD *)&xmmword_140C097E0 + 1) = &PsLoadedModuleList;
        *(_WORD *)((char *)&xmmword_140C097D0 + 11) = 13059;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !*((_QWORD *)CurrentPrcb + 4408) )
      {
        *((_DWORD *)CurrentPrcb + 8818) = 1048587;
        *((_QWORD *)CurrentPrcb + 4408) = (char *)CurrentPrcb + 496;
      }
      if ( a2 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
        off_140C02468 = &qword_140C404E0;
        qword_140C404E0 = a2 + 16;
        v22 = *(char **)(a2 + 216);
        *(_QWORD *)&xmmword_140C097E0 = v21;
        if ( v22 )
        {
          strupr(v22);
          dword_140C404C0 = 0;
          v10 = 0;
          v23 = strstr(v22, "DBGPRINT_LOG_SIZE=");
          if ( v23 )
          {
            v32 = (atol(v23 + 18) + 4095) & 0xFFFFF000;
            dword_140C404C0 = v32;
            if ( v32 <= 0x1000000 )
            {
              if ( v32 <= 0x1000 )
                dword_140C404C0 = 0;
            }
            else
            {
              dword_140C404C0 = 0x1000000;
            }
          }
          if ( strstr(v22, "NODEBUG") )
          {
            byte_140C09804 = 1;
            byte_140C40503 = 1;
            byte_140C097FC = 1;
          }
          else if ( strstr(v22, "DEBUGPORT=LOCAL") )
          {
            byte_140C09804 = 1;
            v7 = 1;
            byte_140C40503 = 1;
            LOBYTE(KdDebuggerNotPresent) = 1;
            byte_140C31E42 = 1;
            byte_140C097FC = 0;
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
                  byte_140C097FC = 0;
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
                            byte_140C40502 = 1;
                            v6 = 0;
                          }
                          break;
                        case 7:
                          LODWORD(v26) = strncmp(i, "DISABLE", 7uLL);
                          if ( !(_DWORD)v26 )
                          {
                            v5 = 1;
                            byte_140C40502 = 0;
                            v6 = 1;
                          }
                          break;
                        case 6:
                          LODWORD(v26) = strncmp(i, "NOUMEX", 6uLL);
                          if ( !(_DWORD)v26 )
                            byte_140C40501 = 1;
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
            byte_140C40503 = 0;
          }
        }
        else
        {
          byte_140C09804 = 1;
          v10 = 0;
          byte_140C40503 = 1;
        }
      }
      else
      {
        v10 = 1;
        *(_QWORD *)&xmmword_140C097E0 = qword_140D068F0;
      }
      qword_140C021A8 = xmmword_140C097E0;
      if ( !v7 )
      {
        if ( a2 && *(_DWORD *)(a2 + 12) < 2u || !v10 )
        {
          LOBYTE(KdDebuggerNotPresent) = 1;
          goto LABEL_74;
        }
        if ( (int)KdInitialize(0LL, a2, &xmmword_140C31E60, a4) < 0 )
        {
          byte_140C09804 = 0;
          v10 = 0;
          LOBYTE(KdDebuggerNotPresent) = 1;
          byte_140C31E42 = 1;
        }
        else
        {
          dword_140C54ED8 = 1;
        }
      }
      if ( !byte_140C40500 )
      {
        BYTE4(xmmword_140C31E60) = 0;
        LODWORD(xmmword_140C31E60) = 20;
        KeInitializeDpc(&stru_140CF5F90, (PKDEFERRED_ROUTINE)sub_140A6F0F0, 0LL);
        KeInitializeTimerEx(&stru_140CF5FD0, NotificationTimer);
        stru_140CF5F68.Parameter = 0LL;
        stru_140CF5F68.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A6F010;
        stru_140CF5F68.List.Flink = 0LL;
        byte_140C40500 = 1;
      }
      qword_140C40508 = 0LL;
      if ( KdEventLoggingEnabled && byte_140C097FC )
      {
        byte_140C09804 = 1;
        byte_140C40504 = v10;
        LOBYTE(KdDebuggerNotPresent) = 1;
        byte_140C31E42 = 0;
      }
      else
      {
        LOBYTE(KdDebuggerEnabled) = 1;
        MEMORY[0xFFFFF780000002D4] = 1;
        if ( byte_140C31E42 )
          goto LABEL_74;
      }
      if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
      {
        byte_140C09804 = 0;
        if ( !v5 )
        {
          if ( !a2 )
          {
            DbgLoadImageSymbols(0LL, (void *)qword_140C021A8, 0xFFFFFFFFLL);
            return 1;
          }
          if ( sub_14025E490() && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            LOBYTE(byte_140E01842) = byte_140E01842 | 4;
            __writemsr(0x6A2u, __readmsr(0x6A2u) | 2);
          }
          v11 = 0;
          for ( j = *(__int64 **)(a2 + 16); j != (__int64 *)(a2 + 16); ++v11 )
          {
            if ( v11 >= 3 )
              break;
            DestinationString = 0LL;
            LODWORD(v13) = 0;
            v14 = (CHAR *)j[10];
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
              sub_140502A3C();
            SourceString[v13] = 0;
            RtlInitString(&DestinationString, SourceString);
            DbgLoadImageSymbols((__int64)&DestinationString, (void *)j[6], 0xFFFFFFFFLL);
            j = (__int64 *)*j;
          }
          BYTE1(KdDebuggerEnabled) = KdPollBreakIn();
          goto LABEL_75;
        }
        sub_140565378();
        byte_140C44528 = v6;
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
    KeQueryPerformanceCounter(&stru_140C44520);
    if ( !byte_140C09804 )
    {
      for ( k = 0; k < (unsigned int)dword_140D06884; ++k )
      {
        Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6F49644Bu);
        if ( Pool2 )
        {
          _InterlockedOr(v33, 0);
          qword_140C40520[k] = Pool2;
        }
      }
    }
    qword_140C404E0 = 0LL;
  }
  return 1;
}
