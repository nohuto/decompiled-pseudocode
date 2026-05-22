/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneNode@Scenes@Composition@UI@Windows@@UISceneNode@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneNode,Windows::UI::Composition::Scenes::ISceneNode>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 200) + 32LL);
  return result;
}
