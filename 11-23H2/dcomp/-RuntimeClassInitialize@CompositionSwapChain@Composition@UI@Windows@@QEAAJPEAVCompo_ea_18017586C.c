/*
 * XREFs of ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18017586C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120774 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSwapChain::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionSwapChain *this,
        struct Windows::UI::Composition::Compositor *a2,
        void *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, void *, char *); // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  if ( v5 < 0 )
  {
    v6 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionswapchaing.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 456LL);
  v9 = *(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v8 + 80LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 18);
  v5 = v9(v8, a3, (char *)this + 144);
  if ( v5 < 0 )
  {
    v6 = 69LL;
    goto LABEL_3;
  }
  v11 = *((_QWORD *)this + 3);
  v12 = *(_BYTE *)(v11 + 452);
  if ( (v12 & 1) == 0 )
  {
    v13 = *(_DWORD *)(v11 + 448) == 0;
    *(_BYTE *)(v11 + 452) = v12 | 1;
    if ( v13 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v11,
        v10);
  }
  return 0LL;
}
