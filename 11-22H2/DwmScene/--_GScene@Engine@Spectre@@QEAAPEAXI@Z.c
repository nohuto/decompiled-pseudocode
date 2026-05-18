/*
 * XREFs of ??_GScene@Engine@Spectre@@QEAAPEAXI@Z @ 0x180040204
 * Callers:
 *     ??1?$_Temporary_owner@VScene@Engine@Spectre@@@std@@QEAA@XZ @ 0x18003FE30 (--1-$_Temporary_owner@VScene@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VScene@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800428C0 (-_Destroy@-$_Ref_count@VScene@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Scene@Engine@Spectre@@QEAA@XZ @ 0x18003FFBC (--1Scene@Engine@Spectre@@QEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::Scene::`scalar deleting destructor'(void **this)
{
  Spectre::Engine::Scene::~Scene(this);
  operator delete(this);
  return this;
}
