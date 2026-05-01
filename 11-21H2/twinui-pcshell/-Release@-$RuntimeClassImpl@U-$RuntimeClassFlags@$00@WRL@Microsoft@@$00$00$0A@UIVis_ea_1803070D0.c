/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803070D0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801EE3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801EE410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??1?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FFC (--1-$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x180303CA0 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180303FDC (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1803067C0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x180371008 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 *     ?Release@CJumpViewExperienceEventArgs@@UEAAKXZ @ 0x180373980 (-Release@CJumpViewExperienceEventArgs@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1803CB070 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 *     ?AsyncEventWorkCallback@?$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1803CD4E0 (-AsyncEventWorkCallback@-$EventInvocationContext@$00@details@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@.c)
 *     ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x1804081E0 (--$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VUwpViewHandledEventArgs@@@WRL.c)
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x18040B6B0 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 *     ?OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x180415AF0 (-OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
