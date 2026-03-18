/*
 * XREFs of ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x180017D60 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180209070 (-GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x18025B49C (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001A564 (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008DA94 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008DC78 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CVisualTree::Clean(CVisualTree *this, struct CPreComputeContext *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  CPreComputeContext *v6; // r8
  __int64 v7; // rax
  CPreComputeContext *v9; // rbx
  void **v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  CPreComputeContext **v13; // rax
  CPreComputeContext *v14; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CPreComputeContext *v16; // [rsp+40h] [rbp+8h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v5 + 112) == CurrentFrameId || (v7 = *(_QWORD *)(v5 + 64)) == 0 || !*(_BYTE *)(v7 + 96) )
  {
LABEL_4:
    if ( *((_QWORD *)this + 14) != GetCurrentFrameId() )
    {
      CVisualTree::BeginPreCompute(this);
      CVisualTree::EndPreCompute(this, 0);
    }
    return 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  if ( !v4 )
  {
    v13 = std::make_unique<CPreComputeContext,,0>(&v16);
    if ( &v17 != (char *)v13 )
    {
      v9 = *v13;
      *v13 = 0LL;
    }
    v14 = v16;
    if ( v16 )
    {
      CPreComputeContext::~CPreComputeContext((void **)v16);
      operator delete(v14, 0x798uLL);
    }
    v6 = v9;
    v10 = (void **)v9;
  }
  v11 = CPreComputeContext::PreCompute(v6, this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v10 )
    {
      CPreComputeContext::~CPreComputeContext(v10);
      operator delete(v10, 0x798uLL);
    }
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x173,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
    (const char *)(unsigned int)v11);
  if ( v10 )
  {
    CPreComputeContext::~CPreComputeContext(v10);
    operator delete(v10, 0x798uLL);
  }
  return v12;
}
