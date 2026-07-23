/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1407B1200
 * Callers:
 *     sub_14074B878 @ 0x14074B878 (sub_14074B878.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  LIST_ENTRY *p_FilterContexts; // rbx
  unsigned __int8 v3; // al
  PERESOURCE Resource; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v7; // rax
  unsigned __int8 v8; // al
  PERESOURCE v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KTHREAD *v12; // rax
  unsigned __int8 v13; // al
  PERESOURCE v14; // rcx

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    v3 = *((_BYTE *)&AdvancedHeader->0 + 7) >> 4;
    if ( v3 < 3u || (Resource = AdvancedHeader[1].Resource) == 0LL )
    {
      if ( !v3 )
        goto LABEL_19;
      goto LABEL_17;
    }
LABEL_4:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)Resource, 0LL);
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v7 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v7->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v7;
      v7->Blink = p_FilterContexts;
      v8 = *((_BYTE *)&AdvancedHeader->0 + 7) >> 4;
      if ( v8 >= 3u && (v9 = AdvancedHeader[1].Resource) != 0LL )
      {
        ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v9, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
      }
      else if ( v8 )
      {
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
      }
      else
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      sub_14042A5E0(Flink, v10);
      v11 = *((_BYTE *)&AdvancedHeader->0 + 7) >> 4;
      if ( v11 >= 3u )
      {
        Resource = AdvancedHeader[1].Resource;
        if ( Resource )
          goto LABEL_4;
      }
      if ( v11 )
      {
LABEL_17:
        v12 = KeGetCurrentThread();
        --*((_WORD *)v12 + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      }
      else
      {
LABEL_19:
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
    }
    v13 = *((_BYTE *)&AdvancedHeader->0 + 7) >> 4;
    if ( v13 >= 3u && (v14 = AdvancedHeader[1].Resource) != 0LL )
    {
      ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)v14, 0LL);
    }
    else
    {
      if ( !v13 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
        return;
      }
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    }
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
}
