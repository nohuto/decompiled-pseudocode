/*
 * XREFs of ?GetScissorRect@Camera@Engine@Spectre@@QEBA?AV?$Optional@UScissorRect@Engine@Spectre@@@Utils@3@XZ @ 0x18005BAFC
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Camera::GetScissorRect(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0

  *(_BYTE *)(a2 + 16) = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v2 = *(_OWORD *)(a1 + 372);
    *(_BYTE *)(a2 + 16) = 1;
    *(_OWORD *)a2 = v2;
  }
  return a2;
}
