/*
 * XREFs of ?SetAttributeFilter@Camera@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@1@Z @ 0x18005D000
 * Callers:
 *     ?Reset@Camera@Engine@Spectre@@UEAAXXZ @ 0x18005CB80 (-Reset@Camera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@@Z @ 0x180070918 (-SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4EScene.c)
 */

__int64 __fastcall Spectre::Engine::Camera::SetAttributeFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d
  unsigned int v4; // r11d

  Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(a1 + 472, a2, 0LL);
  return Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(v2 + 488, v4, v3);
}
