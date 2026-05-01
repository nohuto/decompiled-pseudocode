/*
 * XREFs of ?InitFromItem@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1802EA352
 * Callers:
 *     ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1806CD53C (-GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::InitFromItem(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v5 = (**a2)(a2, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 80LL))(v7, a4, 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
