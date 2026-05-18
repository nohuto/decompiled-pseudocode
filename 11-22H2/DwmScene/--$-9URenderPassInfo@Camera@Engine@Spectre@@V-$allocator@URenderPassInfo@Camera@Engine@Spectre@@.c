/*
 * XREFs of ??$?9URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YA_NAEBV?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@0@0@Z @ 0x180058664
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 * Callees:
 *     ??$equal@PEBURenderPassInfo@Camera@Engine@Spectre@@PEBU1234@@std@@YA_NQEBURenderPassInfo@Camera@Engine@Spectre@@00@Z @ 0x180058FA4 (--$equal@PEBURenderPassInfo@Camera@Engine@Spectre@@PEBU1234@@std@@YA_NQEBURenderPassInfo@Camera@.c)
 */

char __fastcall std::operator!=<Spectre::Engine::Camera::RenderPassInfo,std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(
        _QWORD *a1,
        _QWORD *a2)
{
  char v2; // al

  if ( a1[1] - *a1 == a2[1] - *a2 )
    v2 = std::equal<Spectre::Engine::Camera::RenderPassInfo const *,Spectre::Engine::Camera::RenderPassInfo const *>(
           *a1,
           a1[1],
           *a2);
  else
    v2 = 0;
  return v2 ^ 1;
}
