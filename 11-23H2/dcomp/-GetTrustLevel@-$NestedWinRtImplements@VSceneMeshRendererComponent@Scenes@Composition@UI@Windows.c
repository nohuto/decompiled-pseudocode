/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UISceneMeshRendererComponent@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneMeshRendererComponent,Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 208) + 32LL);
  return result;
}
