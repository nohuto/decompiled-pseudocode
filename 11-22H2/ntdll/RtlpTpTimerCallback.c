/*
 * XREFs of RtlpTpTimerCallback @ 0x18004C060
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EBC0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18004F090 (TppCompleteThreadData.c)
 *     RtlpTpImpersonate @ 0x180088FD0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 ThreadInformation; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      RtlpTpImpersonate(v4, a2, a3);
    v5 = NtCurrentTeb();
    v6 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStart(
        0,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppStartThreadData(&v10, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v5->SubProcessTag);
    LOBYTE(v8) = 1;
    (*((void (__fastcall **)(_QWORD, __int64))a2 + 4))(*((_QWORD *)a2 + 5), v8);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStop(
        0,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppCompleteThreadData(v10);
  }
}
