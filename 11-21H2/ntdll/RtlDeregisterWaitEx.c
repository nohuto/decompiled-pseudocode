/*
 * XREFs of RtlDeregisterWaitEx @ 0x180070010
 * Callers:
 *     RtlDeregisterWait @ 0x18006FA30 (RtlDeregisterWait.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     RtlpTpResumeImpersonation @ 0x1800707A0 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180070858 (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x180070960 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180070A24 (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x180070BD4 (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x180070C30 (TpWaitForWait.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  int v5; // edi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v8; // ecx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+18h]
  int v13; // [rsp+78h] [rbp+20h]

  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v5 = RtlpTpRevertCapture(&v10, 0LL);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 16, v4, v6, v7);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    v8 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v11 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v11->ClientId.UniqueThread)) )
    {
      v8 = 0;
    }
    v13 = v8;
    if ( a2 == -1 )
    {
      if ( !v8 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v12 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v12 = 0;
    }
    if ( v12 )
      v5 = v13 == 0 ? 0x103 : 0;
    else
      v5 = 0;
  }
  RtlpTpResumeImpersonation(v10);
  return (unsigned int)v5;
}
