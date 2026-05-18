/*
 * XREFs of ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D994 (-SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?OnLayerModified@Scene@Engine@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18004181C (-OnLayerModified@Scene@Engine@Spectre@@QEAAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SpectreNode::SetLocalTransform(SpectreNode *this, const struct DirectX::XMMATRIX *a2)
{
  __int64 Scene; // rax
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-29h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-21h]
  __int64 v14; // [rsp+30h] [rbp-19h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-11h]
  _BYTE v16[16]; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v17[5]; // [rsp+50h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  Scene = Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 4), &v12);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*(_QWORD *)Scene + 16LL));
  v5 = 0;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v6 = *((_OWORD *)a2 + 1);
  v7 = *((_OWORD *)a2 + 2);
  v8 = *((_OWORD *)a2 + 3);
  v17[0] = *(_OWORD *)a2;
  v17[1] = v6;
  v17[2] = v7;
  v17[3] = v8;
  if ( Spectre::Engine::SceneNode::SetTransformMatrix(
         *((Spectre::Engine::SceneNode **)this + 4),
         (const struct Spectre::Utils::Math::Matrix *)v17) )
  {
    v9 = *(_QWORD *)Spectre::Engine::SceneNode::GetScene(*((_QWORD *)this + 4), &v14);
    v10 = std::wstring::wstring(v17, (__int64)&Spectre::Engine::SceneLayerStandardID::kForeground);
    Spectre::Engine::Scene::OnLayerModified(v9, v10);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  else
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (const char *)0x80070057LL);
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v16);
  return v5;
}
