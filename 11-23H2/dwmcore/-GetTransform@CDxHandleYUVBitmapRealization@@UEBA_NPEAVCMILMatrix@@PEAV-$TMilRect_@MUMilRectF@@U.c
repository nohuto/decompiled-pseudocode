/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180135E36
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122EB0 (-GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@M.c)
 * Callees:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18000D100 (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800DC3B8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18011B26C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180135D84 (-GetSize@CDxHandleYUVBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsIdentity@CMILMatrix@@QEBA_NXZ @ 0x18027004C (-IsIdentity@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransform(
        CDxHandleYUVBitmapRealization *a1,
        CMILMatrix *a2,
        __int64 a3)
{
  CBitmapRealization *v3; // r15
  float v7; // xmm2_4
  char result; // al
  const struct D2D_SIZE_U *Size; // rax
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  int v11; // [rsp+28h] [rbp-31h]
  int v12; // [rsp+2Ch] [rbp-2Dh]
  _BYTE v13[64]; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+70h] [rbp+17h]
  float v15[12]; // [rsp+80h] [rbp+27h]

  v3 = (CDxHandleYUVBitmapRealization *)((char *)a1 - 456);
  if ( (*((_DWORD *)a1 - 56) & 0x4000) != 0 )
  {
    CMILMatrix::SetToIdentity(a2);
    v14 = 0;
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(v3, (CMILMatrix *)v13, &v10, 0LL);
    v7 = (float)SHIDWORD(v10);
    v15[2] = (float)v11;
    v15[0] = (float)(int)v10;
    v15[3] = (float)v12;
    v15[1] = (float)SHIDWORD(v10);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v10) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.0000011920929 )
    {
      CMILMatrix::Translate(
        a2,
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v10) ^ _xmm),
        COERCE_FLOAT(LODWORD(v7) ^ _xmm));
    }
    if ( !CMILMatrix::IsIdentity((CMILMatrix *)v13) )
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v13);
    result = !CMILMatrix::IsIdentity(a2);
    if ( a3 )
      *(_OWORD *)a3 = *(_OWORD *)v15;
  }
  else
  {
    Size = (const struct D2D_SIZE_U *)CDxHandleYUVBitmapRealization::GetSize(a1, &v10);
    result = CBitmapRealization::CalcRotationTransform(v3, Size, a2);
    if ( a3 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(float *)(a3 + 8) = (float)*((int *)a1 - 62);
      *(float *)(a3 + 12) = (float)*((int *)a1 - 61);
    }
  }
  return result;
}
