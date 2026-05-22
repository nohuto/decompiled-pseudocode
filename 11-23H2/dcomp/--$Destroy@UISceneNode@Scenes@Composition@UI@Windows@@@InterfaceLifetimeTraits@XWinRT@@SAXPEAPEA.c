/*
 * XREFs of ??$Destroy@UISceneNode@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISceneNode@Scenes@Composition@UI@Windows@@@Z @ 0x180140258
 * Callers:
 *     ??R_lambda_98fa70a4ebc5bf98e37d565e5dc8e214_@@QEBA@XZ @ 0x180141818 (--R_lambda_98fa70a4ebc5bf98e37d565e5dc8e214_@@QEBA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::Scenes::ISceneNode>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
