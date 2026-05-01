/*
 * XREFs of ?Release@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x180142220
 * Callers:
 *     ??$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAV?$ComPtr@VIMiniSearch@@@12@@Z @ 0x1801712CC (--$MakeAndInitialize@VUndockedSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider.c)
 *     ?Release@UndockedSearchAppExperienceManager@@W7EAAKXZ @ 0x1802993D0 (-Release@UndockedSearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1802993F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICor_ea_1802993F0.c)
 *     ?Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ @ 0x180299410 (-Release@UndockedSearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801422FC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::Release(UndockedSearchAppExperienceManager *this)
{
  signed __int64 v1; // rax
  UndockedSearchAppExperienceManager *v2; // r11
  unsigned int v3; // ebx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 5);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 - 1, v1);
    if ( v5 == v1 )
      goto LABEL_4;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_4:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(UndockedSearchAppExperienceManager *, __int64))(*(_QWORD *)v2 + 488LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
