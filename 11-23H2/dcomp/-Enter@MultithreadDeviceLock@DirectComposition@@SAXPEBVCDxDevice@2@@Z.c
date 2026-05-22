/*
 * XREFs of ?Enter@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BA40
 * Callers:
 *     ??0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z @ 0x18009942C (--0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::MultithreadDeviceLock::Enter(const struct DirectComposition::CDxDevice *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a1 + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = *((_QWORD *)a1 + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
}
