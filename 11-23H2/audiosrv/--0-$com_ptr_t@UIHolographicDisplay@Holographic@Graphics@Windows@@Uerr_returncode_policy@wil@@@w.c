/*
 * XREFs of ??0?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x180139DF4
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013AA00 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18013B7AC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
