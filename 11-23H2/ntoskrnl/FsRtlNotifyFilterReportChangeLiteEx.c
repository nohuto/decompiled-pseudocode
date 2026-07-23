/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x140940270 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     PsChargePoolQuota @ 0x140207F00 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     RtlUIntAdd @ 0x1402505AC (RtlUIntAdd.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14068A9F0 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1407C51D0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1408737D0 (FsRtlNotifyUninitializeSync.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  _QWORD **v10; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  unsigned __int8 (__fastcall *v15)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v16)(_QWORD); // rax
  UINT v17; // r12d
  _QWORD *v18; // rcx
  int v19; // eax
  int v20; // r14d
  UINT v21; // r14d
  NTSTATUS v22; // eax
  __int64 v23; // r9
  __int16 v24; // r10
  unsigned int v25; // r11d
  _DWORD *v26; // rbx
  __int64 *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 Pool2; // rax
  UINT v32; // r12d
  __int64 v33; // rcx
  char *v34; // rbx
  char *v35; // rbx
  __int16 v36; // ax
  UINT puResult[2]; // [rsp+48h] [rbp-C0h] BYREF
  UINT v38; // [rsp+50h] [rbp-B8h]
  UINT *v39; // [rsp+58h] [rbp-B0h]
  UINT v40; // [rsp+60h] [rbp-A8h]
  PNOTIFY_SYNC NotifySync[2]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD *v42; // [rsp+78h] [rbp-90h]
  _QWORD *v43; // [rsp+80h] [rbp-88h]
  _QWORD *v44; // [rsp+88h] [rbp-80h]
  _QWORD *v45; // [rsp+90h] [rbp-78h]
  NTSTATUS v46; // [rsp+98h] [rbp-70h]
  _QWORD *v47; // [rsp+A0h] [rbp-68h]
  _DWORD *v48; // [rsp+A8h] [rbp-60h]
  _BYTE *v49; // [rsp+B0h] [rbp-58h]
  _QWORD *v50; // [rsp+B8h] [rbp-50h]

  v10 = (_QWORD **)a2;
  puResult[1] = 0;
  puResult[0] = 0;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x58u )
    return;
  if ( !*a1 )
  {
    NotifySync[0] = 0LL;
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  ++*(_DWORD *)(*a1 + 64);
  v13 = *v10;
  while ( 1 )
  {
    v44 = v13;
    v43 = v13;
    if ( v13 == v10 )
      break;
    v14 = v13 - 4;
    NotifySync[1] = (PNOTIFY_SYNC)(v13 - 4);
    v50 = v13 - 4;
    if ( (*((_DWORD *)v13 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (v14[9] & 1) != 0
       && ((v15 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))v14[2]) == 0LL || v15(v14[1], a7, v14[3]))) )
    {
      v16 = (unsigned __int8 (__fastcall *)(_QWORD))v14[8];
      if ( !v16 || !a8 || v16(v14[1]) )
      {
        v49 = v14 + 9;
        if ( (v14[9] & 2) == 0 )
        {
          v17 = *((_DWORD *)v14 + 24);
          if ( v17 )
          {
            v47 = 0LL;
            v39 = (UINT *)v14 + 25;
            if ( *((_DWORD *)v14 + 25) )
            {
              v17 = *((_DWORD *)v14 + 25);
            }
            else
            {
              v18 = (_QWORD *)v14[6];
              if ( v18 != v14 + 6 )
              {
                v47 = v18 - 21;
                v17 = *(_DWORD *)(v18[2] + 8LL);
              }
            }
            v48 = (_DWORD *)v14 + 29;
            v19 = *((_DWORD *)v14 + 29);
            if ( v19 == 3 )
            {
              v20 = 84;
            }
            else
            {
              v20 = 12;
              if ( v19 == 2 )
                v20 = 84;
            }
            v21 = *(unsigned __int16 *)a3 + v20;
            if ( a4 )
              v21 += *(unsigned __int16 *)a4 + 2;
            v42 = v14 + 13;
            v38 = (*((_DWORD *)v14 + 26) + 3) & 0xFFFFFFFC;
            v40 = v38;
            v22 = RtlUIntAdd(v38, v21, puResult);
            v46 = v22;
            if ( v21 > v17 || v22 || puResult[0] > v17 )
            {
              *((_WORD *)v14 + 36) = v24 | 2;
              v27 = v14 + 11;
            }
            else
            {
              v26 = 0LL;
              v27 = v14 + 11;
              v45 = v14 + 11;
              v28 = v14[11];
              if ( v28 )
              {
                *(_DWORD *)(v28 + *((unsigned int *)v14 + 27)) = v25 - *((_DWORD *)v14 + 27);
                *((_DWORD *)v14 + 27) = v25;
                v26 = (_DWORD *)(*v27 + v25);
                goto LABEL_46;
              }
              if ( v23 )
              {
                v29 = *(_QWORD *)(v23 + 24);
                if ( v29 )
                {
                  v26 = *(_DWORD **)(v23 + 24);
                  *v27 = v29;
                  goto LABEL_45;
                }
                v30 = *(_QWORD *)(v23 + 8);
                if ( v30 )
                {
                  if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
                    v26 = *(_DWORD **)(v30 + 24);
                  else
                    v26 = MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, 0x40000010u);
                  *v27 = (__int64)v26;
LABEL_45:
                  *v39 = v17;
                }
              }
LABEL_46:
              if ( !*v27 )
              {
                PsChargePoolQuota((PEPROCESS)v14[15], PagedPool, v17);
                Pool2 = ExAllocatePool2(290LL, v17, 1316115270LL);
                *v27 = Pool2;
                v14[10] = Pool2;
                *v39 = v17;
                v26 = (_DWORD *)*v27;
              }
              v32 = v38;
              if ( v26 )
              {
                v33 = (unsigned int)*v42;
                if ( v38 > (unsigned int)v33 )
                  memset((void *)(*v27 + v33), 0, v38 - (unsigned int)v33);
                *v26 = 0;
                v26[1] = a6;
                if ( *v48 == 3 )
                {
                  *((_QWORD *)v26 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v26 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v26 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v26 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v26 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v26 + 6) = *(_QWORD *)(a10 + 48);
                  v26[14] = *(_DWORD *)(a10 + 56);
                  v26[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v26 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v26 + 9) = *(_QWORD *)(a10 + 72);
                  *((_WORD *)v26 + 40) = v21 - 84;
                  *((_BYTE *)v26 + 82) = *(_BYTE *)(a10 + 80);
                  *((_BYTE *)v26 + 83) = 0;
                  goto LABEL_55;
                }
                if ( *v48 == 2 )
                {
                  *((_QWORD *)v26 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v26 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v26 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v26 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v26 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v26 + 6) = *(_QWORD *)(a10 + 48);
                  v26[14] = *(_DWORD *)(a10 + 56);
                  v26[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v26 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v26 + 9) = *(_QWORD *)(a10 + 72);
                  v26[20] = v21 - 84;
LABEL_55:
                  v34 = (char *)(v26 + 21);
                }
                else
                {
                  v26[2] = v21 - 12;
                  v34 = (char *)(v26 + 3);
                }
                memmove(v34, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v35 = &v34[*(unsigned __int16 *)a3];
                  *(_WORD *)v35 = 58;
                  memmove(v35 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *v42 = v32 + v21;
              }
              v13 = v43;
            }
            if ( (*v49 & 2) != 0 && *v27 )
            {
              if ( v14[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v14[15], *v39);
                ExFreePoolWithTag((PVOID)v14[10], 0);
              }
              *v27 = 0LL;
              v14[10] = 0LL;
              *((_DWORD *)v14 + 27) = 0;
              *v42 = 0;
              *v39 = 0;
            }
          }
        }
        v36 = *((_WORD *)v50 + 36);
        if ( a6 == 4 )
        {
          *((_WORD *)v50 + 36) = v36 | 8;
        }
        else
        {
          *((_WORD *)v50 + 36) = v36 & 0xFFF7;
          if ( (_QWORD *)v14[6] != v14 + 6 )
            FsRtlNotifyCompleteIrpList(v14, 0LL);
        }
      }
    }
    v13 = (_QWORD *)*v13;
    v10 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
