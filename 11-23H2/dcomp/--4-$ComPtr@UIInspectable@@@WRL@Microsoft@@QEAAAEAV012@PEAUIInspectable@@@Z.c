/*
 * XREFs of ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x180111748
 * Callers:
 *     ?put_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z @ 0x1800B7D30 (-put_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI.c)
 *     ?SetAutomationHostProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z @ 0x180113320 (-SetAutomationHostProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUIInspectab.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IInspectable>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
