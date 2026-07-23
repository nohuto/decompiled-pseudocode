/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1405418D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v6; // al
  PERESOURCE v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  struct _FSRTL_PER_STREAM_CONTEXT *v10; // rdi
  LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v15; // al
  PERESOURCE Resource; // rcx

  if ( StreamContext && (StreamContext->Flags2 & 2) != 0 )
  {
    v6 = *((_BYTE *)&StreamContext->0 + 7) >> 4;
    if ( v6 < 3u )
    {
      if ( !v6 )
      {
        ExAcquireFastMutex(StreamContext->FastMutex);
LABEL_9:
        v10 = 0LL;
        p_FilterContexts = &StreamContext->FilterContexts;
        Flink = StreamContext->FilterContexts.Flink;
        if ( InstanceId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
              goto LABEL_12;
            Flink = Flink->Flink;
          }
        }
        else if ( OwnerId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId )
              goto LABEL_12;
            Flink = Flink->Flink;
          }
        }
        else if ( Flink != p_FilterContexts )
        {
LABEL_12:
          v10 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
          if ( Flink )
          {
            v13 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink
              || (Blink = Flink->Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v10) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v13;
            v13->Blink = Blink;
          }
        }
        v15 = *((_BYTE *)&StreamContext->0 + 7) >> 4;
        if ( v15 < 3u )
        {
          if ( !v15 )
          {
            KeReleaseGuardedMutex(StreamContext->FastMutex);
            return v10;
          }
        }
        else
        {
          Resource = StreamContext[1].Resource;
          if ( Resource )
          {
            ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)Resource, 0LL);
LABEL_31:
            sub_1402F9540((__int64)KeGetCurrentThread());
            return v10;
          }
        }
        ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
        goto LABEL_31;
      }
    }
    else
    {
      v7 = StreamContext[1].Resource;
      if ( v7 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)v7, 0LL);
        goto LABEL_9;
      }
    }
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
    goto LABEL_9;
  }
  return 0LL;
}
