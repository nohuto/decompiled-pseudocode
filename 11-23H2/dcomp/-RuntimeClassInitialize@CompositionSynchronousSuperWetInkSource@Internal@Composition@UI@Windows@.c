/*
 * XREFs of ?RuntimeClassInitialize@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801852BC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801208F4 (--$MakeAndInitialize2@VCompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 182, 0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      10,
      0LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
