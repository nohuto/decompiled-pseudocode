/*
 * XREFs of ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0
 * Callers:
 *     ?Destroy@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18000CE90 (-Destroy@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180012E00 (-Destroy@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Clear@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJXZ @ 0x180084350 (-Clear@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@.c)
 *     ?Clear@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJXZ @ 0x180141F30 (-Clear@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composit.c)
 *     ?Destroy@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801926A0 (-Destroy@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Clear@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJXZ @ 0x1801A0A50 (-Clear@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composit.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC (--$_Destroy_range@V-$allocator@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Clear(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = a1[1];
  v3 = a1[2];
  if ( v1 != v3 )
  {
    do
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 8))(a1, v1);
      v1 += 8LL;
    }
    while ( v1 != v3 );
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
      a1[1],
      a1[2]);
    a1[2] = a1[1];
    return (*(__int64 (__fastcall **)(__int64 *))*a1)(a1);
  }
  return result;
}
