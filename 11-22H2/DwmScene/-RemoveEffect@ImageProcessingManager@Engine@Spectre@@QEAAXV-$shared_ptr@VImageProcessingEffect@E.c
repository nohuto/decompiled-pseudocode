/*
 * XREFs of ?RemoveEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073950
 * Callers:
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 */

void __fastcall Spectre::Engine::ImageProcessingManager::RemoveEffect(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // r9
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx

  v4 = *(__int64 **)(a1 + 40);
  if ( v4 != *(__int64 **)(a1 + 48) )
  {
    while ( !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v4, a2) )
    {
      v4 = v6;
      if ( v6 == *(__int64 **)(a1 + 48) )
        goto LABEL_8;
    }
    std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
      v6,
      *(__int64 **)(a1 + 48),
      v5);
    v7 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 48) - 8LL);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    *(_QWORD *)(a1 + 48) -= 16LL;
  }
LABEL_8:
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
