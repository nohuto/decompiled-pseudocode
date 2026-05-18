/*
 * XREFs of ?SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x1800129D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D994 (-SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpectreLightNode::SetLocalTransform(SpectreLightNode *this, const struct DirectX::XMMATRIX *a2)
{
  __int64 Scene; // rax
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-60h]
  _BYTE v12[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  Scene = Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 2), &v10);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*(_QWORD *)Scene + 16LL));
  v5 = 0;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v6 = *((_OWORD *)a2 + 1);
  v7 = *((_OWORD *)a2 + 2);
  v8 = *((_OWORD *)a2 + 3);
  v13[0] = *(_OWORD *)a2;
  v13[1] = v6;
  v13[2] = v7;
  v13[3] = v8;
  if ( !Spectre::Engine::SceneNode::SetTransformMatrix(
          *((Spectre::Engine::SceneNode **)this + 2),
          (const struct Spectre::Utils::Math::Matrix *)v13) )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrelightnode.cpp",
      (const char *)0x80070057LL);
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v12);
  return v5;
}
