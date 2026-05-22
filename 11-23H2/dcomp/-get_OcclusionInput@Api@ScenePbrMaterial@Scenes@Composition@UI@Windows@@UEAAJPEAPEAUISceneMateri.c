/*
 * XREFs of ?get_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x180191E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ToApi@UISceneMaterialInput@Scenes@Composition@UI@Windows@@@SceneMaterialInput@Scenes@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UISceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180191628 (--$ToApi@UISceneMaterialInput@Scenes@Composition@UI@Windows@@@SceneMaterialInput@Scenes@Composit.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::Api::get_OcclusionInput(
        Windows::UI::Composition::Scenes::ScenePbrMaterial::Api *this,
        struct Windows::UI::Composition::Scenes::ISceneMaterialInput **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  struct Windows::UI::Composition::Scenes::ISceneMaterialInput *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 4);
    v8 = 0LL;
    Windows::UI::Composition::Scenes::SceneMaterialInput::ToApi<Windows::UI::Composition::Scenes::ISceneMaterialInput>(
      v6,
      (__int64 *)&v8);
    *a2 = v8;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
