/*
 * XREFs of ??1?$Optional@UScissorRect@Engine@Spectre@@@Utils@Spectre@@QEAA@XZ @ 0x18005981C
 * Callers:
 *     _Spectre::Engine::Camera::Camera_::_1_::dtor$9 @ 0x1800E78B2 (_Spectre--Engine--Camera--Camera_--_1_--dtor$9.c)
 *     _Spectre::Engine::Camera::Begin_::_1_::dtor$5 @ 0x1800E7945 (_Spectre--Engine--Camera--Begin_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::Optional<Spectre::Engine::ScissorRect>::~Optional<Spectre::Engine::ScissorRect>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    *(_BYTE *)(a1 + 16) = 0;
}
