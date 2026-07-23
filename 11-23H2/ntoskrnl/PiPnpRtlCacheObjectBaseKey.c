/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x140789548
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1406D64E0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     _PnpOpenObjectRegKey @ 0x1406CF990 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789650 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1407896F8 (PiPnpRtlObjectEventCreate.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a3 >= 7 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
    if ( CurrentOperation >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, (unsigned int)a3, v12, &v13);
      if ( CurrentOperation >= 0 && v13 )
      {
        v11 = (_QWORD *)(v13 + 16);
        if ( *(_QWORD *)(v13 + 16)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v11), CurrentOperation >= 0) )
        {
          *a4 = *v11;
        }
        else
        {
          *v11 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)CurrentOperation;
}
