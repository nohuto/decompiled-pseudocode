/*
 * XREFs of _lambda_9365875fc030439f6f0f43b5b8276b2a_::operator() @ 0x1800B4380
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9365875fc030439f6f0f43b5b8276b2a___::Run @ 0x1800B4370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9365875fc030439f6f0f43b5b8276b2a___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall lambda_9365875fc030439f6f0f43b5b8276b2a_::operator()(CMarshaledInterface *this)
{
  HWND result; // rax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  result = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( result )
  {
    result = (HWND)GetPropW(result, L"IsExplorerShuttingDown");
    if ( !result )
    {
      v6 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
      v3 = CMarshaledInterface::_Unmarshal(this, &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa, &v6, 0);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25F,
          (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v3,
          v4);
      else
        (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, 0LL, 0LL);
      return (HWND)Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
    }
  }
  return result;
}
