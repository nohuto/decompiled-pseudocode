/*
 * XREFs of ??0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@_K@Z @ 0x1800553C0
 * Callers:
 *     ??$make_unique@UTextureImageSet@Engine@Spectre@@UTextureImageSetView@23@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI$0A@@std@@YA?AV?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@0@$$QEAUTextureImageSetView@Engine@Spectre@@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@AEAI@Z @ 0x180055158 (--$make_unique@UTextureImageSet@Engine@Spectre@@UTextureImageSetView@23@V-$unique_ptr@$$BY0A@EU-.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ??0TextureImageSetView@Engine@Spectre@@QEAA@$$QEAU012@PEBX_K@Z @ 0x180055494 (--0TextureImageSetView@Engine@Spectre@@QEAA@$$QEAU012@PEBX_K@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::TextureImageSet::TextureImageSet(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void **v4; // r11
  void *v5; // rax

  Spectre::Engine::TextureImageSetView::TextureImageSetView(a1, a2, *a3);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v5 = *v4;
  *v4 = 0LL;
  a1[7] = v5;
  std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(v4);
  return a1;
}
