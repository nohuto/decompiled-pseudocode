/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x18003668C
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     TppCheckForTransactions @ 0x180035698 (TppCheckForTransactions.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1)
{
  struct _TEB *v2; // rax
  __int64 v3; // rdi
  void *SubProcessTag; // rdx
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 ThreadInformation; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Fields[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-1Ah]
  int v12; // [rsp+100h] [rbp+0h]
  int v13; // [rsp+104h] [rbp+4h]

  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(_GUID *)(a1 + 232);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_DWORD *)(a1 + 228) |= 2u;
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      v2 = NtCurrentTeb();
      v3 = 2147353488LL;
      SubProcessTag = v2->SubProcessTag;
      v2->SubProcessTag = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v6 = (__int64)NtCurrentPeb()->SharedData + 566;
      else
        v6 = 2147353488LL;
      if ( *(_BYTE *)v6 && SubProcessTag )
      {
        v12 = (int)SubProcessTag;
        v11 = 1349;
        v13 = 0;
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 566;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 8u, Fields);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 128);
    if ( v7 && (*(_BYTE *)(v7 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        ThreadInformation = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 && TppCheckForTransactions() )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionCode = -1073740003;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0
        && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( *(char *)(a1 + 104) >= 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
