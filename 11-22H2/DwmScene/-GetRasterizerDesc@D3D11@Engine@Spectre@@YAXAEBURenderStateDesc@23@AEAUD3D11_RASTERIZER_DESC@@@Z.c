/*
 * XREFs of ?GetRasterizerDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_RASTERIZER_DESC@@@Z @ 0x1800D53E4
 * Callers:
 *     ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50 (-Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@URenderStateDesc@Engine@Spectr.c)
 * Callees:
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias @ 0x1800D4CAC (Spectre--Engine--D3D11--_anonymous_namespace_--CalculateFinalDepthBias.c)
 */

void __fastcall Spectre::Engine::D3D11::GetRasterizerDesc(
        Spectre::Engine::D3D11 *this,
        const struct Spectre::Engine::RenderStateDesc *a2,
        struct D3D11_RASTERIZER_DESC *a3)
{
  int v5; // ecx
  int v6; // ecx

  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 2) = *((unsigned __int8 *)this + 64);
  *((_DWORD *)a2 + 8) = 1;
  *((_DWORD *)a2 + 6) = 1;
  *((_DWORD *)a2 + 9) = 1;
  v5 = *((_DWORD *)this + 1);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        *((_DWORD *)a2 + 1) = 1;
    }
    else
    {
      *((_DWORD *)a2 + 1) = 3;
    }
  }
  else
  {
    *((_DWORD *)a2 + 1) = 2;
  }
  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this == 1 )
      *(_DWORD *)a2 = 2;
  }
  else
  {
    *(_DWORD *)a2 = 3;
  }
  *((_DWORD *)a2 + 3) = Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias(
                          *((float *)this + 3),
                          *((_BYTE *)this + 24));
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 7) = *((unsigned __int8 *)this + 60);
}
