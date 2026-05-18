/*
 * XREFs of ?PresentFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@6@11@Z @ 0x1800C6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentFrame@RenderDevice@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@5@11@Z @ 0x180026FA0 (-PresentFrame@RenderDevice@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::PresentFrame(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax

  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::Lockable *)(a1 + 24));
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    Spectre::Engine::RenderDevice::PresentFrame(a1, a2);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}
