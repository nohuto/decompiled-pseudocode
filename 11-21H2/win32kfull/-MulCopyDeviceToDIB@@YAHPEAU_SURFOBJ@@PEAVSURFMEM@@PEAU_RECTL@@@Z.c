/*
 * XREFs of ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028C190 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A00C0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A2140 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A32C0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C016F090 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 */

__int64 __fastcall MulCopyDeviceToDIB(struct _SURFOBJ *a1, struct SURFMEM *a2, struct _RECTL *a3)
{
  struct _RECTL v3; // xmm0
  unsigned int v4; // ebx
  __int64 p_hdev; // rax
  LONG v7; // r15d
  LONG top; // r12d
  __int64 p_sizlBitmap; // rcx
  __int64 v12; // rax
  LONG v13; // edx
  LONG right; // r8d
  LONG v15; // edx
  int v16; // ecx
  __int64 p_cy; // rax
  LONG bottom; // edx
  LONG v19; // ecx
  LONG v20; // r8d
  LONG v21; // edx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 p_iBitmapFormat; // rax
  unsigned int v25; // esi
  __int64 p_hsurf; // rax
  struct _POINTL v28; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v29[4]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+84h] [rbp+Bh]
  struct _RECTL v33; // [rsp+88h] [rbp+Fh] BYREF

  v3 = *a3;
  v4 = 0;
  p_hdev = (__int64)&a1->hdev;
  v29[3] = 0;
  v7 = _mm_cvtsi128_si32((__m128i)v3);
  v32 = 0;
  v33 = v3;
  top = v3.top;
  if ( !a1 )
    p_hdev = 48LL;
  p_sizlBitmap = (__int64)&a1->sizlBitmap;
  v12 = *(_QWORD *)p_hdev;
  v13 = *(_DWORD *)(v12 + 2560);
  if ( v7 < v13 )
    v7 = *(_DWORD *)(v12 + 2560);
  if ( !a1 )
    p_sizlBitmap = 56LL;
  right = v33.right;
  v15 = *(_DWORD *)p_sizlBitmap + v13;
  v16 = *(_DWORD *)(v12 + 2564);
  p_cy = (__int64)&a1->sizlBitmap.cy;
  if ( v33.right > v15 )
    right = v15;
  if ( v3.top < v16 )
    top = v16;
  if ( !a1 )
    p_cy = 60LL;
  bottom = v33.bottom;
  v19 = *(_DWORD *)p_cy + v16;
  if ( v33.bottom > v19 )
    bottom = v19;
  if ( top >= bottom || v7 >= right )
    return 1;
  v20 = right - v7;
  *(_QWORD *)&v33.left = 0LL;
  v21 = bottom - top;
  v33.right = v20;
  v33.bottom = v21;
  v22 = (__int64)&a1[1].hdev;
  v28.x = v7;
  v28.y = top;
  if ( !a1 )
    v22 = 128LL;
  v29[1] = v20;
  v29[2] = v21;
  v23 = *(__int64 **)v22;
  if ( v23 )
    v30 = *v23;
  else
    v30 = 0LL;
  p_iBitmapFormat = (__int64)&a1->iBitmapFormat;
  if ( !a1 )
    p_iBitmapFormat = 96LL;
  v25 = 1;
  v29[0] = *(_DWORD *)p_iBitmapFormat;
  p_hsurf = (__int64)&a1[1].hsurf;
  if ( !a1 )
    p_hsurf = 112LL;
  v31 = *(_DWORD *)p_hsurf & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !*(_QWORD *)a2
    || !MulBitBlt((struct _SURFOBJ *)(*(_QWORD *)a2 + 24LL), a1, 0LL, 0LL, xloIdent, &v33, &v28, 0LL, 0LL, 0LL, 0xCCCCu) )
  {
    return v4;
  }
  a3->left -= v7;
  a3->right -= v7;
  a3->top -= top;
  a3->bottom -= top;
  return v25;
}
