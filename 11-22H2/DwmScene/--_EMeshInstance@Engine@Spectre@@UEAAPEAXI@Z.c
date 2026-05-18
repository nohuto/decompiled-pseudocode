/*
 * XREFs of ??_EMeshInstance@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800143C0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VMeshInstance@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800149E0 (-_Destroy@-$_Ref_count_obj2@VMeshInstance@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AEB0 (--1MeshInstance@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::MeshInstance *__fastcall Spectre::Engine::MeshInstance::`vector deleting destructor'(
        Spectre::Engine::MeshInstance *this,
        char a2)
{
  Spectre::Engine::MeshInstance::~MeshInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
