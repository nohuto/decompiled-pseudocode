/*
 * XREFs of ?FindWorld@SpectreRenderer@@QEBAPEAVSpectreWorld@@PEAVSceneNode@Engine@Spectre@@@Z @ 0x180018900
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 */

struct SpectreWorld *__fastcall SpectreRenderer::FindWorld(
        SpectreRenderer *this,
        struct Spectre::Engine::SceneNode *a2)
{
  __int64 v2; // r11
  __int64 *v3; // r8
  __int64 *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::GetScene((__int64)a2, &v8);
  v3 = *(__int64 **)(v2 + 112);
  v4 = *(__int64 **)(v2 + 120);
  while ( v3 != v4 )
  {
    v5 = *v3;
    if ( std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>((_QWORD *)(*v3 + 16), &v8) )
    {
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      return (struct SpectreWorld *)v5;
    }
    v3 = (__int64 *)(v6 + 8);
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return 0LL;
}
