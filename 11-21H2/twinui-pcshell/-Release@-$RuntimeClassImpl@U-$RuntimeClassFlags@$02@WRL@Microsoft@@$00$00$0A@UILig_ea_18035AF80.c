/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18035AF80
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801F2F30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1801F2F30.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801F2F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1801F2F50.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1801F2F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1801F2F70.c)
 *     ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180357958 (--1-$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18035B308 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180375B0C (--$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?Release@CQuickConnectExperienceManager@@UEAAKXZ @ 0x1803792F0 (-Release@CQuickConnectExperienceManager@@UEAAKXZ.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18038A62C (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1804ADEFC (-InternalRelease@-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
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
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
