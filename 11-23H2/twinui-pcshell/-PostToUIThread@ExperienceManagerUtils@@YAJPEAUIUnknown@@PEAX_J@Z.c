/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800E8E48
 * Callers:
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1800702B0 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180127FAC (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B7CC4 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801BC674 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_e6bda910243bda3f95cfe3ad59ff6323_::_lambda_invoker_cdecl_ @ 0x1801E33F0 (_lambda_e6bda910243bda3f95cfe3ad59ff6323_--_lambda_invoker_cdecl_.c)
 *     _lambda_5681b96979f4595f6088ea884d9c2678_::_lambda_invoker_cdecl_ @ 0x180201A90 (_lambda_5681b96979f4595f6088ea884d9c2678_--_lambda_invoker_cdecl_.c)
 *     _lambda_1888c9d7a439d9ca514d27335cf749bb_::operator() @ 0x1802021B0 (_lambda_1888c9d7a439d9ca514d27335cf749bb_--operator().c)
 *     _lambda_366d32c7985cad6be2686e905051f209_::operator() @ 0x180202270 (_lambda_366d32c7985cad6be2686e905051f209_--operator().c)
 *     _lambda_5384bb77a032ee15e026d6375920cb0d_::operator() @ 0x18020231C (_lambda_5384bb77a032ee15e026d6375920cb0d_--operator().c)
 *     _lambda_65ec20363d565d1e2da0db1fb00f3b21_::operator() @ 0x180202434 (_lambda_65ec20363d565d1e2da0db1fb00f3b21_--operator().c)
 *     _lambda_f6905a9ca7d137af961aa077b7ca39b8_::operator() @ 0x1802024EC (_lambda_f6905a9ca7d137af961aa077b7ca39b8_--operator().c)
 *     _lambda_f7729cf07ac1cf5d574dc5881a9cd216_::operator() @ 0x180202604 (_lambda_f7729cf07ac1cf5d574dc5881a9cd216_--operator().c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18042FF40 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18045FA60 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_6699240da0a68d9d394aec2180beabac_::_lambda_invoker_cdecl_ @ 0x180470C20 (_lambda_6699240da0a68d9d394aec2180beabac_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(ExperienceManagerUtils *this, struct IUnknown *a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, (unsigned int)a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3,
      v7);
  return v4;
}
