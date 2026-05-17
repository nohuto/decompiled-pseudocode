/*
 * XREFs of RtlDeregisterWaitEx @ 0x18004C9D0
 * Callers:
 *     RtlDeregisterWait @ 0x180088BF0 (RtlDeregisterWait.c)
 * Callees:
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TpWaitOutstandingCallbackCount @ 0x18004CB20 (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x18004D9D0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DC7C (RtlpTpResumeImpersonation.c)
 *     TpReleaseWait @ 0x18004DCC0 (TpReleaseWait.c)
 *     RtlpTpWaitRundown @ 0x18004FCCC (RtlpTpWaitRundown.c)
 *     TpWaitForWait @ 0x18004FD20 (TpWaitForWait.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // ecx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h]
  int v10; // [rsp+78h] [rbp+20h]

  v7 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v4 = RtlpTpRevertCapture(&v7, 0LL);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    v5 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v8 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v8->ClientId.UniqueThread)) )
    {
      v5 = 0;
    }
    v10 = v5;
    if ( a2 == -1 )
    {
      if ( !v5 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v9 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v9 = 0;
    }
    if ( v9 )
      v4 = v10 == 0 ? 0x103 : 0;
    else
      v4 = 0;
  }
  RtlpTpResumeImpersonation(v7);
  return (unsigned int)v4;
}
