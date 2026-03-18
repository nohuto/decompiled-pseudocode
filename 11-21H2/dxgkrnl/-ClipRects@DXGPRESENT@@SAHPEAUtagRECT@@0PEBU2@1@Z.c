/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C01EB3E0
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C01EAE60 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C033003C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C032FDD0 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0330C24 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG top; // eax
  LONG bottom; // ecx
  LONG left; // edx
  LONG right; // r8d
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r10
  __int64 v16; // r13
  LONG v17; // ecx
  LONG v18; // edx
  int v19; // r14d
  int v20; // r13d
  int v21; // r12d
  int v22; // [rsp+30h] [rbp-40h]
  int v23; // [rsp+34h] [rbp-3Ch]
  LONG v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+38h] [rbp-38h]
  LONG v26; // [rsp+3Ch] [rbp-34h]
  LONG v27; // [rsp+40h] [rbp-30h]
  struct tagRECT v28; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-18h] BYREF
  LONG v30; // [rsp+B0h] [rbp+40h]
  int v31; // [rsp+B0h] [rbp+40h]

  if ( a3 )
  {
    top = a3->top;
    if ( top >= a1->bottom )
      return 0LL;
    bottom = a3->bottom;
    if ( bottom <= a1->top )
      return 0LL;
    left = a3->left;
    if ( a3->left >= a1->right )
      return 0LL;
    right = a3->right;
    if ( right <= a1->left || top >= bottom || left >= right )
      return 0LL;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      DXGPRESENT::ClipIntervals(&a1->top, &a1->bottom, &a2->top, &a2->bottom, a3->top, a3->bottom);
      DXGPRESENT::ClipIntervals(&a1->left, &a1->right, &a2->left, &a2->right, a3->left, a3->right);
    }
    return 1LL;
  }
  v13 = a4->top;
  if ( (int)v13 < a2->bottom - a2->top )
  {
    v14 = a4->bottom;
    if ( (int)v14 > 0 )
    {
      v15 = a4->left;
      v23 = v15;
      if ( (int)v15 < a2->right - a2->left )
      {
        v16 = a4->right;
        if ( (int)v16 > 0 && (int)v13 < (int)v14 && (int)v15 < (int)v16 )
        {
          if ( !a3 )
          {
            DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v13, v14);
            DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
            return 1LL;
          }
          v30 = a3->left;
          v24 = a3->right;
          v17 = a3->bottom;
          v18 = a3->top;
          v22 = (((int)v16 - (int)v15) << 16) / (v24 - a3->left);
          v27 = v17;
          v26 = v18;
          v28 = 0LL;
          if ( v22 && (v19 = (((int)v14 - (int)v13) << 16) / (v17 - v18)) != 0 )
          {
            if ( DXGPRESENT::IntersectRect(&v28, a3, a1) )
            {
              v31 = (v23 << 16) + v22 * (v28.left - v30);
              v25 = ((_DWORD)v16 << 16) + v22 * (v28.right - v24);
              v29.left = (v31 + 0xFFFF) >> 16;
              v20 = ((_DWORD)v13 << 16) + v19 * (v28.top - v26);
              v29.right = v25 >> 16;
              v29.top = (v20 + 0xFFFF) >> 16;
              v21 = ((_DWORD)v14 << 16) + v19 * (v28.bottom - v27);
              v29.bottom = v21 >> 16;
              if ( DXGPRESENT::IntersectRect(a2, &v29, a2) )
              {
                v28.left += (v22 + (a2->left << 16) - v31 - 1) / v22;
                v28.right += ((a2->right << 16) - v25) / v22;
                v28.top += (v19 + (a2->top << 16) - v20 - 1) / v19;
                v28.bottom += ((a2->bottom << 16) - v21) / v19;
                if ( DXGPRESENT::IntersectRect(a1, &v28, a1) )
                  return 1LL;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(3LL, v15, v13, v16, v14);
          }
        }
      }
    }
  }
  return 0LL;
}
