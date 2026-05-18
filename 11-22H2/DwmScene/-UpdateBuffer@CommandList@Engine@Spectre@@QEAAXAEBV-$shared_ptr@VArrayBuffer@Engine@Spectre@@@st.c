/*
 * XREFs of ?UpdateBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800399E0
 * Callers:
 *     ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC (-UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::UpdateBuffer(_QWORD **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64, _QWORD))(*a1)[35])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
