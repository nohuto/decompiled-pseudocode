/*
 * XREFs of ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075E694
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180752C34 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18075D218 (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18075D048 (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 */

__int64 __fastcall CBackupLocationManager::_PersistLnk(
        PCWSTR *this,
        struct IShellLinkW *a2,
        const unsigned __int16 *a3,
        struct _ITEMIDLIST **a4)
{
  int KnownFolderPidl; // ebx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF

  KnownFolderPidl = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
                      a2,
                      &GUID_0000010b_0000_0000_c000_000000000046,
                      &v9);
  if ( KnownFolderPidl >= 0 )
  {
    KnownFolderPidl = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD))(*(_QWORD *)v9 + 48LL))(
                        v9,
                        a3,
                        0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( KnownFolderPidl >= 0 )
    {
      KnownFolderPidl = CBackupLocationManager::_CreateKnownFolderPidl(this, a3, a4);
      if ( KnownFolderPidl < 0 )
        return (unsigned int)SHParseDisplayName(a3, 0LL, a4, 0, 0LL);
    }
  }
  return (unsigned int)KnownFolderPidl;
}
