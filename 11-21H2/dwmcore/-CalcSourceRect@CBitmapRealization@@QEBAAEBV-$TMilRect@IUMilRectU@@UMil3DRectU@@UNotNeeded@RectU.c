/*
 * XREFs of ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0C4
 * Callers:
 *     ?GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18000CFD4 (-GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0B0 (-GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeede.c)
 *     ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180116354 (-GetSize@CDxHandleYUVBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802A5C00 (-GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNe.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801B7DD8 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 */

_DWORD *__fastcall CBitmapRealization::CalcSourceRect(__int64 a1)
{
  int v1; // edi
  _DWORD *result; // rax
  int *v4; // rsi
  bool v5; // zf
  int v6; // r10d
  int v7; // r11d
  bool v8; // cl
  int v9; // ecx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-20h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 312) )
    return (_DWORD *)(a1 + 296);
  v4 = (int *)(a1 + 148);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  v5 = *(_DWORD *)(a1 + 80) == 3;
  v6 = v10;
  v7 = HIDWORD(v10);
  v11[1] = v10;
  v11[0] = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v8 = *v4 <= v4[2]
      && v4[1] <= v4[3]
      && (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(v11, v4);
  }
  else if ( *(_BYTE *)(a1 + 313) && v4[2] - *v4 > 0 )
  {
    v8 = v4[3] - v4[1] > 0;
  }
  result = (_DWORD *)(a1 + 296);
  if ( v8 )
  {
    v7 = *(_DWORD *)(a1 + 160);
    v6 = *(_DWORD *)(a1 + 156);
    v1 = *(_DWORD *)(a1 + 152);
    v9 = *v4;
  }
  else
  {
    v9 = 0;
  }
  *result = v9;
  *(_DWORD *)(a1 + 300) = v1;
  *(_DWORD *)(a1 + 304) = v6;
  *(_DWORD *)(a1 + 308) = v7;
  *(_BYTE *)(a1 + 312) = 1;
  return result;
}
