/*
 * XREFs of ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48
 * Callers:
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800BA53C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800BA720 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAB90 (-Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C5D20 (-Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C5E7C (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CA7CC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CAAE0 (-Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CE114 (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CE550 (-Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800CFF78 (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::ActivateInstance<ContentManagement::IContentManagementBroker>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v9; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = L"ContentManagement.ContentManagementBroker";
  v8 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, &v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1695LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5,
      v8);
  *a1 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(v8, &GUID_44431c59_c5ec_4253_94f7_27563a8a242f, a1);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
