/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x14077B3D4
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x14077AF18 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x14077B4E4 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14077B534 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x14077B594 (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int Object; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v18; // rdi
  unsigned int *v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v22[0] = 0LL;
  v21 = 0;
  v10 = a1;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v22, &v21);
  if ( v21 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v22[0], v21, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(v10, a2, (__int64 *)&BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (unsigned int *)BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v19 = &v18[4 * v15 + 28 + 2 * v15];
      if ( *v19 <= 1 )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v19, a5, a6, a7, a8);
      ExReleasePushLockEx((ULONG_PTR)v18, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        PiDmObjectRelease(v18);
    }
  }
  return (unsigned int)Object;
}
