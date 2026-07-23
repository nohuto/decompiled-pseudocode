/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800E9FFC
 * Callers:
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeActivationContext @ 0x180085814 (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800E9F64 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  unsigned int i; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (_QWORD *)*v4 != v2 )
    goto LABEL_14;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v6 = g_SxsFreeActivationContexts;
    v7 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v7 + 8) != g_SxsFreeActivationContexts )
    {
      goto LABEL_14;
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v7 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v6 - 8);
  }
  if ( !g_SxsMaxDeadActivationContexts )
  {
    RtlpFreeActivationContext(a1);
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  v8 = (_QWORD *)qword_180185370;
  if ( *(__int64 **)qword_180185370 != &g_SxsFreeActivationContexts )
LABEL_14:
    __fastfail(3u);
  *v2 = &g_SxsFreeActivationContexts;
  *(_QWORD *)(a1 + 16) = v8;
  *v8 = v2;
  qword_180185370 = a1 + 8;
  g_SxsCurrentDeadActivationContexts = i + 1;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
