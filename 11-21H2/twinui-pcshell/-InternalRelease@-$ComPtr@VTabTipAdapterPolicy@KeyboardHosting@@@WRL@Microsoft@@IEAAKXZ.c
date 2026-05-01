/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x180177A68
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1800B9490 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1800B9760 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18046EF58 (--1-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x18046F41C (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180177A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellKeyboardHos.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
