/*
 * XREFs of ?SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAX_KW4ESceneAttributeFilter@23@@Z @ 0x180070934
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4ESceneAttributeFilter@23@@Z @ 0x180070918 (-SetAttributeFilter@SceneAttributeFilterGroup@Engine@Spectre@@QEAAXW4ESceneAttribute@23@W4EScene.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::SceneAttributeFilterGroup::SetAttributeFilter(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r8d
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a3 )
  {
    *a1 |= a2;
    goto LABEL_7;
  }
  v3 = a3 - 1;
  if ( !v3 )
  {
    result = ~a2;
    *a1 &= ~a2;
LABEL_7:
    a1[1] |= a2;
    return result;
  }
  if ( v3 == 1 )
  {
    v4 = ~a2;
    *a1 &= v4;
    a1[1] &= v4;
  }
  return result;
}
