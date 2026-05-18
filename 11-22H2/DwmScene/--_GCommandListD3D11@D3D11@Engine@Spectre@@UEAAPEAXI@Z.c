/*
 * XREFs of ??_GCommandListD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800CFB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CFA9C (--1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::D3D11::CommandListD3D11 *__fastcall Spectre::Engine::D3D11::CommandListD3D11::`scalar deleting destructor'(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        char a2)
{
  Spectre::Engine::D3D11::CommandListD3D11::~CommandListD3D11(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
