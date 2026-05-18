/*
 * XREFs of ??$?0VRendererResource@Engine@Spectre@@@?$shared_ptr@VTexture@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@1@PEAVTexture@Engine@Spectre@@@Z @ 0x180043448
 * Callers:
 *     ??$static_pointer_cast@VTexture@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x180043900 (--$static_pointer_cast@VTexture@Engine@Spectre@@VRendererResource@23@@std@@YA-AV-$shared_ptr@VTe.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::Texture>::shared_ptr<Spectre::Engine::Texture>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
