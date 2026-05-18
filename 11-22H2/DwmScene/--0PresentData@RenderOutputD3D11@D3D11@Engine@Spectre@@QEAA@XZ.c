/*
 * XREFs of ??0PresentData@RenderOutputD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800C8B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Spectre::Engine::D3D11::RenderOutputD3D11::PresentData *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11::PresentData::PresentData(
        Spectre::Engine::D3D11::RenderOutputD3D11::PresentData *this)
{
  Spectre::Engine::D3D11::RenderOutputD3D11::PresentData *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = -1;
  result = this;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 48) = 0;
  return result;
}
