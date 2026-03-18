/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012B0C0
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  int left; // r11d
  LONG top; // edx
  LONG right; // r10d
  LONG bottom; // r9d
  RECTL *p_rclBounds; // r8
  struct _RECTL *v15; // rax
  LONG v16; // r9d
  LONG v17; // edx
  LONG v18; // r11d
  LONG v19; // ebx
  LONG v20; // r8d
  LONG v21; // r10d
  int v22; // r9d
  int v23; // ebx
  int v25; // ecx
  int v26; // ecx
  HDEV hdev; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx

  v5 = 0;
  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v15 = p_rclBounds;
    right = p_rclBounds->right;
    bottom = p_rclBounds->bottom;
LABEL_5:
    left = v15->left;
    if ( v15->left > right || top > bottom )
      return v5;
    goto LABEL_7;
  }
  if ( a2 )
  {
    top = a2->top;
    v15 = a2;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_5;
  }
LABEL_7:
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v28 = *((_DWORD *)hdev + 640);
        left -= v28;
        right -= v28;
        v29 = *((_DWORD *)hdev + 641);
        top -= v29;
        bottom -= v29;
      }
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v16 = p_rclBounds->right;
        v17 = p_rclBounds->left;
        v18 = p_rclBounds->top;
        v19 = p_rclBounds->bottom;
        v20 = a2->bottom;
        if ( v16 >= a2->right )
          v16 = a2->right;
        v21 = a2->top;
        if ( v17 <= a2->left )
          v17 = a2->left;
        v22 = v16 - v17;
        if ( v22 <= 0 )
          v22 = 0;
        *a4 = v22;
        if ( v19 >= v20 )
          v19 = v20;
        if ( v18 <= v21 )
          v18 = v21;
        v23 = v19 - v18;
        if ( v23 <= 0 )
          v23 = 0;
        *a5 = v23;
        return 1;
      }
      v30 = p_rclBounds->right - p_rclBounds->left;
      if ( v30 <= 0 )
        v30 = 0;
      *a4 = v30;
      v26 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_35:
      if ( v26 <= 0 )
        v26 = 0;
      *a5 = v26;
      return 1;
    }
    if ( a2 )
    {
      v25 = a2->right - a2->left;
      if ( v25 <= 0 )
        v25 = 0;
      *a4 = v25;
      v26 = a2->bottom - a2->top;
      goto LABEL_35;
    }
    return 1;
  }
  return v5;
}
