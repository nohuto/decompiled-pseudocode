/*
 * XREFs of ??_GVertexLayout@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800869D0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VVertexLayout@Engine@Spectre@@@std@@EEAAXXZ @ 0x180087ED0 (-_Destroy@-$_Ref_count_obj2@VVertexLayout@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BDBC (--1VertexLayout@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::VertexLayout *__fastcall Spectre::Engine::VertexLayout::`scalar deleting destructor'(
        Spectre::Engine::VertexLayout *this,
        char a2)
{
  Spectre::Engine::VertexLayout::~VertexLayout(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
