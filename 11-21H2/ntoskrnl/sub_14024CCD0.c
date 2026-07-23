/*
 * XREFs of sub_14024CCD0 @ 0x14024CCD0
 * Callers:
 *     sub_140233104 @ 0x140233104 (sub_140233104.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     PsChargeProcessPoolQuota @ 0x140367C40 (PsChargeProcessPoolQuota.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14024CCD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  struct _KTHREAD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  PVOID v10; // rcx
  __int64 v11; // r10
  PVOID v12; // rax
  PVOID Pool2; // r15
  unsigned int v14; // esi
  char *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int16 v19; // ax
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  _QWORD *v24; // [rsp+68h] [rbp-40h]
  char *P; // [rsp+C0h] [rbp+18h]

  SubjectContext = 0LL;
  v3 = *(_QWORD **)(a2 + 56);
  v24 = v3;
  P = (char *)v3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = *v3;
  v6 = KeGetCurrentThread();
  if ( v6 != *(struct _KTHREAD **)(*v3 + 56LL) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v5);
    *(_QWORD *)(v5 + 56) = v6;
  }
  ++*(_DWORD *)(v5 + 64);
  v7 = a2 + 168;
  v8 = *(_QWORD *)(a2 + 168);
  if ( v8 )
  {
    v9 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v10 = (PVOID)v3[11];
  if ( v10 && !v3[10] )
  {
    if ( (v11 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v11 + 10) & 5) == 0
        ? (v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u), v10 = (PVOID)v3[11])
        : (v12 = *(PVOID *)(v11 + 24)),
          v12 == v10)
      || v10 == *(PVOID *)(a2 + 24) )
    {
      Pool2 = 0LL;
      v14 = 0;
      v15 = (char *)*((_QWORD *)P + 6);
      if ( v15 == P + 48 )
      {
        if ( *((_DWORD *)P + 24) >= *((_DWORD *)P + 26) )
          v14 = *((_DWORD *)P + 24);
      }
      else
      {
        v23 = *((_QWORD *)v15 + 2);
        if ( *(_DWORD *)(v23 + 8) >= *((_DWORD *)P + 26) )
        {
          v14 = *(_DWORD *)(v23 + 8);
          if ( *((_QWORD *)v15 - 18) )
          {
            Pool2 = (PVOID)*((_QWORD *)v15 - 18);
          }
          else
          {
            v16 = *((_QWORD *)v15 - 20);
            if ( v16 )
            {
              if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
              {
                Pool2 = *(PVOID *)(v16 + 24);
              }
              else
              {
                Pool2 = MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000010u);
                v14 = *(_DWORD *)(v23 + 8);
              }
            }
          }
          if ( v14 > *((_DWORD *)P + 24) )
            v14 = *((_DWORD *)P + 24);
        }
      }
      if ( v14 )
      {
        if ( !Pool2 )
        {
          v17 = PsChargeProcessPoolQuota(*((PEPROCESS *)P + 15), PagedPool, v14);
          if ( v17 < 0 )
            RtlRaiseStatus(v17);
          Pool2 = (PVOID)ExAllocatePool2(290LL, v14, 1316115270LL, v18);
          *((_QWORD *)P + 10) = Pool2;
        }
        memmove(Pool2, *((const void **)P + 11), *((unsigned int *)P + 26));
        *((_DWORD *)P + 25) = v14;
        *((_QWORD *)P + 11) = Pool2;
        v19 = *((_WORD *)v24 + 36);
      }
      else
      {
        *((_WORD *)P + 36) |= 2u;
        v19 = *((_WORD *)P + 36);
      }
      if ( (v19 & 2) != 0 )
      {
        *((_QWORD *)P + 11) = 0LL;
        *((_QWORD *)P + 10) = 0LL;
        *((_QWORD *)P + 13) = 0LL;
        *((_DWORD *)P + 25) = 0;
      }
    }
  }
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)*((_QWORD *)P + 3);
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v5 + 64))-- == 1 )
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v5);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return sub_1402F9540(KeGetCurrentThread());
}
