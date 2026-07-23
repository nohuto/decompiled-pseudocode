/*
 * XREFs of VfDeadlockReleaseResource @ 0x140AD8ECC
 * Callers:
 *     ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140ADA0D0 (ViDeadlockExReleaseFastMutexUnsafe_Entry.c)
 *     ViDeadlockExReleaseFastMutex_Entry @ 0x140ADA100 (ViDeadlockExReleaseFastMutex_Entry.c)
 *     ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140ADA3C0 (ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry.c)
 *     ViDeadlockKeReleaseMutant_Entry @ 0x140ADA400 (ViDeadlockKeReleaseMutant_Entry.c)
 *     ViDeadlockKeReleaseMutex_Entry @ 0x140ADA430 (ViDeadlockKeReleaseMutex_Entry.c)
 *     ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140ADA460 (ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry.c)
 *     ViDeadlockKeReleaseSpinLock_Entry @ 0x140ADA490 (ViDeadlockKeReleaseSpinLock_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1405D1B48 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1BC0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140AC179A (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x140AD9DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD9E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140ADA280 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140ADA830 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140ADAC20 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140ADAD80 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140ADAE28 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140ADAFA0 (ViIsThreadInsidePagingCodePaths.c)
 */

void __fastcall VfDeadlockReleaseResource(LONG *a1, int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // rdi
  int v8; // r12d
  __int64 *v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r10d
  unsigned __int8 v13; // si
  __int64 v14; // rbx
  int *v15; // rax
  int *v16; // rsi
  int v17; // eax
  __int16 v18; // cx
  ULONG_PTR v19; // rax
  __int64 v20; // r12
  __int64 *v21; // rdi
  __int16 v22; // cx
  _DWORD *v23; // rax
  unsigned int v24; // eax
  __int64 **v25; // rcx
  __int64 *v26; // rax
  __int64 **v27; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  unsigned __int8 v31; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[8]; // [rsp+50h] [rbp-88h] BYREF

  v4 = a2;
  Entry = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  v8 = 0;
  if ( !ViDeadlockCanProceed(a1)
    || (unsigned int)ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  if ( (_WORD)v11 )
  {
    if ( (unsigned __int16)v11 >= 8u )
      goto LABEL_9;
  }
  else
  {
    BackTrace[0] = a4;
    v11 = 1LL;
  }
  BackTrace[v11] = 0LL;
LABEL_9:
  v31 = ViRaiseIrqlToDpcLevel();
  v13 = v31;
  ViDeadlockDetectionLock(v12);
  v14 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v15 = (int *)ViDeadlockSearchResource(a1, &Entry);
    v16 = v15;
    if ( !v15 )
    {
LABEL_57:
      v13 = v31;
      goto LABEL_58;
    }
    v17 = *v15;
    if ( v17 == (_DWORD)v4 )
      goto LABEL_15;
    if ( v17 == 7 )
    {
      if ( (unsigned int)(v4 - 5) <= 1 )
      {
        *v16 = v4;
        v17 = v4;
        goto LABEL_15;
      }
    }
    else if ( v17 == 1 && (_DWORD)v4 == 2 )
    {
      if ( *((_WORD *)v16 + 3) > 1u )
        *((_WORD *)v16 + 3) = 1;
LABEL_15:
      v18 = *((_WORD *)v16 + 3);
      if ( v18 )
      {
        v10 = (__int64 *)*((_QWORD *)v16 + 2);
        v20 = *v10;
        if ( (unsigned int)(v17 - 5) <= 1 )
          v21 = (__int64 *)v10[1];
        else
          v21 = (__int64 *)v10[2];
        v22 = v18 - 1;
        *((_WORD *)v16 + 3) = v22;
        if ( v22 )
        {
          v8 = 0;
        }
        else
        {
          v23 = ViDeadlockGlobals;
          *((_QWORD *)v16 + 2) = 0LL;
          ++v23[8210];
          if ( (int *)v21[7] == v16 )
          {
            *((_DWORD *)v21 + 18) &= ~1u;
            v9 = v21;
          }
          else
          {
            ++v23[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v21[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v16] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v21[7] + 8),
                v10,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140C0DE54,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v21[7] + 8),
                v10);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v21[7] + 8),
                (ULONG_PTR)v10,
                byte_140C0DE54);
            }
            while ( (int *)v21[7] != v16 )
            {
              v21 = (__int64 *)*v21;
              if ( !v21 )
                goto LABEL_39;
            }
            v9 = v21;
            v24 = v21[9] & 0xFFFFFFFE;
            *((_DWORD *)v21 + 18) = v24;
            if ( (v24 & 4) == 0 )
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
            *((_DWORD *)v21 + 18) |= 4u;
          }
LABEL_39:
          if ( (unsigned int)(*v16 - 5) <= 1 )
          {
            v27 = (__int64 **)v10[1];
            if ( v27 )
            {
              do
              {
                if ( ((_DWORD)v27[9] & 1) != 0 && v27[8] == v10 )
                  break;
                v28 = *v27;
                v10[1] = (__int64)*v27;
                v27 = (__int64 **)v28;
              }
              while ( v28 );
            }
          }
          else
          {
            v25 = (__int64 **)v10[2];
            if ( v25 )
            {
              do
              {
                if ( ((_DWORD)v25[9] & 1) != 0 && v25[8] == v10 )
                  break;
                v26 = *v25;
                v10[2] = (__int64)*v25;
                v25 = (__int64 **)v26;
              }
              while ( v26 );
            }
          }
          if ( !v9 )
            goto LABEL_55;
          v9[8] = 0LL;
          --*((_DWORD *)v10 + 10);
          if ( v20 != a3 )
            *((_DWORD *)v9 + 18) |= 4u;
          if ( *((_DWORD *)v10 + 10) )
          {
LABEL_55:
            v8 = 0;
          }
          else
          {
            v8 = 1;
            ViDeadlockRemoveThread((__int64)v10);
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3);
        ViDeadlockPreprocessOptions(
          &dword_140C0DE68,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v19 = ViDeadlockSearchThread(a3);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v16, v19, &dword_140C0DE68);
      }
      goto LABEL_56;
    }
    ViDeadlockPreprocessOptions(
      byte_140C0DE64,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v16, v4, byte_140C0DE64);
LABEL_56:
    *(_OWORD *)(v16 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v16 + 50) = *(_OWORD *)&BackTrace[2];
    *(_OWORD *)(v16 + 54) = *(_OWORD *)&BackTrace[4];
    *(_OWORD *)(v16 + 58) = *(_OWORD *)&BackTrace[6];
    goto LABEL_57;
  }
LABEL_58:
  if ( MEMORY[0xFFFFF78000000320] - v14 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v14;
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v13);
  v29 = Entry;
  if ( Entry )
  {
    do
    {
      v30 = (_QWORD *)*v29;
      ViDeadlockFree(v29);
      v29 = v30;
    }
    while ( v30 );
  }
  if ( v8 )
    ViDeadlockFree(v10);
}
