/*
 * XREFs of ??4?$RefPtr@VSceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVSceneMaterialInput@Scenes@Composition@UI@Windows@@@Z @ 0x18013F130
 * Callers:
 *     ?put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FB50 (-put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUI.c)
 *     ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FDA0 (-put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UE.c)
 *     ?put_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x1801921A0 (-put_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialIn.c)
 *     ?put_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x180192360 (-put_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInpu.c)
 *     ?put_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x180192500 (-put_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialI.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneMaterialInput>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v5);
  }
  return a1;
}
