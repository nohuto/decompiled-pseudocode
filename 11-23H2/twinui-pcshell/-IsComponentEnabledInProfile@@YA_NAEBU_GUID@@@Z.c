/*
 * XREFs of ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4
 * Callers:
 *     ?IsPenMenuSystemTrayManagerEnabled@@YA_NXZ @ 0x18008AE70 (-IsPenMenuSystemTrayManagerEnabled@@YA_NXZ.c)
 *     ?IsHoloImmersiveShellExtensionPointComponentEnabled@@YA_NXZ @ 0x18014E1C0 (-IsHoloImmersiveShellExtensionPointComponentEnabled@@YA_NXZ.c)
 *     ?IsAILPositionerEnabled@@YA_NXZ @ 0x18014E250 (-IsAILPositionerEnabled@@YA_NXZ.c)
 *     ?IsDashboardManagerEnabled@@YA_NXZ @ 0x18014E610 (-IsDashboardManagerEnabled@@YA_NXZ.c)
 *     ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x18014EA70 (-IsMeetAndChatManagerEnabled@@YA_NXZ.c)
 *     ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x18014F110 (-IsWindowTabHostComponentEnabled@@YA_NXZ.c)
 *     ?IsTaskGroupsComponentEnabled@@YA_NXZ @ 0x18014F150 (-IsTaskGroupsComponentEnabled@@YA_NXZ.c)
 *     ?IsTouchGestureComponentEnabled@@YA_NXZ @ 0x18014F3F0 (-IsTouchGestureComponentEnabled@@YA_NXZ.c)
 *     ?IsThemeCoordinatorEnabled@@YA_NXZ @ 0x18014F4B0 (-IsThemeCoordinatorEnabled@@YA_NXZ.c)
 *     ?IsNPSMDesktopShellComponentEnabled@@YA_NXZ @ 0x1801511C0 (-IsNPSMDesktopShellComponentEnabled@@YA_NXZ.c)
 *     ?IsWirelessAppDiscoverabilityEnabled@@YA_NXZ @ 0x1801BF080 (-IsWirelessAppDiscoverabilityEnabled@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall IsComponentEnabledInProfile(GUID *rguid)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  FARPROC ProcAddress; // rbx
  char v5[16]; // [rsp+20h] [rbp-78h] BYREF
  OLECHAR sz[40]; // [rsp+30h] [rbp-68h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5[0] = 1;
  if ( dword_180990338 > *(_DWORD *)(ThreadLocalStoragePointer[tls_index] + 16LL) )
  {
    Init_thread_header(&dword_180990338);
    if ( dword_180990338 == -1 )
    {
      hModule = LoadLibraryExW(L"Container.Policy.Manager.dll", 0LL, 0x800u);
      Init_thread_footer(&dword_180990338);
    }
  }
  if ( hModule )
  {
    ProcAddress = GetProcAddress(hModule, "GetContainerPolicyBool");
    if ( ProcAddress )
    {
      if ( StringFromGUID2(rguid, sz, 39) )
        ((void (__fastcall *)(OLECHAR *, char *))ProcAddress)(sz, v5);
    }
  }
  return v5[0];
}
