/*
 * XREFs of _lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_::operator() @ 0x1804B3EE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___::Run @ 0x1804B45F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_51a2f8a6ca084dc5a8b9443e2ed32d78___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_::operator()(__int64 a1, struct IApplicationView *a2)
{
  __int64 WindowForView; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  WindowForView = ApplicationViewHelpers::GetWindowForView(
                    *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))(a1 + 16),
                    a2);
  if ( WindowForView )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    v5 = CMarshaledInterface::_Unmarshal(
           (CMarshaledInterface *)(a1 + 24),
           &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
           &v8,
           0);
    v4 = v5;
    if ( v5 < 0
      || (v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, WindowForView, a1),
          v4 = v5,
          v5 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)0x80070057LL);
  }
  return v4;
}
