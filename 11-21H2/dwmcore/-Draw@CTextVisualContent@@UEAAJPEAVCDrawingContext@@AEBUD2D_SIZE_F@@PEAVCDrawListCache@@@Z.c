/*
 * XREFs of ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C850
 * Callers:
 *     ?Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107BD0 (-Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802101D8 (-Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18025CC98 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 */

__int64 __fastcall CTextVisualContent::Draw(
        CTextVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CVisual *v6; // rax
  struct CDrawListCache *v7; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edi
  __int64 *v11; // r14
  __int64 *v12; // r15
  __int64 v13; // r12
  int DrawListCacheForTextObject; // eax
  struct CDrawListCache *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  CCompositionTextLine **v20; // r14
  CCompositionTextLine **v21; // r15
  CCompositionTextLine *v22; // r12
  CCompositionTextLine **v23; // r14
  CCompositionTextLine **v24; // r15
  struct CTreeData *v25; // r12
  CCompositionTextLine *v26; // r13
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  struct CDrawListCache *v29[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CDrawListCache *TreeData; // [rsp+88h] [rbp+10h] BYREF
  struct D2D_SIZE_F *v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v6 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
  TreeData = (struct CDrawListCache *)CVisual::FindTreeData(v6, *((const struct CVisualTree **)a2 + 991));
  v7 = TreeData;
  if ( !TreeData )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
  v9 = (_QWORD *)*((_QWORD *)this - 4);
  v10 = 0;
  v11 = (__int64 *)v9[91];
  v12 = (__int64 *)v9[92];
  if ( v11 == v12 )
  {
LABEL_11:
    v20 = (CCompositionTextLine **)v9[97];
    v21 = (CCompositionTextLine **)v9[98];
    if ( v20 == v21 )
    {
LABEL_18:
      v23 = (CCompositionTextLine **)v9[94];
      v24 = (CCompositionTextLine **)v9[95];
      if ( v23 == v24 )
        return 0LL;
      v25 = TreeData;
      while ( 1 )
      {
        v26 = *v23;
        TreeData = 0LL;
        DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v25, v10, &TreeData);
        v15 = TreeData;
        v16 = DrawListCacheForTextObject;
        if ( DrawListCacheForTextObject < 0 )
          break;
        DrawListCacheForTextObject = CCompositionTextLine::Draw(v26, a2, v32, TreeData);
        v16 = DrawListCacheForTextObject;
        if ( DrawListCacheForTextObject < 0 )
        {
          v28 = 64LL;
          goto LABEL_28;
        }
        ++v10;
        if ( v15 )
          CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v15);
        if ( ++v23 == v24 )
          return 0LL;
      }
      v28 = 60LL;
    }
    else
    {
      while ( 1 )
      {
        v22 = *v20;
        v29[0] = 0LL;
        DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v7, v10, v29);
        v15 = v29[0];
        v16 = DrawListCacheForTextObject;
        if ( DrawListCacheForTextObject < 0 )
          break;
        DrawListCacheForTextObject = CCompositionTextLine::Draw(v22, a2, v32, v29[0]);
        v16 = DrawListCacheForTextObject;
        if ( DrawListCacheForTextObject < 0 )
        {
          v28 = 50LL;
          goto LABEL_28;
        }
        ++v10;
        if ( v15 )
          CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v15);
        v7 = TreeData;
        if ( ++v20 == v21 )
        {
          v9 = (_QWORD *)*((_QWORD *)this - 4);
          goto LABEL_18;
        }
      }
      v28 = 46LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v13 = *v11;
      v29[0] = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v7, v10, v29);
      v15 = v29[0];
      v16 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
        break;
      v17 = *(_QWORD *)(v13 + 80);
      if ( v17 )
      {
        v18 = v17 + 64 + *(int *)(*(_QWORD *)(v17 + 64) + 8LL);
        v19 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v18 + 16LL))(
                v18,
                a2,
                v32,
                v29[0]);
        v16 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
            (const char *)(unsigned int)v19);
          v27 = v16;
          v28 = 36LL;
          goto LABEL_29;
        }
      }
      ++v10;
      if ( v15 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v15);
      v7 = TreeData;
      if ( ++v11 == v12 )
      {
        v9 = (_QWORD *)*((_QWORD *)this - 4);
        goto LABEL_11;
      }
    }
    v28 = 32LL;
  }
LABEL_28:
  v27 = (unsigned int)DrawListCacheForTextObject;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)v27);
  if ( v15 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v15);
  return v16;
}
