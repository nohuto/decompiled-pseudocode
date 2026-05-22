/*
 * XREFs of ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800B7010
 * Callers:
 *     ?Append@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJPEAUICompositionColorGradientStop@234@@Z @ 0x180045CE0 (-Append@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@.c)
 *     ?Append@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUICompositionShape@234@@Z @ 0x180077570 (-Append@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composi.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800B6F0C (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ??$_Emplace_reallocate@AEAPEAVCompositionPath@Composition@UI@Windows@@@?$vector@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPath@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEAPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180177DC8 (--$_Emplace_reallocate@AEAPEAVCompositionPath@Composition@UI@Windows@@@-$vector@V-$RefPtr@VCompo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC (--$_Destroy_range@V-$allocator@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Mi.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
    (__int64)a3,
    (__int64)a3);
  return a3;
}
