/*
 * XREFs of ??R?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@QEBAXAEBUGameBarWindowControl@GamingOverlay@Internal@23@AEBW4GameBarWindowState@5623@@Z @ 0x18034177C
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@34@W4GameBarWindowState@7834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@1@AEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@41@AEBW4GameBarWindowState@7841@@Z @ 0x1803412A0 (--$invoke@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4Gam.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@V_lambda_0f62b1f7ed7b6146855d7acf47befb77_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x1803422D0 (-Invoke@-$delegate@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
