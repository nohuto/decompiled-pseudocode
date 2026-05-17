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

void __fastcall __noreturn EtwpLogger(__int64 a1)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // edi
  signed int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rsi
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  v15 = 2;
  NtSetInformationThread(-2LL, 3LL, &v15, 4LL);
  while ( *(_DWORD *)(a1 + 312) )
  {
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 328) )
      v2 = (LARGE_INTEGER *)(a1 + 328);
    v3 = NtWaitForSingleObject(*(HANDLE *)(a1 + 112), 0, v2);
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 316) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v7 = *(_DWORD *)(a1 + 316);
    v8 = active;
    if ( (v7 & 1) != 0 && active >= 0 && !v4 )
    {
      v11 = EtwpFlushActiveBuffers(a1, 1LL);
      v7 = *(_DWORD *)(a1 + 316);
      v8 = v11;
    }
    if ( (v7 & 4) != 0 || (v7 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v12 = *(void **)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0LL;
      v13 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v13;
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = *(_DWORD *)(a1 + 316);
        *(_QWORD *)(a1 + 128) = v12;
        if ( (v14 & 4) != 0 )
          v8 = 0;
      }
      else
      {
        NtClose(v12);
        v14 = *(_DWORD *)(a1 + 316);
        if ( (v14 & 1) != 0 )
        {
          EtwpSendSessionNotification(a1, 1LL, 0LL);
          v14 = *(_DWORD *)(a1 + 316);
        }
      }
      v7 = v14 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 316) = v7;
    }
    if ( (v7 & 0x10) != 0 )
    {
      v7 &= ~0x10u;
      *(_DWORD *)(a1 + 316) = v7;
      if ( *(_QWORD *)(a1 + 128) )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(a1, v6);
        v7 = *(_DWORD *)(a1 + 316);
      }
    }
    if ( (v7 & 6) != 0 )
    {
      *(_DWORD *)(a1 + 316) = v7 & 0xFFFFFFF9;
      ZwSetEvent(*(_QWORD *)(a1 + 120), 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v9 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v10 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 40) = v9;
  ZwSetEvent(v10, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0LL);
}
