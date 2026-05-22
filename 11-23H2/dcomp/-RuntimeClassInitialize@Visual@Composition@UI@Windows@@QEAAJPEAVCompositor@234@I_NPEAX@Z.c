/*
 * XREFs of ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC
 * Callers:
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x180086A74 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180111584 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE.c)
 *     ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z @ 0x18011B6E4 (-RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180121E0C (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TY.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121EE4 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MI_ea_180121EE4.c)
 *     ?RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180198848 (-RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C (-RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::RuntimeClassInitialize(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3,
        bool a4,
        void *a5)
{
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a5 )
  {
    v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, a3, a5, 1);
    if ( v6 >= 0 )
      goto LABEL_3;
    v8 = 111LL;
  }
  else
  {
    v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, a3, a4);
    if ( v6 >= 0 )
    {
LABEL_3:
      *((_DWORD *)this + 65) &= 0xFFFFFE00;
      result = 0LL;
      *((_WORD *)this + 132) = 256;
      return result;
    }
    v8 = 115LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
