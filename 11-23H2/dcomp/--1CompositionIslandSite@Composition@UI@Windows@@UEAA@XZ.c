/*
 * XREFs of ??1CompositionIslandSite@Composition@UI@Windows@@UEAA@XZ @ 0x180010FDC
 * Callers:
 *     ??1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ @ 0x180010F74 (--1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandSite::~CompositionIslandSite(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  char *v2; // rcx

  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 232);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 224);
  v2 = (char *)*((_QWORD *)this + 26);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 200);
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionIslandSite *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
