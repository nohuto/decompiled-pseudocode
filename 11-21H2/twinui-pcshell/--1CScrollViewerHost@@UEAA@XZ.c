/*
 * XREFs of ??1CScrollViewerHost@@UEAA@XZ @ 0x1804C0648
 * Callers:
 *     ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x1804C06E0 (--_ECScrollViewerHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CScrollViewerHost::~CScrollViewerHost(CScrollViewerHost *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 472);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 56);
  *((_DWORD *)this + 55) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
