/*
 * XREFs of ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1801FF7DC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z @ 0x1801FF678 (--0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801FF898 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDebugVisualImage::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CDebugVisualImage **a3)
{
  CDebugVisualImage *v7; // rax
  CDebugVisualImage *v8; // rax
  CResource *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v7 = (CDebugVisualImage *)DefaultHeap::AllocClear(0x738uLL);
  if ( !v7 )
  {
    v9 = 0LL;
    goto LABEL_9;
  }
  v8 = CDebugVisualImage::CDebugVisualImage(v7, a1);
  v9 = v8;
  if ( !v8 )
  {
LABEL_9:
    v11 = -2147024882;
    v13 = 38LL;
    v12 = 2147942414LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)v12);
    if ( v9 )
      CResource::InternalRelease(v9);
    return v11;
  }
  CMILRefCountImpl::AddReference((CDebugVisualImage *)((char *)v8 + 8));
  v10 = CDebugVisualImage::Initialize(v9, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 40LL;
    goto LABEL_10;
  }
  *a3 = v9;
  return 0;
}
