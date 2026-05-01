/*
 * XREFs of ??1CScrollButtonContainer@@UEAA@XZ @ 0x18058B35C
 * Callers:
 *     ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x18058B3D0 (--_ECScrollButtonContainer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CScrollButtonContainer::~CScrollButtonContainer(CScrollButtonContainer *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 432);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 51);
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
