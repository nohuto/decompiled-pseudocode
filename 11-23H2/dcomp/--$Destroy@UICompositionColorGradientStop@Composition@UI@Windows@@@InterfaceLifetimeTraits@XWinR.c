/*
 * XREFs of ??$Destroy@UICompositionColorGradientStop@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICompositionColorGradientStop@Composition@UI@Windows@@@Z @ 0x180172C78
 * Callers:
 *     ??R_lambda_9f26298b6f58b30aa277a78f5f550748_@@QEBA@XZ @ 0x18017329C (--R_lambda_9f26298b6f58b30aa277a78f5f550748_@@QEBA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::ICompositionColorGradientStop>(
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
