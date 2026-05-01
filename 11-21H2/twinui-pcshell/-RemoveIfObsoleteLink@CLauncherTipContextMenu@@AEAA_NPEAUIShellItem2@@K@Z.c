/*
 * XREFs of ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x1801DA078
 * Callers:
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CLauncherTipContextMenu::RemoveIfObsoleteLink(const WCHAR *this, struct IShellItem2 *a2, int a3)
{
  const char *v4; // rax
  HRESULT (__stdcall *GetDisplayName)(IShellItem2 *, SIGDN, LPWSTR *); // rbx
  int v6; // eax
  const char *v7; // r9
  bool v8; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCWSTR lpFileName; // [rsp+30h] [rbp+8h] BYREF

  lpFileName = this;
  v4 = "W]fK";
  do
  {
    if ( a3 == *(_DWORD *)v4 )
      break;
    v4 += 4;
  }
  while ( v4 != "" );
  if ( v4 != "" )
  {
    lpFileName = 0LL;
    GetDisplayName = a2->lpVtbl->GetDisplayName;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpFileName,
      0LL);
    try
    {
      v6 = ((__int64 (__fastcall *)(struct IShellItem2 *, __int64, LPCWSTR *))GetDisplayName)(
             a2,
             2147844096LL,
             &lpFileName);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x207,
        (unsigned int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
        v7);
      return 0;
    }
    if ( v6 >= 0 )
    {
      v8 = DeleteFileW(lpFileName);
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpFileName);
      return v8;
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpFileName);
  }
  return 0;
}
