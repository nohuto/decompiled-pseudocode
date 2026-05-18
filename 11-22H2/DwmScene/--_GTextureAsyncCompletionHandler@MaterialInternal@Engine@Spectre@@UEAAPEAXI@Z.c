/*
 * XREFs of ??_GTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1TextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA@XZ @ 0x180043B1C (--1TextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler *__fastcall Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`scalar deleting destructor'(
        Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler *this,
        char a2)
{
  Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::~TextureAsyncCompletionHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
