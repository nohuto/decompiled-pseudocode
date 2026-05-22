/*
 * XREFs of ??$ToApi@UISceneMaterialInput@Scenes@Composition@UI@Windows@@@SceneMaterialInput@Scenes@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UISceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180191628
 * Callers:
 *     ?get_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x180191BA0 (-get_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMateria.c)
 *     ?get_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x180191CD0 (-get_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialI.c)
 *     ?get_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x180191E10 (-get_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMateri.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMaterialInput::ToApi<Windows::UI::Composition::Scenes::ISceneMaterialInput>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 152;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
