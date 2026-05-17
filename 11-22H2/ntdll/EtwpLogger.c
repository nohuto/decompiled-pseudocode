/*
 * XREFs of EtwpLogger @ 0x18005E0E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x18005E2FC (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005E754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x1800612EC (EtwpSendSessionNotification.c)
 *     EtwpStopLoggerInstance @ 0x1800625A4 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 a1)
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
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rdi
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v17 = 2;
  NtSetInformationThread(-2LL, 3LL, &v17);
  while ( *(_DWORD *)(a1 + 312) )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 328) )
      v3 = (LARGE_INTEGER *)(a1 + 328);
    v4 = NtWaitForSingleObject(*(HANDLE *)(a1 + 112), 0, v3);
    v5 = v4 == 258 || !v4 && (*(_BYTE *)(a1 + 316) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v5);
    v8 = active;
    if ( (*(_BYTE *)(a1 + 316) & 1) != 0 && active >= 0 && !v5 )
      v8 = EtwpFlushActiveBuffers(a1, 1LL);
    v9 = *(_DWORD *)(a1 + 316);
    if ( (v9 & 4) != 0 || (v9 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v14 = *(void **)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0LL;
      v15 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v15;
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = (*(_BYTE *)(a1 + 316) & 4) == 0;
        *(_QWORD *)(a1 + 128) = v14;
        if ( !v16 )
          v8 = 0;
      }
      else
      {
        NtClose(v14);
        if ( (*(_BYTE *)(a1 + 316) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1LL, 0LL);
      }
      *(_DWORD *)(a1 + 316) &= ~1u;
      v9 = *(_DWORD *)(a1 + 316);
    }
    if ( (v9 & 0x10) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 128) == 0LL;
      *(_DWORD *)(a1 + 316) = v9 & 0xFFFFFFEF;
      if ( !v16 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeLogFileHeader(a1, v7);
      }
    }
    v10 = *(_DWORD *)(a1 + 316);
    if ( (v10 & 6) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 316) = v10 & 0xFFFFFFF9;
      ZwSetEvent(v13, 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v11 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 40) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0);
}
