/*
 * XREFs of ?SetReferenceProperty@ProxyObject@Composition@UI@Windows@@IEAAXII@Z @ 0x1801473D0
 * Callers:
 *     ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z @ 0x1800A3614 (-BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionText.c)
 *     ?put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FB50 (-put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUI.c)
 *     ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FDA0 (-put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UE.c)
 *     ?put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z @ 0x180145E80 (-put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ProxyObject::SetReferenceProperty(
        Windows::UI::Composition::ProxyObject *this,
        int a2,
        int a3)
{
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    a2,
    a3);
}
