/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800FCA18
 * Callers:
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged @ 0x18003BAA0 (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--OnIdleStateChanged.c)
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x1800FC7FC (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180043A68 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800C9254 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // eax
  ExperienceManagerUtils *v8; // rdx
  unsigned int v9; // r8d
  int v10; // eax
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // rdx
  char v14; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-40h] BYREF
  char *v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *((_BYTE *)this + 53) = a2 != 0;
  v4 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         (__int64)this,
         _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 5u
    && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200000000000LL) == *(_QWORD *)(v4 + 24) )
  {
    v11 = *((_BYTE *)this + 53);
    v18 = 0;
    v14 = v11;
    v17 = 1;
    v16 = &v14;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1806CDCAC, 0LL, 0LL, 3u, &v15);
  }
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v5) = *((_BYTE *)this + 53);
    v7 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7);
    v8 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      if ( !a2 )
      {
        v9 = *((_DWORD *)this + 18);
        if ( v9 )
        {
          v10 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView((__int64)this + 72, v8, v9);
          if ( v10 >= 0 )
          {
            *((_DWORD *)this + 18) = 0;
            return 0LL;
          }
          v12 = (unsigned int)v10;
          v13 = 190LL;
        }
        else
        {
          v12 = 2147947423LL;
          v13 = 187LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
          (const char *)v12);
        return 0LL;
      }
      ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((_DWORD *)this + 18, (__int64)v8);
    }
  }
  return 0LL;
}
