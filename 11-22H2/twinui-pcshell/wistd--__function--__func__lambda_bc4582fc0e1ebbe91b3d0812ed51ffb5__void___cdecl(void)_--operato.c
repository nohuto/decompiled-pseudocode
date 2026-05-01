/*
 * XREFs of wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::operator() @ 0x1801DDF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800DECB0 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801BC674 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 16),
    &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20,
    &v5);
  v2 = CControlCenterExperienceManager::PostTargetedMessage(*(struct IUnknown **)(a1 + 8), 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x506,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
}
