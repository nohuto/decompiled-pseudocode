/*
 * XREFs of ?IsSameAppFrame@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NPEAUIApplicationFrame@@@Z @ 0x18022BFB2
 * Callers:
 *     ?OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803350F0 (-OnChromeOffsetsChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180335780 (-OnPositionChanged@GamingOverlayExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameAppFrame(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        struct IApplicationFrame *a2)
{
  __int64 v2; // rcx
  char v3; // bl

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  if ( v2 )
    return (*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v2 + 24LL))(v2, a2) != 0;
  return v3;
}
