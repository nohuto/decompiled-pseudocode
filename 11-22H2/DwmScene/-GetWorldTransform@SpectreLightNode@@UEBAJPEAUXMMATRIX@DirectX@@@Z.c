/*
 * XREFs of ?GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180012690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpectreLightNode::GetWorldTransform(SpectreLightNode *this, struct DirectX::XMMATRIX *a2)
{
  __int64 Scene; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-60h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  Scene = Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 2), &v9);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*(_QWORD *)Scene + 16LL));
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  Spectre::Engine::SceneNode::GetWorldTransformMatrix(*((_QWORD *)this + 2), v12);
  v5 = v12[1];
  v6 = v12[2];
  v7 = v12[3];
  *(_OWORD *)a2 = v12[0];
  *((_OWORD *)a2 + 1) = v5;
  *((_OWORD *)a2 + 2) = v6;
  *((_OWORD *)a2 + 3) = v7;
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v11);
  return 0LL;
}
