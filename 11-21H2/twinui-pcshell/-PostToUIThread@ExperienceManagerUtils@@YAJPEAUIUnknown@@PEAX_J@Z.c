/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8
 * Callers:
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x180040F30 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCB6C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCB9C (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCBCC (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _lambda_7e31fb8d4baf8793350399f3d3480ca0_::_lambda_invoker_cdecl_ @ 0x1801ACD50 (_lambda_7e31fb8d4baf8793350399f3d3480ca0_--_lambda_invoker_cdecl_.c)
 *     _lambda_eb5df14b175842175d09e10e311e8c49_::_lambda_invoker_cdecl_ @ 0x1801ACDC0 (_lambda_eb5df14b175842175d09e10e311e8c49_--_lambda_invoker_cdecl_.c)
 *     _lambda_f12d63f3c6394727fafa6ac2bd9a7185_::_lambda_invoker_cdecl_ @ 0x1801ACE20 (_lambda_f12d63f3c6394727fafa6ac2bd9a7185_--_lambda_invoker_cdecl_.c)
 *     _lambda_3b43cee47a910f13c141c9ab85b011b8_::operator() @ 0x1801AD21C (_lambda_3b43cee47a910f13c141c9ab85b011b8_--operator().c)
 *     _lambda_4fae964a0789c82928c2c47e65ba2907_::operator() @ 0x1801AD2DC (_lambda_4fae964a0789c82928c2c47e65ba2907_--operator().c)
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0 (_lambda_751c3952807d6b9c6862705cee6a52fd_--operator().c)
 *     _lambda_89aeecb7bdfb5f34c088a312aff206e3_::operator() @ 0x1801AD508 (_lambda_89aeecb7bdfb5f34c088a312aff206e3_--operator().c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18035DF20 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _lambda_43df3c365d04f10d3e7007e62c5d1ec7_::_lambda_invoker_cdecl_ @ 0x180370B90 (_lambda_43df3c365d04f10d3e7007e62c5d1ec7_--_lambda_invoker_cdecl_.c)
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18038BB20 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_f3278a72fc5e28a32bc04ca67a30bee5_::_lambda_invoker_cdecl_ @ 0x180392770 (_lambda_f3278a72fc5e28a32bc04ca67a30bee5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FACF4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(ExperienceManagerUtils *this, struct IUnknown *a2, void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, (unsigned int)a3, v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
