/*
 * XREFs of ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180014578 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800435E0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x1801AFCE0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_1801AFCE0.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x180211CC4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802698F4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 */

__int64 __fastcall CCursorVisual::RenderContent(CCursorState **this, struct CDrawingContext *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CCursorState *v8; // rcx
  char v9; // bp
  __int64 **v10; // r15
  __int64 v11; // r12
  __int64 *i; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // rax
  _DWORD v22[3]; // [rsp+40h] [rbp-58h] BYREF
  int v23; // [rsp+4Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = CVisual::RenderContent((CVisual *)this, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = this[93];
    v9 = 0;
    if ( v8 )
    {
      v10 = (__int64 **)*((_QWORD *)v8 + 31);
      v11 = *((_QWORD *)this[2] + 76);
      for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 32) )
        {
          if ( !v9 )
          {
            v22[0] = 4;
            v23 = 2;
            v13 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v22, 1);
            v14 = v13;
            if ( v13 < 0 )
            {
              v20 = 149LL;
LABEL_34:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
                (const char *)(unsigned int)v13);
              goto LABEL_37;
            }
            v9 = 1;
          }
        }
        else if ( v9 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v9 = 0;
        }
        v15 = v11 - i[2];
        if ( v15 < 0 )
        {
          v17 = v15 & 1 | ((unsigned __int64)(v11 - i[2]) >> 1);
          v16 = (float)(int)v17 + (float)(int)v17;
        }
        else
        {
          v16 = (float)(int)v15;
        }
        v18 = *((_QWORD *)this[93] + 33);
        if ( ((5 * v18) & 0x4000000000000000LL) != 0 )
          v19 = (float)(int)((unsigned __int64)(10 * v18) >> 1) + (float)(int)((unsigned __int64)(10 * v18) >> 1);
        else
          v19 = (float)(10 * v18);
        v13 = CDrawingContext::DrawBitmapRealization(
                a2,
                (struct IBitmapRealization *)i[3],
                (struct MilRectF *)((char *)i + 36),
                (struct MILMatrix3x2 *)((char *)i + 52),
                0,
                0,
                COERCE_INT(1.0 - (float)(v16 / v19)));
        v14 = v13;
        if ( v13 < 0 )
        {
          v20 = 167LL;
          goto LABEL_34;
        }
      }
      if ( CCursorVisual::IsVisible((CCursorVisual *)this) )
      {
        v21 = *((_QWORD *)a2 + 6);
        if ( !v21 || *(CCursorState ***)(v21 + 11032) != this )
        {
          if ( *((_BYTE *)this[93] + 72) )
          {
            if ( !v9 )
            {
              v22[0] = 4;
              v23 = 2;
              v13 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v22, 1);
              v14 = v13;
              if ( v13 < 0 )
              {
                v20 = 179LL;
                goto LABEL_34;
              }
              v9 = 1;
            }
          }
          else if ( v9 )
          {
            CDrawingContext::PopRenderOptionsInternal(a2, 1);
            v9 = 0;
          }
          CCursorState::EnsureCompositionResources(this[93]);
          v13 = CDrawingContext::DrawBitmapRealization(
                  a2,
                  *((struct IBitmapRealization **)this[93] + 14),
                  (CCursorState *)((char *)this[93] + 136),
                  (CCursorState *)((char *)this[93] + 152),
                  0,
                  0,
                  (int)FLOAT_1_0);
          v14 = v13;
          if ( v13 < 0 )
          {
            v20 = 195LL;
            goto LABEL_34;
          }
          this[94] = (CCursorState *)*((_QWORD *)this[2] + 62);
        }
      }
    }
    v14 = 0;
LABEL_37:
    if ( v9 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
