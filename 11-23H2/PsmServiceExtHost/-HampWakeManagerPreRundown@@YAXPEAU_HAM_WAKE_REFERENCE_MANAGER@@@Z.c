/*
 * XREFs of ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080E6C
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF10 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF6C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x180016F78 (CemRcTableGetFirst.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017704 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x18003F6C0 (CemRcTableGetNext.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE7C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080D24 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080EFC (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeManagerPreRundown(struct _HAM_WAKE_REFERENCE_MANAGER *a1, __int64 a2)
{
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v4; // rdi
  struct _HAM_CLIENT_CONTEXT *v5; // rcx

  HampWakeManagerAcquireLockExclusive(a1, a2);
  *((_BYTE *)a1 + 104) |= 1u;
  HampWakeManagerReleaseLockExclusive(a1);
  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v4 + 185) |= 0x20u;
    HampWakeContextQueueWorker(v4);
    HampWakeContextReleaseLockExclusive(v4);
    TpWaitForWork(*((_QWORD *)v4 + 12), 0LL);
  }
  v5 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 1);
  if ( v5 )
  {
    HampClientDisconnect(v5);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
