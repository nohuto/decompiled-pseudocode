/*
 * XREFs of ??1ShaderProgram@Engine@Spectre@@QEAA@XZ @ 0x18001E4E8
 * Callers:
 *     _Spectre::InitializeShaderManager::Engine::InitializeShaderManager_::_1_::dtor$5 @ 0x1800E5CE9 (_Spectre--InitializeShaderManager--Engine--InitializeShaderManager_--_1_--dtor$5.c)
 *     _Spectre::Engine::ShaderManager::AddShaderProgram_::_1_::dtor$0 @ 0x1800E72B6 (_Spectre--Engine--ShaderManager--AddShaderProgram_--_1_--dtor$0.c)
 *     _Spectre::Engine::ColorTransform::ImportFormat_IridasLook_::_1_::dtor$0 @ 0x1800EA92C (_Spectre--Engine--ColorTransform--ImportFormat_IridasLook_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::ShaderProgram::~ShaderProgram(Spectre::Engine::ShaderProgram *this)
{
  std::vector<unsigned char>::_Tidy(this);
}
