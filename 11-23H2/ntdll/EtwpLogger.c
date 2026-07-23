/*
 * XREFs of EtwpLogger @ 0x18005B0E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFreeLoggerContext @ 0x18005AA6C (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x18005B2FC (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x18005E45C (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x18005F714 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  void *UniqueThread; // rdx
  LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // eax
  BOOL v5; // edi
  int active; // eax
  __int64 v7; // rdx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  signed int v11; // edi
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rdi
  int v15; // eax
  bool v16; // zf
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  *((_QWORD *)BaseAddress + 3) = UniqueThread;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *((_DWORD *)BaseAddress + 78) )
  {
    v3 = 0LL;
    if ( *((_QWORD *)BaseAddress + 41) )
      v3 = (LARGE_INTEGER *)(BaseAddress + 328);
    v4 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 14), 0, v3);
    v5 = v4 == 258 || !v4 && (BaseAddress[316] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v5);
    v8 = active;
    if ( (BaseAddress[316] & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v9 = *((_DWORD *)BaseAddress + 79);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v14 = (void *)*((_QWORD *)BaseAddress + 16);
      *((_QWORD *)BaseAddress + 16) = 0LL;
      v15 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *((_DWORD *)BaseAddress + 10) = v15;
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = (BaseAddress[316] & 4) == 0;
        *((_QWORD *)BaseAddress + 16) = v14;
        if ( !v16 )
          v8 = 0;
      }
      else
      {
        NtClose(v14);
        if ( (BaseAddress[316] & 1) != 0 )
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
      }
      *((_DWORD *)BaseAddress + 79) &= ~1u;
      v9 = *((_DWORD *)BaseAddress + 79);
    }
    if ( (v9 & 0x10) != 0 )
    {
      v16 = *((_QWORD *)BaseAddress + 16) == 0LL;
      *((_DWORD *)BaseAddress + 79) = v9 & 0xFFFFFFEF;
      if ( !v16 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v7);
      }
    }
    v10 = *((_DWORD *)BaseAddress + 79);
    if ( (v10 & 6) != 0 )
    {
      v13 = (void *)*((_QWORD *)BaseAddress + 15);
      *((_DWORD *)BaseAddress + 79) = v10 & 0xFFFFFFF9;
      ZwSetEvent(v13, 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v11 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*((HANDLE *)BaseAddress + 16));
  *((_QWORD *)BaseAddress + 16) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = (void *)*((_QWORD *)BaseAddress + 15);
  *((_DWORD *)BaseAddress + 10) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext((unsigned int *)BaseAddress);
  RtlExitUserThread(0);
}
