/*
 * XREFs of ??R?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@QEBAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180055884
 * Callers:
 *     ??1?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556F8 (--1-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@Spect.c)
 *     ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34 (-reset@-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Spectre::Engine::TextureImageSet>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
