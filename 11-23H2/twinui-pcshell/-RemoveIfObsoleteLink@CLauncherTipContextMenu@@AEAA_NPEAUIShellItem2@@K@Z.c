/*
 * XREFs of ?RemoveIfObsoleteLink@CLauncherTipContextMenu@@AEAA_NPEAUIShellItem2@@K@Z @ 0x1806CE3F4
 * Callers:
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC758 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CLauncherTipContextMenu::RemoveIfObsoleteLink(const WCHAR *this, struct IShellItem2 *a2, int a3)
{
  _DWORD *v4; // rax
  HRESULT (__stdcall *GetDisplayName)(IShellItem2 *, SIGDN, LPWSTR *); // rbx
  void **v6; // rax
  int v7; // eax
  const char *v8; // r9
  bool v9; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCWSTR lpFileName; // [rsp+30h] [rbp+8h] BYREF

  lpFileName = this;
  v4 = &CLauncherTipContextMenu::c_obsoleteItemsToBeRemoved;
  do
  {
    if ( a3 == *v4 )
      break;
    ++v4;
  }
  while ( v4 != (_DWORD *)&CLauncherTipContextMenu::c_rgSkippedItems );
  if ( v4 == (_DWORD *)&CLauncherTipContextMenu::c_rgSkippedItems )
    return 0;
  lpFileName = 0LL;
  GetDisplayName = a2->lpVtbl->GetDisplayName;
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&lpFileName);
  try
  {
    v7 = ((__int64 (__fastcall *)(struct IShellItem2 *, __int64, void **))GetDisplayName)(a2, 2147844096LL, v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x22B,
      (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
      v8);
    return 0;
  }
  if ( v7 < 0 )
  {
    if ( lpFileName )
      CoTaskMemFree((LPVOID)lpFileName);
    return 0;
  }
  v9 = DeleteFileW(lpFileName);
  if ( lpFileName )
    CoTaskMemFree((LPVOID)lpFileName);
  return v9;
}
