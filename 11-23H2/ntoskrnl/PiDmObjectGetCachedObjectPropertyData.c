/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1406D6394
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D69DC (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     PiDmCacheDataDecode @ 0x1406CC0C4 (PiDmCacheDataDecode.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D61F0 (PiDmGetCachedKeyIndex.c)
 *     PiDmGetCacheKeys @ 0x1406D6344 (PiDmGetCacheKeys.c)
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8120 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        _DWORD *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int Object; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v18; // rdi
  ULONG_PTR v19; // rcx
  int *v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-28h] BYREF
  DEVPROPKEY **v23; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v23 = 0LL;
  v22 = 0;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, &v23, &v22);
  if ( v22 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v23, v22, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      v18 = (__int64 *)BugCheckParameter2;
      v19 = BugCheckParameter2;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v19, 0LL);
      v20 = (int *)&v18[2 * v15 + 14 + v15];
      if ( (unsigned int)*v20 <= 1 )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v20, a5, a6, a7, a8);
      ExReleasePushLockEx(v18, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        PiDmObjectRelease(v18);
    }
  }
  return (unsigned int)Object;
}
