/*
 * XREFs of ??_GMaterial@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043DC0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VMaterial@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800614B0 (-_Destroy@-$_Ref_count_obj2@VMaterial@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Material@Engine@Spectre@@UEAA@XZ @ 0x180043A44 (--1Material@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::Material::`scalar deleting destructor'(void **this, char a2)
{
  Spectre::Engine::Material::~Material(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
