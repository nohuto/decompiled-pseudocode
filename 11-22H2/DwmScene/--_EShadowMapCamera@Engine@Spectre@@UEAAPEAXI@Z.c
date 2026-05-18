/*
 * XREFs of ??_EShadowMapCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008DB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ShadowMapCamera@Engine@Spectre@@UEAA@XZ @ 0x18008DA74 (--1ShadowMapCamera@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ShadowMapCamera *__fastcall Spectre::Engine::ShadowMapCamera::`vector deleting destructor'(
        Spectre::Engine::ShadowMapCamera *this,
        char a2)
{
  Spectre::Engine::ShadowMapCamera::~ShadowMapCamera(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
