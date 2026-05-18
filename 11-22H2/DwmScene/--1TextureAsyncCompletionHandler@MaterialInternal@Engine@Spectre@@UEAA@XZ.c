/*
 * XREFs of ??1TextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAA@XZ @ 0x180043B1C
 * Callers:
 *     ??_GTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043E80 (--_GTextureAsyncCompletionHandler@MaterialInternal@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::~TextureAsyncCompletionHandler(
        Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  *(_QWORD *)this = &Spectre::Engine::ResourceLoadedFnc::`vftable';
}
