/*
 * XREFs of ??$static_pointer_cast@VTexture@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x180043900
 * Callers:
 *     ??RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x180043C60 (--RTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandl.c)
 * Callees:
 *     ??$?0VRendererResource@Engine@Spectre@@@?$shared_ptr@VTexture@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@1@PEAVTexture@Engine@Spectre@@@Z @ 0x180043448 (--$-0VRendererResource@Engine@Spectre@@@-$shared_ptr@VTexture@Engine@Spectre@@@std@@QEAA@AEBV-$s.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::Texture,Spectre::Engine::RendererResource>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::Texture>::shared_ptr<Spectre::Engine::Texture>(a1, (__int64)a2, *a2);
  return v2;
}
