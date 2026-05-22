/*
 * XREFs of ?SetScalarIntegerProperty@ProxyObject@Composition@UI@Windows@@IEAAXI_J@Z @ 0x1801473F8
 * Callers:
 *     ?put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z @ 0x180132F50 (-put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopol.c)
 *     ?put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4CompositionBitmapInterpolationMode@456@@Z @ 0x180145680 (-put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z @ 0x180145830 (-put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrap.c)
 *     ?put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z @ 0x180145900 (-put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrap.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ProxyObject::SetScalarIntegerProperty(
        Windows::UI::Composition::ProxyObject *this,
        int a2,
        __int64 a3)
{
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    a2,
    a3);
}
