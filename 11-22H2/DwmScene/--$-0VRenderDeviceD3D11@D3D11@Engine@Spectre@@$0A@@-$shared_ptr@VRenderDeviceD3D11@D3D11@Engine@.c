/*
 * XREFs of ??$?0VRenderDeviceD3D11@D3D11@Engine@Spectre@@$0A@@?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@QEAA@PEAVRenderDeviceD3D11@D3D11@Engine@Spectre@@@Z @ 0x18001545C
 * Callers:
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Temporary_owner@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@QEAA@XZ @ 0x18001793C (--1-$_Temporary_owner@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::D3D11::RenderDeviceD3D11>::shared_ptr<Spectre::Engine::D3D11::RenderDeviceD3D11>(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x18uLL);
  v6 = 1LL;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::D3D11::RenderDeviceD3D11>::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *((_QWORD *)v4 + 2) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)v4 + 2, 1u);
      v8 = (volatile signed __int32 *)a1[1];
      v9 = 0LL;
      v5 = 0LL;
      if ( v8 )
      {
        v9 = a2;
        v5 = a1[1];
        _InterlockedAdd(v8 + 3, 1u);
      }
      *(_QWORD *)(a2 + 8) = v9;
      v10 = *(std::_Ref_count_base **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v5;
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  v12 = 0LL;
  std::_Temporary_owner<Spectre::Engine::D3D11::RenderDeviceD3D11>::~_Temporary_owner<Spectre::Engine::D3D11::RenderDeviceD3D11>(
    &v12,
    v5,
    v6);
  return a1;
}
