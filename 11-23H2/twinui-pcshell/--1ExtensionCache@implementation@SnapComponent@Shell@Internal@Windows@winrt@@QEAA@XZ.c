/*
 * XREFs of ??1ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801C60A4
 * Callers:
 *     ??__Finst@?1??GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ@YAXXZ @ 0x1802C7EE0 (--__Finst@-1--GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180681080 (--$_Destroy_range@V-$allocator@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Interna.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::~ExtensionCache(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>>(
      v2,
      *((_QWORD *)this + 2));
    std::_Deallocate<16,0>(
      *((void **)this + 1),
      (*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
