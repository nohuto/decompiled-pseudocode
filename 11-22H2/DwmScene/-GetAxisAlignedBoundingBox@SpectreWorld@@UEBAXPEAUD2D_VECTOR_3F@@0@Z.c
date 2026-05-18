/*
 * XREFs of ?GetAxisAlignedBoundingBox@SpectreWorld@@UEBAXPEAUD2D_VECTOR_3F@@0@Z @ 0x18001BE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetBoundingBox@Scene@Engine@Spectre@@QEAAAEBUBoundingBox@DirectX@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180040F90 (-GetBoundingBox@Scene@Engine@Spectre@@QEAAAEBUBoundingBox@DirectX@@V-$basic_string@_WU-$char_tra.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectreWorld::GetAxisAlignedBoundingBox(
        SpectreWorld *this,
        struct D2D_VECTOR_3F *a2,
        struct D2D_VECTOR_3F *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  float *BoundingBox; // rax
  FLOAT v9; // xmm2_4
  FLOAT v10; // xmm1_4
  FLOAT v11; // xmm2_4
  FLOAT v12; // xmm1_4
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*((_QWORD *)this + 2) + 16LL));
  v6 = *((_QWORD *)this + 2);
  v7 = std::wstring::wstring(v14, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
  BoundingBox = (float *)Spectre::Engine::Scene::GetBoundingBox(v6, v7);
  v9 = BoundingBox[2] - BoundingBox[5];
  v10 = BoundingBox[1] - BoundingBox[4];
  a2->x = *BoundingBox - BoundingBox[3];
  a2->y = v10;
  a2->z = v9;
  v11 = BoundingBox[2] + BoundingBox[5];
  v12 = BoundingBox[1] + BoundingBox[4];
  a3->x = BoundingBox[3] + *BoundingBox;
  a3->y = v12;
  a3->z = v11;
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v13);
}
