/*
 * XREFs of ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18027E3B0
 * Callers:
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x18027E390 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x18027E5C0 (-ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18027DB8C (--$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 */

char *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::Current(char *a1)
{
  char *v2; // rbx
  char *v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>(&v4);
  if ( v4 )
    v2 = v4 - 16;
  else
    v2 = 0LL;
  v4 = 0LL;
  v5 = v2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)a1,
    (_QWORD *)v2 + 4);
  if ( v2 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v5);
  return a1;
}
