/*
 * XREFs of ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007C544
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180001730 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18000176C (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x180005910 (CemRcTableGetFirst.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180007DD8 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800348BC (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800348F8 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 */

void __fastcall HampWakeManagerPreRundown(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 v2; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  __int64 v4; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *v5; // rdi
  struct _HAM_CLIENT_CONTEXT *v6; // rcx

  HampWakeManagerAcquireLockExclusive(a1);
  *((_BYTE *)a1 + 104) |= 1u;
  HampWakeManagerReleaseLockExclusive(a1, v2);
  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v5) )
  {
    v5 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v5 + 185) |= 0x20u;
    HampWakeContextQueueWorker(v5);
    HampWakeContextReleaseLockExclusive(v5, v4);
    TpWaitForWork(*((_QWORD *)v5 + 12), 0LL);
  }
  v6 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 1);
  if ( v6 )
  {
    HampClientDestroy(v6);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
