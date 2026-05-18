/*
 * XREFs of ??_GRenderState@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043E00
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VRenderState@Engine@Spectre@@@std@@EEAAXXZ @ 0x180044B60 (-_Destroy@-$_Ref_count_obj2@VRenderState@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderState@Engine@Spectre@@UEAA@XZ @ 0x180043AD0 (--1RenderState@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::RenderState::`scalar deleting destructor'(void **this, char a2)
{
  Spectre::Engine::RenderState::~RenderState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
