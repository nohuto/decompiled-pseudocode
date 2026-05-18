/*
 * XREFs of ?SetShaderConstantBuffer@ConstantBufferState@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x18009DECC
 * Callers:
 *     ?SetShaderConstantBuffer@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800397DC (-SetShaderConstantBuffer@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV-$shared_ptr@VCon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::ConstantBufferState::SetShaderConstantBuffer(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4)
{
  return std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)(16 * (a4 + 12LL * a2) + a1 + 8), a3);
}
