/*
 * XREFs of sub_14028A370 @ 0x14028A370
 * Callers:
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_140289D20 @ 0x140289D20 (sub_140289D20.c)
 *     sub_14028A258 @ 0x14028A258 (sub_14028A258.c)
 *     sub_14029C154 @ 0x14029C154 (sub_14029C154.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     CcMapData @ 0x1407BDE60 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x14090BB90 (CcUnpinDataForThread.c)
 * Callees:
 *     sub_1402368F4 @ 0x1402368F4 (sub_1402368F4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028A78C @ 0x14028A78C (sub_14028A78C.c)
 *     sub_14028AD10 @ 0x14028AD10 (sub_14028AD10.c)
 *     sub_14028D878 @ 0x14028D878 (sub_14028D878.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

LONG __fastcall sub_14028A370(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rdi
  LONG result; // eax
  __int64 v7; // rdi
  struct _KEVENT *v8; // rcx
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // r13
  volatile signed __int32 *v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int8 CurrentIrql; // r12
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int32 v21; // eax
  struct _KEVENT *v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // eax
  unsigned __int64 OldIrql; // rdi
  char **v26; // rdx
  PVOID *v27; // rcx
  __int64 v28; // rdi
  struct _KEVENT *v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  __int64 v38; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  result = 765;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_WORD *)P != 765 )
  {
    v7 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        result = KeSetEvent(v8, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 544));
    }
    return result;
  }
  v9 = *((_QWORD *)P + 22);
  v40 = *(_QWORD *)(v9 + 528);
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  CurrentThread = KeGetCurrentThread();
  v11 = (volatile signed __int32 *)(v9 + 280);
  v12 = 0LL;
  _disable();
  v13 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v13 = sub_14029F6A8(v9 + 280, CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v14, v13);
    *((_BYTE *)CurrentThread + 792) = v13 & ~(1 << v14);
    _enable();
    v12 = (__int64)CurrentThread + 96 * v14 + 1696;
    if ( (unsigned __int64)v11 - qword_140C50630 < 0x8000000000LL )
      v15 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v15 = -1;
    *(_DWORD *)(v12 + 8) = v15;
    *(_QWORD *)v12 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v11, 0) )
    sub_14029EF4C(v9 + 280, v12);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  *(_QWORD *)(v9 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v9 + 328) = CurrentIrql;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20498uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v23 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v40 + 704), &LockHandle);
      sub_14028AD10(v9, v23);
      v24 = *(_DWORD *)(v40 + 912) - v23;
      if ( *(_DWORD *)(v40 + 912) <= v23 )
        v24 = 0;
      *(_DWORD *)(v40 + 912) = v24;
      if ( !*(_DWORD *)(v9 + 112) && *(_DWORD *)(v9 + 4) )
        sub_1402368F4(v9);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v34 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    v18 = *((_DWORD *)P + 16);
  }
  else
  {
    v17 = *((_DWORD *)P + 16);
    if ( !v17 )
      KeBugCheckEx(0x34u, 0x461uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v17 - 1;
    *((_DWORD *)P + 16) = v18;
  }
  if ( v18 )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v20 = *(unsigned __int8 *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v21 = _InterlockedCompareExchange(v11, 1, 0);
    if ( !v21 )
      goto LABEL_27;
LABEL_43:
    sub_140359548(v9 + 280, v21);
LABEL_27:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v38 = *((_QWORD *)v36 + 4375);
          v34 = (v37 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v37;
          if ( v34 )
            sub_140418E4C(v36);
        }
      }
    }
    __writecr8(v20);
    return sub_1402AFC00(v9 + 280);
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v22 = *(struct _KEVENT **)(v19 + 184);
        if ( v22 )
          KeSetEvent(v22, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 544));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    v20 = *(unsigned __int8 *)(v9 + 328);
    *(_QWORD *)(v9 + 288) = 0LL;
    v21 = _InterlockedCompareExchange(v11, 1, 0);
    if ( !v21 )
      goto LABEL_27;
    goto LABEL_43;
  }
  ExAcquirePushLockExclusiveEx(v9 + 104, 0LL);
  v26 = (char **)*((_QWORD *)P + 2);
  v27 = (PVOID *)*((_QWORD *)P + 3);
  if ( v26[1] != P + 16 || *v27 != P + 16 )
    __fastfail(3u);
  *v27 = v26;
  v26[1] = (char *)v27;
  if ( *(__int64 *)(v9 + 32) > 0x2000000 && (*(_DWORD *)(v9 + 152) & 0x200) != 0 )
    sub_14028D878(v9, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  ExReleasePushLockEx(v9 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v29 = *(struct _KEVENT **)(v28 + 184);
      if ( v29 )
        KeSetEvent(v29, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v28 + 544));
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 280));
  return sub_14028A78C(P);
}
