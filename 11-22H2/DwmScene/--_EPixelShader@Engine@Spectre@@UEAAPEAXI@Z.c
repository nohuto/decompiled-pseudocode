/*
 * XREFs of ??_EPixelShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18004EEA0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VPixelShader@Engine@Spectre@@@std@@EEAAXXZ @ 0x180050B10 (-_Destroy@-$_Ref_count_obj2@VPixelShader@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Shader@Engine@Spectre@@UEAA@XZ @ 0x18004EB1C (--1Shader@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::PixelShader::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Engine::Shader::~Shader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
