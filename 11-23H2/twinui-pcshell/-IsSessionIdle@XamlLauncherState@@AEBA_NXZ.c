/*
 * XREFs of ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180202DB4
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x18003E4D0 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x180202E1C (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall XamlLauncherState::IsSessionIdle(XamlLauncherState *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  v6 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 24LL))(v1, &v6);
    if ( v3 >= 0 )
      return v6 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD70,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
  }
  return v2;
}
