/*
 * XREFs of ?RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057A70
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VCamera@Engine@Spectre@@@2@@Z @ 0x18005849C (-erase@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display.c)
 */

int __fastcall Spectre::Engine::Display::RemoveCamera(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v7; // r9
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 128));
  v5 = *(__int64 **)(a1 + 40);
  if ( v5 != *(__int64 **)(a1 + 48) )
  {
    while ( !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v5, a2) )
    {
      v5 = v7;
      if ( v7 == *(__int64 **)(a1 + 48) )
        return _Mtx_unlock(v2);
    }
    std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
      v7,
      *(__int64 **)(a1 + 48),
      v6);
    std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(*(_QWORD *)(a1 + 48) - 16LL);
    *(_QWORD *)(a1 + 48) -= 16LL;
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v9, a2);
    std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Camera>,Spectre::Engine::Display::CameraViewport,std::owner_less<std::weak_ptr<Spectre::Engine::Camera>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>,0>>::erase(
      a1 + 88,
      &v9);
    if ( v10 )
      std::_Ref_count_base::_Decwref(v10);
  }
  return _Mtx_unlock(v2);
}
