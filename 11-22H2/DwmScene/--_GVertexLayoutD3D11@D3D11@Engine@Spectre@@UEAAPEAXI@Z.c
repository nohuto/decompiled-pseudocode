/*
 * XREFs of ??_GVertexLayoutD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C4BC0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VVertexLayoutD3D11@D3D11@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800C7AF0 (-_Destroy@-$_Ref_count_obj2@VVertexLayoutD3D11@D3D11@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexLayoutD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D3A18 (--1VertexLayoutD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::D3D11::VertexLayoutD3D11 *__fastcall Spectre::Engine::D3D11::VertexLayoutD3D11::`scalar deleting destructor'(
        Spectre::Engine::D3D11::VertexLayoutD3D11 *this,
        char a2)
{
  Spectre::Engine::D3D11::VertexLayoutD3D11::~VertexLayoutD3D11(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
