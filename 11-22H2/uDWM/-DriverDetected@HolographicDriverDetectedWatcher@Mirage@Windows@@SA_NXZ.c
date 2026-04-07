/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004DA68
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18004DBD4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A4254 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A6658 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  WCHAR *v5; // rax
  const char *v6; // r9
  WCHAR *v7; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v9; // eax
  unsigned int v10; // r8d
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( 1 )
  {
    pulLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&pulLen, &InterfaceClassGuid, 0LL, 0);
    v2 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v2 )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x77, v3, (const char *)v2, ulFlags);
    v4 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v4 = -1LL;
    v5 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v4);
    v7 = v5;
    if ( !v5 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x7A,
        (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        v6);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v5, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v9 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v9 )
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x85, v10, (const char *)v9, ulFlags);
      v0 = 1;
      if ( *v7 )
        break;
    }
    (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v7);
    if ( v0 )
      return 0;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v7);
  return 1;
}
