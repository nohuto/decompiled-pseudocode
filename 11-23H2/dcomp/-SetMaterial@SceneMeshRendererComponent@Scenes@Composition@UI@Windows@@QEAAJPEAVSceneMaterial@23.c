/*
 * XREFs of ?SetMaterial@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneMaterial@2345@@Z @ 0x180133A98
 * Callers:
 *     ?put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterial@3456@@Z @ 0x180133EC0 (-put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMater.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::SetMaterial(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent *this,
        struct Windows::UI::Composition::Scenes::SceneMaterial *a2)
{
  int v4; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != *((struct Windows::UI::Composition::Scenes::SceneMaterial **)this + 29) )
  {
    v4 = a2 ? *((_DWORD *)a2 + 32) : 0;
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v4);
    if ( *((struct Windows::UI::Composition::Scenes::SceneMaterial **)this + 29) != a2 )
    {
      if ( a2 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
      v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 29);
      *((_QWORD *)this + 29) = a2;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v6);
    }
  }
  return 0LL;
}
