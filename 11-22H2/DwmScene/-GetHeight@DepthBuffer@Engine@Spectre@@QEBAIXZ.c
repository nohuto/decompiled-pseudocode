/*
 * XREFs of ?GetHeight@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BA64
 * Callers:
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DepthBuffer::GetHeight(Spectre::Engine::DepthBuffer *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
