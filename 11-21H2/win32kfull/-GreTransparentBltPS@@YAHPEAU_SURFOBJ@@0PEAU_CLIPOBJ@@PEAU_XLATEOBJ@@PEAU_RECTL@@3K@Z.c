/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C028F38C
 * Callers:
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C0290F68 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  struct _RECTL *v9; // r14
  int v11; // ebx
  RECTL rclBounds; // xmm0
  unsigned int i; // esi
  LONG v14; // r8d
  LONG left; // r9d
  LONG right; // ecx
  LONG v17; // edx
  LONG top; // r10d
  LONG v19; // edi
  LONG bottom; // r11d
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  int v23; // edi
  int v24; // eax
  unsigned int v25; // [rsp+44h] [rbp-214h]
  struct _RECTL v26; // [rsp+50h] [rbp-208h] BYREF
  int v27; // [rsp+60h] [rbp-1F8h]
  struct _SURFOBJ *v28; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v29; // [rsp+70h] [rbp-1E8h]
  struct _RECTL *v30; // [rsp+78h] [rbp-1E0h]
  __int64 v31; // [rsp+80h] [rbp-1D8h] BYREF
  char v32; // [rsp+88h] [rbp-1D0h]
  int v33; // [rsp+8Ch] [rbp-1CCh]
  struct _SURFOBJ *v34; // [rsp+90h] [rbp-1C8h]
  struct _SURFOBJ *v35; // [rsp+98h] [rbp-1C0h]
  struct _CLIPOBJ *v36; // [rsp+A0h] [rbp-1B8h]
  struct _XLATEOBJ *v37; // [rsp+A8h] [rbp-1B0h]
  struct _RECTL *v38; // [rsp+B0h] [rbp-1A8h]
  _DWORD v39[84]; // [rsp+C0h] [rbp-198h] BYREF

  v29 = a2;
  v28 = a1;
  v34 = a1;
  v35 = a2;
  v36 = a3;
  v38 = a5;
  v9 = a6;
  v30 = a6;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  memset(v39, 0, 0x144uLL);
  if ( !a3 || !a3->iDComplexity )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  if ( a3->iDComplexity == 1 )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v11 = 0;
    v39[0] = 1;
    *(RECTL *)&v39[1] = rclBounds;
    goto LABEL_10;
  }
  if ( a3->iDComplexity != 3 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v31);
    return 0LL;
  }
  v11 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  if ( !a4 )
    a4 = xloIdent;
  v37 = a4;
  if ( !v11 )
    goto LABEL_14;
  do
  {
    v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)v39, 0LL);
LABEL_14:
    for ( i = 0; i < v39[0]; ++i )
    {
      v14 = v39[4 * i + 1];
      left = a5->left;
      if ( v14 < a5->left )
      {
        v39[4 * i + 1] = left;
        v14 = left;
      }
      right = a5->right;
      if ( v39[4 * i + 3] <= right )
        right = v39[4 * i + 3];
      else
        v39[4 * i + 3] = right;
      v17 = v39[4 * i + 2];
      top = a5->top;
      if ( v17 < top )
      {
        v39[4 * i + 2] = top;
        v17 = top;
      }
      v19 = v39[4 * i + 4];
      bottom = a5->bottom;
      if ( v19 > bottom )
      {
        v39[4 * i + 4] = bottom;
        v19 = bottom;
      }
      if ( v17 < v19 && v14 < right )
      {
        v26.left = v14;
        v26.top = v17;
        v26.right = right;
        v26.bottom = v17 + 1;
        v21 = v14 + v9->left - left;
        v25 = v21;
        v22 = v17 + v9->top - top;
        v23 = v19 - v17;
        while ( 1 )
        {
          v24 = v23--;
          v27 = v23;
          if ( !v24 )
            break;
          vTransparentScan(v28, v29, v21, v22, a4, &v26, a7);
          v21 = v25;
          ++v22;
          ++v26.top;
          ++v26.bottom;
        }
        v9 = v30;
      }
    }
  }
  while ( v11 );
  SURFMEM::~SURFMEM((SURFMEM *)&v31);
  return 1LL;
}
