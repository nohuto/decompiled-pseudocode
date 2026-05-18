/*
 * XREFs of ??1ScopeSpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800400A0
 * Callers:
 *     _Spectre::Engine::Scene::AddNodeInternal_::_1_::dtor$6 @ 0x1800E667B (_Spectre--Engine--Scene--AddNodeInternal_--_1_--dtor$6.c)
 *     _Spectre::Engine::Scene::Render_::_1_::dtor$3 @ 0x1800E6789 (_Spectre--Engine--Scene--Render_--_1_--dtor$3.c)
 *     _Spectre::Engine::Scene::RemoveNode_::_1_::dtor$10 @ 0x1800E67D1 (_Spectre--Engine--Scene--RemoveNode_--_1_--dtor$10.c)
 *     _Spectre::Engine::Scene::Update_::_1_::dtor$0 @ 0x1800E6807 (_Spectre--Engine--Scene--Update_--_1_--dtor$0.c)
 *     _Spectre::Engine::Scene::Update_::_1_::dtor$3 @ 0x1800E6819 (_Spectre--Engine--Scene--Update_--_1_--dtor$3.c)
 *     _Spectre::Engine::Scene::Update_::_1_::dtor$5 @ 0x1800E683D (_Spectre--Engine--Scene--Update_--_1_--dtor$5.c)
 *     _Spectre::Engine::Scene::UpdateAllLayerBoundingBoxes_::_1_::dtor$0 @ 0x1800E684F (_Spectre--Engine--Scene--UpdateAllLayerBoundingBoxes_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 */

void __fastcall Spectre::Engine::ScopeSpinLock::~ScopeSpinLock(Spectre::Engine::ScopeSpinLock *this)
{
  __int64 v1; // r8
  _DWORD *v2; // rax
  int v3; // edx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  std::_Atomic_reinterpret_as<int,long>(&v4);
  v2 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v1);
  *v2 = v3;
}
