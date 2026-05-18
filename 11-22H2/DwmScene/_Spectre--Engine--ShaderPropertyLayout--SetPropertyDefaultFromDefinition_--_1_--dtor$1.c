/*
 * XREFs of _Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor$1 @ 0x1800EA325
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ @ 0x1800179F0 (--1-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    std::vector<enum D3D_FEATURE_LEVEL>::~vector<enum D3D_FEATURE_LEVEL>((void *)(a2 + 88));
  }
}
