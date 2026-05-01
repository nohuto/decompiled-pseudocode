/*
 * XREFs of ??1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x180466474
 * Callers:
 *     ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x180466CE0 (--_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::~CUndockedSearchAppExperienceManagerConfig(
        CUndockedSearchAppExperienceManagerConfig *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (CUndockedSearchAppExperienceManagerConfig *)((char *)this + 24);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 2) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 16));
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
}
