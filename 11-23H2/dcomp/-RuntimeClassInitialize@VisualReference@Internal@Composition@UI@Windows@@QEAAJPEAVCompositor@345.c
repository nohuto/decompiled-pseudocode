/*
 * XREFs of ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z @ 0x18015787C
 * Callers:
 *     ??$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReference@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121FC8 (--$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@34.c)
 *     ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z @ 0x18016F474 (-RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompo.c)
 *     ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x18019A9E0 (-RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::VisualReference::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::VisualReference *this,
        DirectComposition::CDevice **a2,
        int a3,
        unsigned __int8 a4,
        void *a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a5 )
  {
    v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, a3, a5, 0);
    if ( v5 < 0 )
    {
      v6 = 34LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualreference.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
           this,
           (struct Windows::UI::Composition::Compositor *)a2,
           a3,
           a4);
    if ( v5 < 0 )
    {
      v6 = 38LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
