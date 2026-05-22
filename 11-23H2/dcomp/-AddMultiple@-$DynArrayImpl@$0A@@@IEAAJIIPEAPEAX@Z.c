/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0
 * Callers:
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800FD848 (--$TryAppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@.c)
 *     ?HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z @ 0x180157164 (-HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z.c)
 *     ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z @ 0x1801960CC (-Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z.c)
 *     ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z @ 0x1801AAD80 (-DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z.c)
 *     ?Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z @ 0x1801AC948 (-Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArrayImpl<0>::AddMultiple(__int64 a1, unsigned int a2, int a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx

  v5 = DynArrayImpl<0>::Grow(a1, a2, a3, 0, 0LL);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x191u, 0LL);
  else
    *(_DWORD *)(a1 + 24) += a3;
  return v6;
}
