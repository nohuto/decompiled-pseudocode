/*
 * XREFs of ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x180260F8C
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E1E84 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CMILMatrix::Transform2DBounds(
        CMILMatrix *this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        __int64 a4)
{
  __int64 i; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    *(float *)&v7[i] = (float)*(&a2->left + i);
  v6 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)this, (__int64)v7, (float *)&v6, a4);
  *a3 = *(struct tagRECT *)CMilRectLFromMilRectF(v7, (__int64)&v6);
}
