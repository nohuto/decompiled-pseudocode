/*
 * XREFs of ?SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z @ 0x180012F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpectreLightNode::SetTransform(
        SpectreLightNode *this,
        const struct D2D_VECTOR_3F *a2,
        const struct D2D_VECTOR_3F *a3)
{
  FLOAT z; // xmm2_4
  FLOAT y; // xmm1_4
  FLOAT v8; // xmm2_4
  FLOAT v9; // xmm1_4
  FLOAT x; // [rsp+20h] [rbp-40h] BYREF
  FLOAT v12; // [rsp+24h] [rbp-3Ch]
  FLOAT v13; // [rsp+28h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF

  if ( (*((_DWORD *)this + 12) & 0xFFFFFFFB) != 0 )
  {
    Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 2), &v16);
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v16 + 16));
    if ( (unsigned int)(*((_DWORD *)this + 12) - 2) <= 1 )
    {
      z = a2->z;
      y = a2->y;
      x = a2->x;
      v12 = y;
      v13 = z;
      Spectre::Engine::SceneNode::SetPosition(*((Spectre::Engine::SceneNode **)this + 2), &x);
    }
    if ( ((*((_DWORD *)this + 12) - 1) & 0xFFFFFFFD) == 0 )
    {
      v8 = a3->z;
      v9 = a3->y;
      v14 = Spectre::Utils::Math::Vector3::Up;
      v15 = 0;
      x = a3->x;
      v12 = v9;
      v13 = v8;
      Spectre::Engine::SceneNode::LookAt(*((_QWORD *)this + 2), &x, &v14);
    }
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v18);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  return 0LL;
}
