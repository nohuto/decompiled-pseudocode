/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1402F8CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1402F95EC @ 0x1402F95EC (sub_1402F95EC.c)
 *     sub_14039F0DC @ 0x14039F0DC (sub_14039F0DC.c)
 *     sub_14039F294 @ 0x14039F294 (sub_14039F294.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  unsigned __int8 v4; // al
  __int64 Resource; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  struct _LIST_ENTRY *Flink; // rcx
  LIST_ENTRY *p_FilterContexts; // rax
  unsigned __int8 v15; // al
  PERESOURCE v16; // rdi
  int Blink; // eax
  struct _KTHREAD *v19; // rax
  int Blink_high; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+60h] [rbp+18h]

  if ( PerStreamContext && (PerStreamContext->Flags2 & 2) != 0 )
  {
    v4 = *((_BYTE *)&PerStreamContext->0 + 7) >> 4;
    if ( v4 < 3u )
    {
      if ( !v4 )
      {
        ExAcquireFastMutex(PerStreamContext->FastMutex);
        goto LABEL_15;
      }
    }
    else
    {
      Resource = (__int64)PerStreamContext[1].Resource;
      if ( Resource )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v7 = KeGetCurrentThread();
        v8 = 0LL;
        v21 = 0;
        _disable();
        v9 = *((unsigned __int8 *)v7 + 792);
        if ( *((_BYTE *)v7 + 792) || (v9 = sub_14029F6A8(Resource, (__int64)v7)) != 0 )
        {
          _BitScanForward((unsigned int *)&v10, v9);
          v21 = v10;
          *((_BYTE *)v7 + 792) = v9 & ~(1 << v10);
          _enable();
          v8 = (__int64)v7 + 96 * v10 + 1696;
          if ( (unsigned __int64)(Resource - qword_140C50630) < 0x8000000000LL )
            v11 = sub_140287F30(*((_QWORD *)v7 + 23));
          else
            v11 = -1;
          *(_DWORD *)(v8 + 8) = v11;
          *(_QWORD *)v8 = Resource & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)Resource, 0LL) )
          sub_14029F120((unsigned __int64 *)Resource, v8, Resource);
        v12 = *(_DWORD *)(Resource + 8);
        if ( (v12 & 1) != 0 )
          sub_14039F294(v12 & 0xFFFFFFF8, v8, Resource);
        if ( v8 )
          *(_BYTE *)(v8 + 18) = 1;
LABEL_15:
        Flink = PerStreamContext->FilterContexts.Flink;
        p_FilterContexts = &PerStreamContext->FilterContexts;
        if ( Flink->Blink != &PerStreamContext->FilterContexts )
          __fastfail(3u);
        Ptr->Links.Blink = p_FilterContexts;
        Ptr->Links.Flink = Flink;
        Flink->Blink = &Ptr->Links;
        p_FilterContexts->Flink = &Ptr->Links;
        v15 = *((_BYTE *)&PerStreamContext->0 + 7) >> 4;
        if ( v15 < 3u )
        {
          if ( !v15 )
          {
            KeReleaseGuardedMutex(PerStreamContext->FastMutex);
            return 0;
          }
        }
        else
        {
          v16 = PerStreamContext[1].Resource;
          if ( v16 )
          {
            Blink = (int)v16->SystemResourcesList.Blink;
            if ( (Blink & 1) != 0 )
            {
              sub_14039F0DC(Blink & 0xFFFFFFF8);
            }
            else
            {
              Blink_high = HIDWORD(v16->SystemResourcesList.Blink);
              if ( (unsigned __int8)sub_1402F95EC(&Blink_high) )
                HIDWORD(v16->SystemResourcesList.Blink) = Blink_high;
            }
            ExReleasePushLockEx((ULONG_PTR)v16, 2uLL);
            sub_1402AFC00((ULONG_PTR)v16);
            sub_1402F9540(KeGetCurrentThread());
            return 0;
          }
        }
        ExReleasePushLockEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
        sub_1402F9540(KeGetCurrentThread());
        return 0;
      }
    }
    v19 = KeGetCurrentThread();
    --*((_WORD *)v19 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
    goto LABEL_15;
  }
  return -1073741808;
}
