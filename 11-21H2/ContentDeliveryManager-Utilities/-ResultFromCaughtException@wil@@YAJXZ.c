/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044374
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800351D4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800F424E (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$14 @ 0x1800F429C (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$14.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch$1 @ 0x1800F631E (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppInfo--RuntimeClassIni.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$10 @ 0x1800F63CE (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800F63CE.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$16 @ 0x1800F6D21 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--catch$16.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180047D7C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this, void *a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = *(unsigned int *)g_pfnResultFromCaughtExceptionInternal(v5, 0LL, 0LL, &v7), (int)result >= 0) )
  {
    wil::details::in1diag3::_FailFast_Hr(retaddr, a2, a3, (const char *)0x8007023ELL, v4);
  }
  return result;
}
