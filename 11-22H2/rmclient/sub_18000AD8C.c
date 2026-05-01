/*
 * XREFs of sub_18000AD8C @ 0x18000AD8C
 * Callers:
 *     atexit @ 0x18000AE2C (atexit.c)
 * Callees:
 *     _lock @ 0x18000B233 (_lock.c)
 *     _unlock @ 0x18000B23F (_unlock.c)
 *     __dllonexit @ 0x18000B24B (__dllonexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000AD8C(__int64 a1)
{
  __int64 v3; // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = Block;
  if ( Block == (void *)-1LL )
    return ((__int64 (*)(void))onexit)();
  lock(8LL);
  v4 = Block;
  v5 = qword_180032838;
  v3 = _dllonexit(a1, &v4, &v5);
  Block = v4;
  qword_180032838 = v5;
  unlock(8LL);
  return v3;
}
