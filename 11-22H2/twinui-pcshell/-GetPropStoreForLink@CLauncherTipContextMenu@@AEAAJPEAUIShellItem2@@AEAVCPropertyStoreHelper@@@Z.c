/*
 * XREFs of ?GetPropStoreForLink@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@AEAVCPropertyStoreHelper@@@Z @ 0x1806CD53C
 * Callers:
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC758 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitFromItem@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1802EA352 (-InitFromItem@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLauncherTipContextMenu::GetPropStoreForLink(
        CLauncherTipContextMenu *this,
        struct IShellItem2 *a2,
        struct CPropertyStoreHelper *a3)
{
  HRESULT (__stdcall *BindToHandler)(IShellItem2 *, IBindCtx *, const GUID *const, const IID *const, void **); // rbx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11[2]; // [rsp+30h] [rbp-29h] BYREF
  PROPERTYKEY v12[3]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v13; // [rsp+7Ch] [rbp+23h]
  int v14; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)v11 = 0LL;
  BindToHandler = a2->lpVtbl->BindToHandler;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v11);
  v6 = ((__int64 (__fastcall *)(struct IShellItem2 *, _QWORD, const GUID *, GUID *, int *))BindToHandler)(
         a2,
         0LL,
         &BHID_PropertyStore,
         &GUID_bc110b6d_57e8_4148_a9c6_91015ab2f3a5,
         v11);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v12[0] = PKEY_Comment;
    v12[1] = PKEY_Link_TargetParsingPath;
    v12[2] = PKEY_Link_Arguments;
    v13 = PKEY_Winx_Hash;
    v14 = 2;
    v6 = CPropertyStoreHelperBase<IPropertyStore>::InitFromItem((__int64)a3, a2, v7, (__int64)v12);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 1060LL;
  }
  else
  {
    v9 = 1050LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v11);
  return v8;
}
