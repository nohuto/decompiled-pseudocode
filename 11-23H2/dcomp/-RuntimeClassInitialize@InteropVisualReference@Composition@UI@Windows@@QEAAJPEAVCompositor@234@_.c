/*
 * XREFs of ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x18019A9E0
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReference@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x18015C080 (--$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropComposito.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z @ 0x18015787C (-RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisualReference::RuntimeClassInitialize(
        Windows::UI::Composition::InteropVisualReference *this,
        DirectComposition::CDevice **a2,
        unsigned __int8 a3,
        void *a4)
{
  char v4; // di
  int v7; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  _DWORD *ProxySlot; // rax
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3;
  if ( a4 )
  {
    v7 = Windows::UI::Composition::Internal::VisualReference::RuntimeClassInitialize(this, a2, 200, 1u, a4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisualreference.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v4 = 1;
  }
  else
  {
    v12 = Windows::UI::Composition::Internal::VisualReference::RuntimeClassInitialize(this, a2, 200, a3, 0LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisualreference.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
  *((_BYTE *)this + 176) = v4;
  ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
  v11 = ProxySlot;
  if ( ProxySlot )
  {
    ProxySlot[3] = *((_DWORD *)this + 32);
    *(_QWORD *)ProxySlot = &DirectComposition::CVisualReferenceProxy::`vftable';
    result = 0LL;
    v11[2] = 1;
    *((_QWORD *)this + 21) = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisualreference.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
