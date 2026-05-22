/*
 * XREFs of ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC
 * Callers:
 *     ?EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ @ 0x18000617C (-EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180028A80 (-Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?AddToControllerIfSupported@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAVAnimationController@234@@Z @ 0x18003B5A0 (-AddToControllerIfSupported@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAVAnimationControlle.c)
 *     ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40 (-InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ?OnCollectionChanged@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18003BD80 (-OnCollectionChanged@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Invalidate@CFilterEffect@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F80F0 (-Invalidate@CFilterEffect@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilRect.c)
 *     ?OnChildrenChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AA0 (-OnChildrenChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?OnComponentsChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ @ 0x180143AF0 (-OnComponentsChanged@SceneNode@Scenes@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@2345@PEAE@Z @ 0x18018E5DC (-Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4Scene.c)
 *     ?Remove@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18018F150 (-Remove@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnCollectionChanged@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ @ 0x1801A0070 (-OnCollectionChanged@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::AddDirtyRebuildableObject(
        DirectComposition::CDevice *this,
        struct DirectComposition::CRebuildableObject *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CRebuildableObject *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 60);
    *((_QWORD *)this + 60) = a2;
  }
  else
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 59);
    *((_QWORD *)this + 59) = a2;
  }
}
