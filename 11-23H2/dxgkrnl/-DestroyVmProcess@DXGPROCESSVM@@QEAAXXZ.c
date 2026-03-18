/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0343ABC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00085C0 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00565C8 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0056A34 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  DXGPROCESS **v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // edx

  v1 = (DXGPROCESS **)((char *)this + 608);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqpppz_EtwWriteTransfer(
      (__int64)this,
      &EventDestroyDxgProcessVm,
      *((_QWORD *)this + 8),
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      *((_DWORD *)this + 126),
      *((_DWORD *)this + 106),
      *(_QWORD *)(*((_QWORD *)this + 8) + 88LL),
      *((_QWORD *)this + 77),
      *((_QWORD *)*v1 + 76),
      *((_QWORD *)this + 80));
  v3 = (_QWORD *)((char *)this + 624);
  v4 = *((_QWORD *)*v1 + 76);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v4 + 128));
  v5 = *((_QWORD *)this + 78);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 || (v6 = (_QWORD *)*((_QWORD *)this + 79), (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_QWORD *)this + 79) = 0LL;
    *v3 = 0LL;
  }
  *(_QWORD *)(v4 + 136) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 128, 0LL);
  KeLeaveCriticalRegion();
  v7 = *((_DWORD *)this + 163);
  if ( v7 )
  {
    DXGPROCESS::FreeHandleSafe(*v1, v7);
    *((_DWORD *)this + 163) = 0;
  }
  DXGPROCESSVMWP::DecrementNumVmProcesses((DXGVIRTUALMACHINE **)*v1);
  DXGPROCESS::ReleaseReference(*v1);
  *v1 = 0LL;
}
