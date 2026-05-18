/*
 * XREFs of ?_Destroy@?$_Ref_count@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<Spectre::Engine::D3D11::RenderDeviceD3D11>::_Destroy(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
