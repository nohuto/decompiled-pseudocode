/*
 * XREFs of ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x1800810B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF10 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF6C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800172AC (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800172E4 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017704 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x18008112C (-HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFEREN.c)
 */

void __fastcall HampWakeManagerActivityCallback(
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1,
        struct _HAM_WAKE_REFERENCE_MANAGER *a2)
{
  int v2; // r8d
  struct _HAM_HOST_WAKE_CONTEXT *ContextByActivityHandle; // rax
  __int64 v6; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *v7; // rbx

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 && (unsigned int)(v2 - 1) <= 1 )
  {
    HampWakeManagerAcquireLockShared(a2);
    ContextByActivityHandle = HampWakeManagerFindContextByActivityHandle(a2, *(_QWORD *)a1);
    v7 = ContextByActivityHandle;
    if ( ContextByActivityHandle )
    {
      HampWakeContextAcquireLockExclusive(ContextByActivityHandle);
      *((_BYTE *)v7 + 185) |= 4u;
      HampWakeContextQueueWorker(v7);
      HampWakeContextReleaseLockExclusive(v7);
    }
    HampWakeManagerReleaseLockShared(a2, v6);
  }
}
