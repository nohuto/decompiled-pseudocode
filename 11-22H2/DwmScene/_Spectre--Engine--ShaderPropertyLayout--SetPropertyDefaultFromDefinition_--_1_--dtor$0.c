/*
 * XREFs of _Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor$0 @ 0x1800EA2F8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ @ 0x1800179F0 (--1-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::vector<enum D3D_FEATURE_LEVEL>::~vector<enum D3D_FEATURE_LEVEL>((void *)(a2 + 112));
  }
}
