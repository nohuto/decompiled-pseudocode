/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0194B64
 * Callers:
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0194A88 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0195464 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C01DE320 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C03D1DD8 (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03D1E30 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03D28F8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03D3808 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  *((_QWORD *)this + 78) = KeGetCurrentThread();
  *((LARGE_INTEGER *)this + 97) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  KeWaitForSingleObject((char *)this + 544, Executive, 0, 0, 0LL);
  *((_QWORD *)this + 78) = 0LL;
  return *((unsigned int *)this + 150);
}
