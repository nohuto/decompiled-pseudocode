/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x140871A9C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140871A70 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     MmAcquireLoadLock @ 0x1407045B0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704930 (MmReleaseLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x140871AF8 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v4; // ebx

  v2 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v4 = MiBackSystemImageWithPagefile(v2);
  MmReleaseLoadLock((__int64)Lock);
  return v4;
}
