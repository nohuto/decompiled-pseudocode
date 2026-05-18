/*
 * XREFs of ?GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BC50
 * Callers:
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DepthBuffer::GetWidth(Spectre::Engine::DepthBuffer *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
