/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180048C70
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180048CD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180048CD0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180048CF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180048CF0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180048D10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180048D10.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180048D30 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180048D50 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x180048D70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180048D70.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x180048D90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180048D90.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180048DB0 (-AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180048DD0 (-AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 112);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 112), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
