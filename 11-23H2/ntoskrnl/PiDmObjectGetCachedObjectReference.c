/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1407CC404
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D6A0C (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D6220 (PiDmGetCachedKeyIndex.c)
 *     PiDmGetCacheKeys @ 0x1406D6374 (PiDmGetCacheKeys.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 *a5)
{
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // r14
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdi
  ULONG_PTR v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h] BYREF
  DEVPROPKEY **v21; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v21 = 0LL;
  v20 = 0;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v21, &v20);
  if ( v20 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v20, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      v15 = (__int64 *)BugCheckParameter2;
      v16 = BugCheckParameter2;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v16, 0LL);
      v17 = v15[3 * v12 + 14];
      if ( v17 == 6 )
      {
        v18 = v15[3 * v12 + 16];
        *a5 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v15 = (__int64 *)BugCheckParameter2;
        Object = 0;
      }
      else if ( v17 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 )
        PiDmObjectRelease((char *)v15);
    }
  }
  return (unsigned int)Object;
}
