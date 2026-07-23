/*
 * XREFs of EtwpLogger @ 0x1800041C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFlushActiveBuffers @ 0x1800043B8 (EtwpFlushActiveBuffers.c)
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 *     EtwpSendSessionNotification @ 0x18000730C (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpStopLoggerInstance @ 0x1800909A0 (EtwpStopLoggerInstance.c)
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // edi
  signed int v9; // edi
  void *v10; // rcx
  int v11; // eax
  void *v12; // rsi
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)BaseAddress + 3) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  v15 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v15, 4u);
  while ( *((_DWORD *)BaseAddress + 78) )
  {
    v2 = 0LL;
    if ( *((_QWORD *)BaseAddress + 41) )
      v2 = (LARGE_INTEGER *)(BaseAddress + 328);
    v3 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 14), 0, v2);
    v4 = v3 == 258 || !v3 && (BaseAddress[316] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v4);
    v7 = *((_DWORD *)BaseAddress + 79);
    v8 = active;
    if ( (v7 & 1) != 0 && active >= 0 && !v4 )
    {
      v11 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
      v7 = *((_DWORD *)BaseAddress + 79);
      v8 = v11;
    }
    if ( (v7 & 4) != 0 || (v7 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v12 = (void *)*((_QWORD *)BaseAddress + 16);
      *((_QWORD *)BaseAddress + 16) = 0LL;
      v13 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *((_DWORD *)BaseAddress + 10) = v13;
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = *((_DWORD *)BaseAddress + 79);
        *((_QWORD *)BaseAddress + 16) = v12;
        if ( (v14 & 4) != 0 )
          v8 = 0;
      }
      else
      {
        NtClose(v12);
        v14 = *((_DWORD *)BaseAddress + 79);
        if ( (v14 & 1) != 0 )
        {
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
          v14 = *((_DWORD *)BaseAddress + 79);
        }
      }
      v7 = v14 & 0xFFFFFFFE;
      *((_DWORD *)BaseAddress + 79) = v7;
    }
    if ( (v7 & 0x10) != 0 )
    {
      v7 &= ~0x10u;
      *((_DWORD *)BaseAddress + 79) = v7;
      if ( *((_QWORD *)BaseAddress + 16) )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v6);
        v7 = *((_DWORD *)BaseAddress + 79);
      }
    }
    if ( (v7 & 6) != 0 )
    {
      *((_DWORD *)BaseAddress + 79) = v7 & 0xFFFFFFF9;
      ZwSetEvent(*((HANDLE *)BaseAddress + 15), 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v9 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*((HANDLE *)BaseAddress + 16));
  *((_QWORD *)BaseAddress + 16) = 0LL;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v10 = (void *)*((_QWORD *)BaseAddress + 15);
  *((_DWORD *)BaseAddress + 10) = v9;
  ZwSetEvent(v10, 0LL);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
