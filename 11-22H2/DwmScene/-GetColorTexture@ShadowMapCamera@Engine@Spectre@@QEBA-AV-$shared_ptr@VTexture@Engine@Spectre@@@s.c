/*
 * XREFs of ?GetColorTexture@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008E1C8
 * Callers:
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?GetColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18008E178 (-GetColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VFrameBuffer@Engine@Spe.c)
 */

_QWORD *__fastcall Spectre::Engine::ShadowMapCamera::GetColorTexture(__int64 a1, _QWORD *a2)
{
  __int64 *Texture; // r9
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-10h]

  Spectre::Engine::ShadowMapCamera::GetColorFrameBuffer(a1, &v8);
  if ( std::operator!=<Spectre::Engine::Scene>(&v8) )
  {
    Texture = (__int64 *)Spectre::Engine::FrameBuffer::GetTexture(v8, &v12);
    v4 = 1;
    v5 = *Texture;
  }
  else
  {
    v11 = 0LL;
    Texture = (__int64 *)&v10;
    v5 = 0LL;
    v4 = 2;
  }
  *Texture = 0LL;
  *a2 = v5;
  v6 = Texture[1];
  Texture[1] = 0LL;
  a2[1] = v6;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  if ( (v4 & 1) != 0 && v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a2;
}
