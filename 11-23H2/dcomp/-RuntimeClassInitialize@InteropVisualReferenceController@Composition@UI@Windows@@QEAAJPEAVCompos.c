/*
 * XREFs of ?RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18019A7F0
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18015C164 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVIntero.c)
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015C228 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V12_ea_18015C228.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z @ 0x18016F474 (-RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisualReferenceController::RuntimeClassInitialize(
        Windows::UI::Composition::InteropVisualReferenceController *this,
        DirectComposition::CDevice **a2,
        unsigned __int8 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 result; // rax
  _DWORD *ProxySlot; // rax
  _DWORD *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::UI::Composition::Private::VisualReferenceController::RuntimeClassInitialize(this, a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *((_BYTE *)this + 200) = a3;
    ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
    v10 = ProxySlot;
    if ( ProxySlot )
    {
      ProxySlot[3] = *((_DWORD *)this + 32);
      *(_QWORD *)ProxySlot = &DirectComposition::CVisualReferenceControllerProxy::`vftable';
      result = 0LL;
      v10[2] = 1;
      *((_QWORD *)this + 24) = v10;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisualreferencecontroller.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisualreferencecontroller.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  return result;
}
