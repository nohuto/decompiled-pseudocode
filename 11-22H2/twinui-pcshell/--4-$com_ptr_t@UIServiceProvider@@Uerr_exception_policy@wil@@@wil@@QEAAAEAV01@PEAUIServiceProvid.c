/*
 * XREFs of ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1800A268C
 * Callers:
 *     ?subscribe_to_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A2630 (-subscribe_to_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Interna.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3070 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7470 (-SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801B5770 (-PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferServic.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
