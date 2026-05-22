/*
 * XREFs of ??1BatchController@Composition@UI@Windows@@QEAA@XZ @ 0x18003E064
 * Callers:
 *     ??1CompositorCommon@Composition@UI@Windows@@MEAA@XZ @ 0x18003DE20 (--1CompositorCommon@Composition@UI@Windows@@MEAA@XZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchController::~BatchController(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 7);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 6);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 5);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 4);
  v2 = *this;
  if ( *this )
  {
    *this = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
}
