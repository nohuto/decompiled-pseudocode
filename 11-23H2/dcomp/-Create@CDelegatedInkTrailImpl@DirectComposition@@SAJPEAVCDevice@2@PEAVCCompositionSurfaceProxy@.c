/*
 * XREFs of ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968
 * Callers:
 *     ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF760 (-CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDComp.c)
 *     ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z @ 0x18011B6E4 (-RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDelegatedInkTrailImpl@DirectComposition@@AEAA@XZ @ 0x1800E64B0 (--0CDelegatedInkTrailImpl@DirectComposition@@AEAA@XZ.c)
 *     ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z @ 0x1800E6AB0 (-Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurface.c)
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::Create(
        struct DirectComposition::CDevice *a1,
        struct DirectComposition::CCompositionSurfaceProxy *a2,
        struct DirectComposition::CDelegatedInkTrailImpl **a3)
{
  DirectComposition::CDelegatedInkTrailImpl *v6; // rax
  DirectComposition::CDelegatedInkTrailImpl *v7; // rbx
  DirectComposition::CDelegatedInkTrailImpl *v8; // rax
  DirectComposition::CDelegatedInkTrailImpl *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DirectComposition::CDelegatedInkTrailImpl *v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = (DirectComposition::CDelegatedInkTrailImpl *)DefaultHeap::Alloc(0x88uLL);
  v7 = v6;
  if ( !v6 )
  {
    v16 = 0LL;
    goto LABEL_7;
  }
  memset_0(v6, 0, 0x88uLL);
  v8 = DirectComposition::CDelegatedInkTrailImpl::CDelegatedInkTrailImpl(v7);
  v16 = v8;
  v9 = v8;
  if ( !v8 )
  {
LABEL_7:
    v11 = -2147024882;
    v13 = 121LL;
    v12 = 2147942414LL;
    goto LABEL_8;
  }
  (**(void (__fastcall ***)(DirectComposition::CDelegatedInkTrailImpl *))v8)(v8);
  v10 = DirectComposition::CDelegatedInkTrailImpl::Initialize(v9, a1, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 123LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
      (const char *)v12);
    goto LABEL_9;
  }
  v16 = 0LL;
  v11 = 0;
  *a3 = v9;
LABEL_9:
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease(&v16);
  return v11;
}
