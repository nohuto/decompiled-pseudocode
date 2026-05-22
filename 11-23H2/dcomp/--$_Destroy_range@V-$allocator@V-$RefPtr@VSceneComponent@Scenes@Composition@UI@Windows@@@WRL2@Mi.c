/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC
 * Callers:
 *     ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0 (-Clear@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microso.c)
 *     ??_GCompositionShapeCollection@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000F6C0 (--_GCompositionShapeCollection@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180012510 (--_ECompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800B7010 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x1800B710C (-_Change_array@-$vector@V-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Mi.c)
 *     ??1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x18012318C (--1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??$_Construct_n@AEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQEAV123@@?$vector@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@1@Z @ 0x18014064C (--$_Construct_n@AEBQEAV-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@AEBQE.c)
 *     ?_Tidy@?$vector@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180144878 (-_Tidy@-$vector@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@V-$all.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
