/*
 * XREFs of ??1?$_Temporary_owner@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@QEAA@XZ @ 0x18001793C
 * Callers:
 *     ??$?0VRenderDeviceD3D11@D3D11@Engine@Spectre@@$0A@@?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@QEAA@PEAVRenderDeviceD3D11@D3D11@Engine@Spectre@@@Z @ 0x18001545C (--$-0VRenderDeviceD3D11@D3D11@Engine@Spectre@@$0A@@-$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Temporary_owner<Spectre::Engine::D3D11::RenderDeviceD3D11>::~_Temporary_owner<Spectre::Engine::D3D11::RenderDeviceD3D11>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
