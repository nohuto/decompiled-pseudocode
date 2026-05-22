/*
 * XREFs of ?RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@@Z @ 0x18015BCDC
 * Callers:
 *     ??$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDwmCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18010DE80 (--$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04 (-RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIIntero.c)
 *     ?CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z @ 0x1800FF8B8 (-CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDwmCompositor::RuntimeClassInitialize(
        DirectComposition::CDevice **this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IInteropCompositorPartnerCallback *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int DwmChannel; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::InteropCompositor::RuntimeClassInitialize((__int64)this, (__int64)a2, (__int64)a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DwmChannel = DirectComposition::CDevice::CreateDwmChannel(
                   this[57],
                   (struct IDwmChannelProvider *)((unsigned __int64)(this + 161) & -(__int64)(this != 0LL)));
    v8 = DwmChannel;
    if ( DwmChannel >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)DwmChannel);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
