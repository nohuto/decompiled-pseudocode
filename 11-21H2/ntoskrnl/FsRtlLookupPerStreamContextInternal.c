/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1402AE630
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021C64C @ 0x14021C64C (sub_14021C64C.c)
 *     sub_14023642C @ 0x14023642C (sub_14023642C.c)
 *     sub_140259E60 @ 0x140259E60 (sub_140259E60.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v4; // al
  __int64 Resource; // rdi
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  struct _LIST_ENTRY *Flink; // rax
  LIST_ENTRY *p_FilterContexts; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v18; // rsi
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rbx
  unsigned int v21; // edi
  struct _KTHREAD *v22; // rdx
  bool v23; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v4 = *((_BYTE *)&StreamContext->0 + 7) >> 4;
  if ( v4 < 3u )
  {
    if ( !v4 )
    {
      ExAcquireFastMutex(StreamContext->FastMutex);
      goto LABEL_32;
    }
LABEL_31:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
LABEL_32:
    v15 = 0LL;
    goto LABEL_13;
  }
  Resource = (__int64)StreamContext[1].Resource;
  if ( !Resource )
    goto LABEL_31;
  v8 = KeGetCurrentThread();
  --*((_WORD *)v8 + 242);
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  _disable();
  v11 = *((unsigned __int8 *)v9 + 792);
  if ( *((_BYTE *)v9 + 792) || (v11 = sub_14029F6A8(Resource, (__int64)v9)) != 0 )
  {
    _BitScanForward((unsigned int *)&v12, v11);
    *((_BYTE *)v9 + 792) = v11 & ~(1 << v12);
    _enable();
    v10 = (__int64)v9 + 96 * v12 + 1696;
    if ( (unsigned __int64)(Resource - qword_140C50630) < 0x8000000000LL )
      v13 = sub_140287F30(*((_QWORD *)v9 + 23));
    else
      v13 = -1;
    *(_DWORD *)(v10 + 8) = v13;
    *(_QWORD *)v10 = Resource & 0x7FFFFFFFFFFFFFFCLL;
  }
  v14 = *(_DWORD *)(Resource + 8);
  if ( (v14 & 1) != 0 )
  {
    v15 = (__int64)sub_14023642C(v14 & 0xFFFFFFF8, 0, v10, Resource);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Resource, 17LL, 0LL) )
      sub_14029F350((signed __int64 *)Resource, 0, v10, Resource);
    v15 = Resource | 1;
  }
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
LABEL_13:
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  v18 = 0LL;
  if ( InstanceId )
  {
    if ( Flink != p_FilterContexts )
    {
      while ( Flink[1].Flink != OwnerId || Flink[1].Blink != InstanceId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_18;
      }
LABEL_17:
      v18 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == p_FilterContexts )
        goto LABEL_18;
      while ( Flink[1].Flink != OwnerId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_18;
      }
      goto LABEL_17;
    }
    if ( Flink != p_FilterContexts )
      v18 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
LABEL_18:
  v19 = *((_BYTE *)&StreamContext->0 + 7) >> 4;
  if ( v19 < 3u )
  {
    if ( !v19 )
    {
      KeReleaseGuardedMutex(StreamContext->FastMutex);
      return v18;
    }
  }
  else if ( StreamContext[1].Resource )
  {
    v29 = 0LL;
    v20 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v15 & 1) != 0 )
    {
      _m_prefetchw((const void *)(v20 + 12));
      v21 = *(_DWORD *)(v20 + 12);
      if ( v21 >= 0x80000000 && (*(_DWORD *)(v20 + 8) & 3) == 0 )
      {
        if ( (unsigned __int16)v21 < (unsigned int)dword_140D05104
          || (v21 & 0xF0000) >= 0xF0000
          || KeGetCurrentIrql() >= 2u )
        {
          v21 = (v21 >> 2) & 0x3FF33FFF;
          *(_DWORD *)(v20 + 12) = v21;
        }
        else
        {
          sub_140259E60(v20);
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) == 17 )
      {
LABEL_23:
        if ( v21 < 0x80000000 )
          *(_DWORD *)(v20 + 12) = v21 + 0x100000;
        goto LABEL_25;
      }
      if ( (v21 & dword_140D0519C) == 0 )
      {
        sub_14021C64C((signed __int64 *)v20, &v29);
        if ( !v29 )
          goto LABEL_25;
        v27 = *(_DWORD *)(v20 + 12);
        if ( v27 >= 0x80000000 )
          goto LABEL_25;
        v28 = v29 >> byte_140D05017;
        if ( v29 >> byte_140D05017 > 0x1FF )
          LODWORD(v28) = 511;
        v21 = v28 + v27;
        goto LABEL_23;
      }
      sub_14021C64C((signed __int64 *)v20, 0LL);
      v26 = *(_DWORD *)(v20 + 12);
      if ( v26 < 0x80000000 )
        *(_DWORD *)(v20 + 12) = v26 + 0x100000;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15 & 0xFFFFFFFFFFFFFFFCuLL);
      v20 = *(_QWORD *)(v20 + 8);
    }
LABEL_25:
    sub_1402AFC00(v20);
    v22 = KeGetCurrentThread();
    v23 = (*((_WORD *)v22 + 242))++ == 0xFFFF;
    if ( v23 && *((struct _KTHREAD **)v22 + 19) != (struct _KTHREAD *)((char *)v22 + 152) && !*((_WORD *)v22 + 243) )
    {
      KiCheckForKernelApcDelivery();
      return v18;
    }
    return v18;
  }
  ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  sub_1402F9540(KeGetCurrentThread());
  return v18;
}
