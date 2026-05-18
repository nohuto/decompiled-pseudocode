/*
 * XREFs of ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C
 * Callers:
 *     ?Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x180011560 (-Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 *     ?ShutdownDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C7540 (-ShutdownDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C7630 (-Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624 (-Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::CommandList::Flush(Spectre::Engine::CommandList *this)
{
  (*(void (__fastcall **)(Spectre::Engine::CommandList *, _QWORD))(*(_QWORD *)this + 232LL))(this, 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 16LL))(*((_QWORD *)this + 12));
}
