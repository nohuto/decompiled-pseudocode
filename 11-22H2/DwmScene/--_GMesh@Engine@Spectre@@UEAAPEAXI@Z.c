/*
 * XREFs of ??_GMesh@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018010
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VMesh@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B710 (-_Destroy@-$_Ref_count_obj2@VMesh@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Mesh@Engine@Spectre@@UEAA@XZ @ 0x180047C90 (--1Mesh@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Mesh *__fastcall Spectre::Engine::Mesh::`scalar deleting destructor'(
        Spectre::Engine::Mesh *this,
        char a2)
{
  Spectre::Engine::Mesh::~Mesh(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
