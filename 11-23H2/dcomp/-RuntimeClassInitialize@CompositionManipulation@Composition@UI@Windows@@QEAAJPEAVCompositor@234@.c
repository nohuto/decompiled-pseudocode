/*
 * XREFs of ?RuntimeClassInitialize@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4SystemManipulationMode@@@Z @ 0x180161550
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4SystemManipulationMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionManipulation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4SystemManipulationMode@@@Z @ 0x1801530C4 (--$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionManipulation::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  __int64 v3; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)a1,
         a2,
         105,
         0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0,
      v3);
    result = 0LL;
    *(_DWORD *)(a1 + 152) = v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtmanipulation.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return result;
}
