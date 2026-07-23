/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x140930090 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 *     FsRtlNotifyInitializeSync @ 0x1406AC3A0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406E5920 (FsRtlNotifyUninitializeSync.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        struct _REAL_NOTIFY_SYNC **a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  const void **v10; // r13
  struct _REAL_NOTIFY_SYNC **v11; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v14; // rax
  struct _REAL_NOTIFY_SYNC *v15; // r12
  char *v16; // rdi
  __int16 *v17; // rbx
  char v18; // r14
  __int16 v19; // cx
  unsigned int v20; // r12d
  unsigned __int16 *v21; // rdx
  unsigned int v22; // r14d
  unsigned int v23; // r13d
  _DWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 Pool2; // rax
  __int64 v29; // rcx
  char *v30; // rbx
  char *v31; // rbx
  __int16 v32; // cx
  __int16 v33; // ax
  char v34; // [rsp+31h] [rbp-A7h]
  struct _REAL_NOTIFY_SYNC *v35; // [rsp+50h] [rbp-88h]
  PNOTIFY_SYNC NotifySync[4]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int16 *v37; // [rsp+80h] [rbp-58h]
  char *v38; // [rsp+88h] [rbp-50h]
  const void **v40; // [rsp+F0h] [rbp+18h]

  v40 = a3;
  v10 = a4;
  v11 = a2;
  if ( *a2 == (struct _REAL_NOTIFY_SYNC *)a2 || a10 && *(_DWORD *)a10 < 0x50u )
    return;
  if ( !*a1 )
  {
    NotifySync[0] = 0LL;
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v14 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v14 = *a1;
  }
  ++*(_DWORD *)(v14 + 64);
  v15 = *v11;
  while ( 1 )
  {
    NotifySync[2] = v15;
    v35 = v15;
    if ( v15 == (struct _REAL_NOTIFY_SYNC *)v11 )
      break;
    v16 = (char *)v15 - 32;
    NotifySync[1] = (struct _REAL_NOTIFY_SYNC *)((char *)v15 - 32);
    v38 = (char *)v15 - 32;
    v17 = (__int16 *)((char *)v15 + 40);
    v18 = (unsigned __int8)*v17 >> 7;
    v34 = v18;
    if ( (*((_DWORD *)v15 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v17 & 1) != 0 && (!*((_QWORD *)v16 + 2) || (unsigned __int8)sub_14042A5E0(*((_QWORD *)v16 + 1), a7)))
      && (!*((_QWORD *)v16 + 8) || !a8 || (unsigned __int8)sub_14042A5E0(*((_QWORD *)v16 + 1), a8)) )
    {
      v19 = *v17;
      if ( (*v17 & 2) == 0 )
      {
        v20 = *((_DWORD *)v16 + 24);
        if ( v20 )
        {
          v21 = 0LL;
          v37 = 0LL;
          if ( *((_DWORD *)v16 + 25) )
          {
            v20 = *((_DWORD *)v16 + 25);
          }
          else
          {
            a3 = (const void **)*((_QWORD *)v16 + 6);
            if ( a3 != (const void **)(v16 + 48) )
            {
              v21 = (unsigned __int16 *)(a3 - 21);
              v37 = (unsigned __int16 *)(a3 - 21);
              v20 = *((_DWORD *)a3[2] + 2);
            }
          }
          v22 = *(unsigned __int16 *)v40 + (v18 != 0 ? 84 : 12);
          if ( v10 )
            v22 += *(unsigned __int16 *)v10 + 2;
          v23 = (*((_DWORD *)v16 + 26) + 3) & 0xFFFFFFFC;
          if ( v22 > v20 || v22 + v23 > v20 )
          {
            v32 = v19 | 2;
            *v17 = v32;
            v15 = v35;
          }
          else
          {
            v24 = 0LL;
            v25 = *((_QWORD *)v16 + 11);
            if ( v25 )
            {
              *(_DWORD *)(v25 + *((unsigned int *)v16 + 27)) = v23 - *((_DWORD *)v16 + 27);
              *((_DWORD *)v16 + 27) = v23;
              v24 = (_DWORD *)(*((_QWORD *)v16 + 11) + v23);
            }
            else
            {
              if ( !v21 )
                goto LABEL_30;
              v26 = *((_QWORD *)v21 + 3);
              if ( v26 )
              {
                v24 = (_DWORD *)*((_QWORD *)v21 + 3);
                *((_QWORD *)v16 + 11) = v26;
              }
              else
              {
                v27 = *((_QWORD *)v21 + 1);
                if ( !v27 )
                  goto LABEL_30;
                if ( (*(_BYTE *)(v27 + 10) & 5) != 0 )
                  v24 = *(_DWORD **)(v27 + 24);
                else
                  v24 = MmMapLockedPagesSpecifyCache((PMDL)v27, 0, MmCached, 0LL, 0, 0x40000010u);
                *((_QWORD *)v16 + 11) = v24;
              }
              *((_DWORD *)v16 + 25) = v20;
            }
LABEL_30:
            if ( !*((_QWORD *)v16 + 11) )
            {
              PsChargePoolQuota(*((PEPROCESS *)v16 + 15), PagedPool, v20);
              Pool2 = ExAllocatePool2(290LL, v20, 1316115270LL);
              *((_QWORD *)v16 + 11) = Pool2;
              *((_QWORD *)v16 + 10) = Pool2;
              *((_DWORD *)v16 + 25) = v20;
              v24 = (_DWORD *)*((_QWORD *)v16 + 11);
            }
            v15 = v35;
            if ( v24 )
            {
              v29 = *((unsigned int *)v16 + 26);
              if ( v23 > (unsigned int)v29 )
                memset((void *)(*((_QWORD *)v16 + 11) + v29), 0, v23 - (unsigned int)v29);
              *v24 = 0;
              v24[1] = a6;
              if ( v34 )
              {
                *((_QWORD *)v24 + 1) = *(_QWORD *)(a10 + 8);
                *((_QWORD *)v24 + 2) = *(_QWORD *)(a10 + 16);
                *((_QWORD *)v24 + 3) = *(_QWORD *)(a10 + 24);
                *((_QWORD *)v24 + 4) = *(_QWORD *)(a10 + 32);
                *((_QWORD *)v24 + 5) = *(_QWORD *)(a10 + 40);
                *((_QWORD *)v24 + 6) = *(_QWORD *)(a10 + 48);
                v24[14] = *(_DWORD *)(a10 + 56);
                v24[15] = *(_DWORD *)(a10 + 60);
                *((_QWORD *)v24 + 8) = *(_QWORD *)(a10 + 64);
                *((_QWORD *)v24 + 9) = *(_QWORD *)(a10 + 72);
                v24[20] = v22 - 84;
                v30 = (char *)(v24 + 21);
              }
              else
              {
                v24[2] = v22 - 12;
                v30 = (char *)(v24 + 3);
              }
              memmove(v30, v40[1], *(unsigned __int16 *)v40);
              if ( a4 )
              {
                v31 = &v30[*(unsigned __int16 *)v40];
                *(_WORD *)v31 = 58;
                memmove(v31 + 2, a4[1], *(unsigned __int16 *)a4);
              }
              *((_DWORD *)v16 + 26) = v22 + v23;
            }
            v17 = (__int16 *)(v38 + 72);
            v32 = *((_WORD *)v38 + 36);
          }
          if ( (v32 & 2) != 0 && *((_QWORD *)v16 + 11) )
          {
            if ( *((_QWORD *)v16 + 10) )
            {
              PsReturnProcessPagedPoolQuota(*((_QWORD *)v16 + 15), *((unsigned int *)v16 + 25));
              ExFreePoolWithTag(*((PVOID *)v16 + 10), 0);
            }
            *((_QWORD *)v16 + 11) = 0LL;
            *((_QWORD *)v16 + 10) = 0LL;
            *((_QWORD *)v16 + 13) = 0LL;
            *((_DWORD *)v16 + 25) = 0;
          }
          v10 = a4;
        }
        else
        {
          v15 = v35;
        }
      }
      v33 = *v17;
      if ( a6 == 4 )
      {
        *v17 = v33 | 8;
      }
      else
      {
        *v17 = v33 & 0xFFF7;
        if ( *((char **)v16 + 6) != v16 + 48 )
          sub_1406ABBF4(v16, 0LL, a3);
      }
    }
    v15 = *(struct _REAL_NOTIFY_SYNC **)v15;
    v11 = a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
