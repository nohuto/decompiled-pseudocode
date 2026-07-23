/*
 * XREFs of MmReapplyBootPatchImports @ 0x140B750B4
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiInitializeDriverPatchState @ 0x140697230 (MiInitializeDriverPatchState.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 *     MiUnlockDriverPages @ 0x140875FFC (MiUnlockDriverPages.c)
 *     MiPrepareDriverPatchState @ 0x140A2B694 (MiPrepareDriverPatchState.c)
 *     VslReapplyBootIndirectPatches @ 0x140B94544 (VslReapplyBootIndirectPatches.c)
 */

__int64 __fastcall MmReapplyBootPatchImports(unsigned __int64 a1)
{
  struct _KTHREAD *Lock; // r15
  _QWORD *v3; // rsi
  int v4; // ebx
  __int64 v6; // rbx
  char *AnyMultiplexedVm; // r14
  _RTL_BITMAP_EX v8[7]; // [rsp+38h] [rbp-D0h] BYREF
  _RTL_BITMAP_EX v9[7]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v8, 0, 0x68uLL);
  memset(v9, 0, 0x68uLL);
  Lock = MmAcquireLoadLock();
  v3 = MiLookupDataTableEntry(a1, 1);
  MiInitializeDriverPatchState((__int64)v3, (__int64)v8);
  MiInitializeDriverPatchState((__int64)v3, (__int64)v9);
  if ( (_QWORD *)v3[37] == v3 + 37 )
  {
    v4 = 0;
  }
  else
  {
    v6 = v3[35];
    MiInitializeDriverPatchState((__int64)v3, (__int64)v8);
    MiInitializeDriverPatchState(v6, (__int64)v9);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v4 = MiPrepareDriverPatchState((__int64)v8, (__int64)AnyMultiplexedVm);
    if ( v4 >= 0 )
    {
      v4 = MiPrepareDriverPatchState((__int64)v9, (__int64)AnyMultiplexedVm);
      if ( v4 >= 0 )
      {
        v4 = MiLockDriverPageRange((__int64 *)v8, 0, LODWORD(v8[1].Buffer) - 1, 3, 0LL);
        if ( v4 >= 0 )
        {
          v4 = MiLockDriverPageRange((__int64 *)v9, 0, LODWORD(v9[1].Buffer) - 1, 3, 0LL);
          if ( v4 >= 0 )
          {
            v4 = VslReapplyBootIndirectPatches(v3[6]);
            if ( v4 >= 0 )
              v4 = 0;
          }
        }
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  MiUnlockDriverPages(v8);
  MiUnlockDriverPages(v9);
  return (unsigned int)v4;
}
