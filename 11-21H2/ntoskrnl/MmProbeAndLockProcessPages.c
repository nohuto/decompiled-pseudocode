/*
 * XREFs of MmProbeAndLockProcessPages @ 0x140708890
 * Callers:
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  _OWORD v8[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != *((PEPROCESS *)KeGetCurrentThread() + 23) )
  {
    v6 = 1;
    sub_14030D5C0((ULONG_PTR)Process, 0LL, (__int64)v8, *(__int64 *)&Operation);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    sub_1402D0930((__int64)v8, 0LL);
}
