/*
 * XREFs of ?Destroy@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x18008A700
 * Callers:
 *     ?Destroy@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x180010D40 (-Destroy@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@D.c)
 *     ?Destroy@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAAXXZ @ 0x18008A5D0 (-Destroy@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desk.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::Destroy(
        volatile signed __int32 **this,
        __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  Windows::UI::Composition::Desktop::DesktopWindowTarget **v4; // r8
  Windows::UI::Composition::Desktop::DesktopWindowTarget **v5; // rcx
  Windows::UI::Composition::Desktop::DesktopWindowTarget **v6; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(this + 25, a2);
  v3 = this[3];
  v4 = (Windows::UI::Composition::Desktop::DesktopWindowTarget **)*((_QWORD *)v3 + 110);
  v5 = (Windows::UI::Composition::Desktop::DesktopWindowTarget **)*((_QWORD *)v3 + 109);
  if ( v5 == v4 )
LABEL_4:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  while ( 1 )
  {
    v6 = v5 + 1;
    if ( *v5 == (Windows::UI::Composition::Desktop::DesktopWindowTarget *)this )
      break;
    ++v5;
    if ( v6 == v4 )
      goto LABEL_4;
  }
  memmove_0(v5, v6, (char *)v4 - (char *)v6);
  *((_QWORD *)v3 + 110) -= 8LL;
  Windows::UI::Composition::CompositionObject::Destroy((Windows::UI::Composition::CompositionObject *)this);
}
