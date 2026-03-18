/*
 * XREFs of ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C091C
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18000E2B8 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C0B5C (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, __int128 *a2, char a3, __int64 a4)
{
  bool v5; // cf
  _DWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax
  int v9; // r9d
  int v10; // r10d
  _DWORD *v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 )
  {
    v12 = 0LL;
    if ( !a3 )
    {
      v5 = *(_BYTE *)(a1 + 11217) != 0;
      v13 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + (v5 ? 18344LL : 18208LL), (__int64)a2, (float *)&v13, a4);
      a2 = &v13;
    }
    v6 = PixelAlign(v14, (__int64)a2);
    v7 = *(_QWORD *)(a1 + 176);
    v12 = *(_OWORD *)v6;
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 16LL))(v7, &v12);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 16LL))(*(_QWORD *)(a1 + 176), 0LL);
    result = *(_QWORD **)(a1 + 18600);
    if ( result )
    {
      v9 = *(_DWORD *)(a1 + 104);
      v10 = *(_DWORD *)(a1 + 108);
      if ( v9 <= 0 || v10 <= 0 )
      {
        result = (_QWORD *)*result;
        *(_DWORD *)result = 0;
      }
      else
      {
        v11 = (_DWORD *)*result;
        v11[1] = 0;
        v11[7] = 0;
        v11[3] = 0;
        v11[8] = v9;
        v11[4] = 16;
        result = v11 + 5;
        *v11 = 2;
        v11[2] = v9;
        v11[6] = 16;
        v11[5] = v10;
      }
    }
  }
  *(_BYTE *)(a1 + 18611) = 1;
  return result;
}
