/*
 * XREFs of ?InitialiseAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800C5BAC
 * Callers:
 *     ?GetAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXAEAI0@Z @ 0x1800C56D0 (-GetAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXAEAI0@Z.c)
 * Callees:
 *     ?CheckMultisamplingResolveSupport@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAA_NXZ @ 0x1800C4BFC (-CheckMultisamplingResolveSupport@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::InitialiseAntialiasingSettings(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  int v1; // ebx
  __int64 v3; // rax
  __int128 v4; // [rsp+28h] [rbp-29h] BYREF
  int v5; // [rsp+38h] [rbp-19h]
  int v6; // [rsp+3Ch] [rbp-15h]
  int v7; // [rsp+40h] [rbp-11h]
  int v8; // [rsp+44h] [rbp-Dh]
  __int128 v9; // [rsp+48h] [rbp-9h]
  __int128 v10; // [rsp+58h] [rbp+7h]
  __int128 v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+8Ch] [rbp+3Bh]
  __int64 v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+98h] [rbp+47h]

  v1 = *((_DWORD *)this + 104);
  if ( v1 != 1 )
  {
    if ( !v1 )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      v16 = 0LL;
      v17 = 0;
      v3 = *(_QWORD *)this;
      v5 = 0;
      v4 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *, __int128 *))(v3 + 88))(this, &v4);
      v1 = v17 >= 1000 ? (v17 >= 2000) + 2 : 1;
      if ( *((_DWORD *)this + 77) == 1 )
        v1 = 1;
    }
    if ( !Spectre::Engine::D3D11::RenderDeviceD3D11::CheckMultisamplingResolveSupport(this)
      && *((_DWORD *)this + 96) == 1 )
    {
      v1 = 1;
    }
  }
  *((_DWORD *)this + 105) = v1;
}
