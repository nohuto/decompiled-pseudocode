/*
 * XREFs of ?Reset@Aimer@Engine@Spectre@@UEAAXXZ @ 0x180096A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Aimer::Reset(Spectre::Engine::Aimer *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-30h] BYREF
  int v4; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h]
  Spectre::Engine::SceneNode *v7; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v8; // [rsp+48h] [rbp-8h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v7);
  v3 = Spectre::Utils::Math::Vector3::UnitY;
  v4 = 0;
  Spectre::Engine::SceneNode::SetPosition(v7, &v3);
  v3 = Spectre::Utils::Math::Vector3::Up;
  v4 = 0;
  v5 = Spectre::Utils::Math::Vector3::Zero;
  v6 = 0;
  Spectre::Engine::SceneNode::LookAt(v7, (unsigned __int64 *)&v5, (__int64)&v3);
  *((_QWORD *)this + 12) = 0LL;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 1065353216LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 72) = 0;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
