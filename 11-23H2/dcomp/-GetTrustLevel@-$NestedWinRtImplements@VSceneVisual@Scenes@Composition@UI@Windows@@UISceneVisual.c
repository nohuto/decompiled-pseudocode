/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneVisual@Scenes@Composition@UI@Windows@@UISceneVisual@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneVisual,Windows::UI::Composition::Scenes::ISceneVisual>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 312) + 32LL);
  return result;
}
