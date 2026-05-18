/*
 * XREFs of _Spectre::Engine::Camera::RenderPassInfo::Clone_::_1_::dtor$0 @ 0x1800E7957
 * Callers:
 *     <none>
 * Callees:
 *     ??1RenderPassInfo@Camera@Engine@Spectre@@QEAA@XZ @ 0x180059A00 (--1RenderPassInfo@Camera@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::Camera::RenderPassInfo::Clone_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Spectre::Engine::Camera::RenderPassInfo::~RenderPassInfo(*(Spectre::Engine::Camera::RenderPassInfo **)(a2 + 88));
  }
}
