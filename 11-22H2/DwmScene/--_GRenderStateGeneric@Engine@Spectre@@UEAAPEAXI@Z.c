/*
 * XREFs of ??_GRenderStateGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052DA0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VRenderStateGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053BC0 (-_Destroy@-$_Ref_count_obj2@VRenderStateGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderStateGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B834 (--1RenderStateGeneric@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RenderStateGeneric *__fastcall Spectre::Engine::RenderStateGeneric::`scalar deleting destructor'(
        Spectre::Engine::RenderStateGeneric *this,
        char a2)
{
  Spectre::Engine::RenderStateGeneric::~RenderStateGeneric(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
