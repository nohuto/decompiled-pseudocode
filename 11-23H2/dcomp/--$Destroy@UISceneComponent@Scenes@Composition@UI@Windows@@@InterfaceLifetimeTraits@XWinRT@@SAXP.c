/*
 * XREFs of ??$Destroy@UISceneComponent@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISceneComponent@Scenes@Composition@UI@Windows@@@Z @ 0x18014021C
 * Callers:
 *     ??R_lambda_7047ec3c05151097eb61dd9ef9625469_@@QEBA@XZ @ 0x180141738 (--R_lambda_7047ec3c05151097eb61dd9ef9625469_@@QEBA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::Scenes::ISceneComponent>(
        __int64 *a1)
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
