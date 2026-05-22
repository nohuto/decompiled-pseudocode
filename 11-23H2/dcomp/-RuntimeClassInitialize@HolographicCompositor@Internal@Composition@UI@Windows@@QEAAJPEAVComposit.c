/*
 * XREFs of ?RuntimeClassInitialize@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@U_GUID@@K@Z @ 0x180117A04
 * Callers:
 *     ??$MakeAndInitialize2@VHolographicCompositor@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositor@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAI@Z @ 0x180114C44 (--$MakeAndInitialize2@VHolographicCompositor@Internal@Composition@UI@Windows@@V12345@PEAVComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositor::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::HolographicCompositor *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct _GUID *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  v7 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 75, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      a3,
      0x10uLL);
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
