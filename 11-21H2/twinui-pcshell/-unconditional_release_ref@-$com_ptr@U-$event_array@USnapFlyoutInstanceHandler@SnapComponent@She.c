/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1805B253C
 * Callers:
 *     ??1?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1805AE794 (--1-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805AEB70 (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??4?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805AEC70 (--4-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805B1410 (-add@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805B2074 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1805B6F68 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 *     ??$_Destroy_range@PEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@PEAU123456@@std@@YAXPEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAU123456@@Z @ 0x1805AD9D4 (--$_Destroy_range@PEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@PEAU.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref(
        unsigned int **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v4; // rbx

  v4 = *a1;
  *a1 = 0LL;
  if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)v4, a2, a3, a4) )
  {
    std::_Destroy_range<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler *>(
      (winrt::Windows::Foundation::IUnknown *)(v4 + 2),
      (winrt::Windows::Foundation::IUnknown *)&v4[2 * v4[1] + 2]);
    operator delete(v4);
  }
}
