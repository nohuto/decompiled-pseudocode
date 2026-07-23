/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800EAB50
 * Callers:
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeActivationContext @ 0x1800896C4 (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800EAAB8 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    goto LABEL_14;
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v5 = g_SxsFreeActivationContexts;
    v6 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v6 + 8) != g_SxsFreeActivationContexts )
    {
      goto LABEL_14;
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v6 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v5 - 8);
  }
  if ( !g_SxsMaxDeadActivationContexts )
  {
    RtlpFreeActivationContext(a1);
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  v7 = (_QWORD *)(a1 + 8);
  v8 = (_QWORD *)qword_18017B0D0;
  if ( *(__int64 **)qword_18017B0D0 != &g_SxsFreeActivationContexts )
LABEL_14:
    __fastfail(3u);
  *v7 = &g_SxsFreeActivationContexts;
  *(_QWORD *)(a1 + 16) = v8;
  *v8 = v7;
  qword_18017B0D0 = a1 + 8;
  g_SxsCurrentDeadActivationContexts = i + 1;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
