/*
 * XREFs of ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z @ 0x180039520
 * Callers:
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x1800394D4 (-SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::SetGuardRect(
        __int64 **this,
        struct ID3D11Texture2D *a2,
        const struct tagRECT *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  struct DirectComposition::CDxDevice *v9; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
    (DirectComposition::MultithreadDeviceLock *)&v9,
    (const struct DirectComposition::CDxDevice *)this);
  v6 = this[6];
  v7 = *v6;
  v8 = (__int128)*a3;
  (*(void (__fastcall **)(__int64 *, struct ID3D11Texture2D *, __int128 *))(v7 + 48))(v6, a2, &v8);
  DirectComposition::MultithreadDeviceLock::Leave(v9);
}
