/*
 * XREFs of ?SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@@Z @ 0x180070918
 * Callers:
 *     ?SetAttributeFilter@Camera@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@1@Z @ 0x18005D000 (-SetAttributeFilter@Camera@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(__int64 a1, char a2, __int64 a3)
{
  return Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(a1, 1LL << a2, a3);
}
