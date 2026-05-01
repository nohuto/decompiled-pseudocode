/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18004B1F0
 * Callers:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x18004B0D0 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800501FC (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@-$event@U-$TypedEventH.c)
 *     ?add@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@2@@Z @ 0x180190240 (-add@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundati.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180190380 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstr.c)
 *     ?add@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@2@@Z @ 0x180190458 (-add@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedE.c)
 *     ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180466284 (--1-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstr.c)
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1804664B4 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     ?remove@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18047EFA0 (-remove@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivat.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(
        unsigned int **a1)
{
  unsigned int *v1; // rdi
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  winrt::Windows::Foundation::IUnknown *v3; // rsi

  v1 = *a1;
  *a1 = 0LL;
  if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v1) )
  {
    v2 = (winrt::Windows::Foundation::IUnknown *)(v1 + 2);
    v3 = (winrt::Windows::Foundation::IUnknown *)&v1[2 * v1[1] + 2];
    while ( v2 != v3 )
    {
      if ( *(_QWORD *)v2 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
      v2 = (winrt::Windows::Foundation::IUnknown *)((char *)v2 + 8);
    }
    operator delete(v1);
  }
}
