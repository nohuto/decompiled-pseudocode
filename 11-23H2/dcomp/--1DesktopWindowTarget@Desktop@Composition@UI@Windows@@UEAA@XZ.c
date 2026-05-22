/*
 * XREFs of ??1DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x18008CBF8
 * Callers:
 *     ??1?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x1800127D4 (--1-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop.c)
 *     ??1?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@UEAA@XZ @ 0x18008CBB4 (--1-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Co.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::~DesktopWindowTarget(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this,
        __int64 a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)this + 25,
    a2);
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}
