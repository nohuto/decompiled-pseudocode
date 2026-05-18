/*
 * XREFs of ?MergeWorldSpace@Bounds@Engine@Spectre@@QEAAXAEAUBoundingBox@DirectX@@AEA_N@Z @ 0x18004A3B0
 * Callers:
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?CreateMerged@BoundingBox@DirectX@@SAXAEAU12@AEBU12@1@Z @ 0x180040AA0 (-CreateMerged@BoundingBox@DirectX@@SAXAEAU12@AEBU12@1@Z.c)
 *     ?Transform@BoundingBox@DirectX@@QEBQXAEAU12@UXMMATRIX@2@@Z @ 0x1800420B0 (-Transform@BoundingBox@DirectX@@QEBQXAEAU12@UXMMATRIX@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Bounds::MergeWorldSpace(
        Spectre::Engine::Bounds *this,
        struct DirectX::BoundingBox *a2,
        bool *a3)
{
  std::_Ref_count_base *v6[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int128 v10; // [rsp+58h] [rbp+17h] BYREF
  __int128 v11; // [rsp+78h] [rbp+37h]
  __int128 v12; // [rsp+88h] [rbp+47h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, v6);
  Spectre::Engine::SceneNode::GetLocalToWorld((__int64)v6[0], (__int64)&v10);
  if ( v6[1] )
    std::_Ref_count_base::_Decref(v6[1]);
  *(_OWORD *)v6 = _xmm;
  v7 = 0x3F8000003F800000LL;
  DirectX::BoundingBox::Transform((unsigned __int64 *)this + 11, (__int64)v6, *(double *)&v11, *(double *)&v12);
  if ( *a3 )
  {
    v8 = _xmm;
    v9 = 0x3F8000003F800000LL;
    DirectX::BoundingBox::CreateMerged((struct DirectX::BoundingBox *)&v8, a2, (const struct DirectX::BoundingBox *)v6);
    *(_OWORD *)a2 = v8;
    *((_QWORD *)a2 + 2) = v9;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)v6;
    *((_QWORD *)a2 + 2) = v7;
    *a3 = 1;
  }
}
