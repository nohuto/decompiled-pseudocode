/*
 * XREFs of ??$Destroy@UICompositionShape@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICompositionShape@Composition@UI@Windows@@@Z @ 0x1801A0278
 * Callers:
 *     ??R_lambda_41bb01c7cfe485fd071b4a3ecead6adf_@@QEBA@XZ @ 0x1801A07FC (--R_lambda_41bb01c7cfe485fd071b4a3ecead6adf_@@QEBA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::ICompositionShape>(__int64 *a1)
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
