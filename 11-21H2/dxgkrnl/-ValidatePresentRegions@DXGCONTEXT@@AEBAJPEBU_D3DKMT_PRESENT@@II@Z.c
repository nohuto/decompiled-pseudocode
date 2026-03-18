/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01D11CC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  UINT v5; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // ebp
  UINT v12; // edi
  const RECT *pDirtyRects; // rbx
  int right; // ecx
  int v15; // r9d
  int left; // eax
  int v17; // edx
  int v18; // r8d
  int bottom; // r10d
  int top; // r11d
  int *p_bottom; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  int v26; // edi
  __int64 x; // rbp
  __int64 v28; // rsi
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  const wchar_t *v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8

  pPresentRegions = a2->pPresentRegions;
  v5 = 0;
  MoveRectCount = pPresentRegions->MoveRectCount;
  pMoveRects = pPresentRegions->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    do
    {
      v23 = *(p_bottom - 1);
      v24 = *(p_bottom - 3);
      if ( (int)v23 <= (int)v24
        || (v25 = *p_bottom, v26 = *(p_bottom - 2), *p_bottom <= v26)
        || (int)v23 > a3
        || v25 > a4
        || (int)v24 < 0
        || v26 < 0 )
      {
        WdLogSingleEntry5(2LL, -1073741811LL, v24, *(p_bottom - 2), v23, *p_bottom);
        v33 = *p_bottom;
        v34 = L"0x%I64x Invalid Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] in Move Rect";
        v35 = *(p_bottom - 1);
        v36 = *(p_bottom - 2);
        v37 = *(p_bottom - 3);
        goto LABEL_28;
      }
      x = pMoveRects->SourcePoint.x;
      v28 = *(p_bottom - 4);
      v29 = v23 - v24 + x;
      v30 = v25 + *(p_bottom - 4) - v26;
      if ( v29 > a3 || v30 > a4 || (int)x < 0 || (int)v28 < 0 )
      {
        v31 = v30;
        v32 = v29;
        WdLogSingleEntry5(2LL, -1073741811LL, x, v28, v29, v30);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Invalid Source Point [0x%I64x 0x%I64x : 0x%I64x 0x%I64x] in Move Rect",
          -1073741811LL,
          x,
          v28,
          v32,
          v31);
        return 3221225485LL;
      }
      ++v5;
      ++pMoveRects;
      p_bottom += 6;
    }
    while ( v5 < MoveRectCount );
  }
  DirtyRectCount = pPresentRegions->DirtyRectCount;
  v12 = 0;
  pDirtyRects = pPresentRegions->pDirtyRects;
  if ( !pPresentRegions->DirtyRectCount )
    return 0LL;
  while ( 1 )
  {
    right = pDirtyRects->right;
    v15 = right;
    left = pDirtyRects->left;
    v17 = pDirtyRects->left;
    if ( (a2->Flags.Value & 0x10000000) != 0 )
      break;
    v18 = pDirtyRects->left;
    if ( right <= left )
      goto LABEL_27;
    bottom = pDirtyRects->bottom;
    top = pDirtyRects->top;
    if ( bottom <= top )
      goto LABEL_27;
LABEL_6:
    v15 = pDirtyRects->right;
    v17 = v18;
    if ( right > a3 || bottom > a4 || left < 0 || top < 0 )
      goto LABEL_27;
    ++v12;
    ++pDirtyRects;
    if ( v12 >= DirtyRectCount )
      return 0LL;
  }
  if ( right >= left )
  {
    bottom = pDirtyRects->bottom;
    top = pDirtyRects->top;
    if ( bottom >= top )
    {
      v18 = pDirtyRects->left;
      goto LABEL_6;
    }
  }
LABEL_27:
  WdLogSingleEntry5(2LL, -1073741811LL, v17, pDirtyRects->top, v15, pDirtyRects->bottom);
  v33 = pDirtyRects->bottom;
  v34 = L"0x%I64x Invalid Dirty Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
  v35 = pDirtyRects->right;
  v36 = pDirtyRects->top;
  v37 = pDirtyRects->left;
LABEL_28:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v34, -1073741811LL, v37, v36, v35, v33);
  return 3221225485LL;
}
