/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C006C860 (Is_GetTopLevelWindowSupported.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C006D8A0 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     Is_MonitorFromRectSupported @ 0x1C006E534 (Is_MonitorFromRectSupported.c)
 *     IntersectRect @ 0x1C006EC48 (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C006F314 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00D00F8 (TransformOffscreenAdjacentRect.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C0152130 (IsDpiAwarenessBoundaryInParentChain.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(
        struct tagRECT *a1,
        const struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  unsigned int v10; // esi
  struct tagRECT v11; // xmm1
  unsigned int v12; // edi
  __int64 v13; // r15
  int top; // r13d
  int v15; // eax
  int v16; // r14d
  LONG v17; // r15d
  __int64 v18; // rax
  __int64 v20; // rax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  __int64 v25; // rax
  int v26; // eax
  unsigned int bottom; // ecx
  int v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // [rsp+30h] [rbp-89h]
  int left; // [rsp+40h] [rbp-79h]
  int right; // [rsp+50h] [rbp-69h]
  __int128 v39; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v40; // [rsp+70h] [rbp-49h] BYREF
  struct tagRECT v41; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v42; // [rsp+90h] [rbp-29h] BYREF
  struct tagRECT v43; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v44; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v10 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v10 = W32GetCurrentThreadDpiAwarenessContext();
  v11 = *a2;
  v35 = 0;
  v12 = 0;
  v43 = 0LL;
  v44 = v11;
  v42 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v10 >> 8)) & 0x1FF) == 0
    || IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v11;
    return 0LL;
  }
  if ( a3 && (int)Is_GetTopLevelWindowSupported() >= 0 )
  {
    v20 = qword_1C029C7E0 ? qword_1C029C7E0(a3) : 0LL;
    if ( v20 )
    {
      if ( v20 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v25 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v25 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (_DWORD)a1,
                     (_DWORD)a2,
                     CurrentThreadDpiAwarenessContext,
                     v10,
                     v25);
        }
      }
    }
  }
  v13 = *((_QWORD *)gpDispInfo + 13);
  if ( !v13 )
    goto LABEL_41;
  top = v42.top;
  right = v42.right;
  left = v42.left;
  do
  {
    v41 = 0LL;
    v39 = (__int128)*ExpandedMonitorRect(&v40, (struct tagMONITOR *)v13, v10);
    if ( (unsigned int)IntersectRect(&v41, &v39, a2) )
    {
      if ( v35 )
      {
        v26 = left;
        bottom = v42.bottom;
        if ( left >= v41.left )
          v26 = v41.left;
        left = v26;
        if ( top >= v41.top )
          top = v41.top;
        *(_QWORD *)&v42.left = __PAIR64__(top, v26);
        v28 = right;
        if ( right <= v41.right )
          v28 = v41.right;
        right = v28;
        if ( v42.bottom <= v41.bottom )
          bottom = v41.bottom;
        *(_QWORD *)&v42.right = __PAIR64__(bottom, v28);
      }
      else
      {
        v42 = v41;
        top = v41.top;
        right = v41.right;
        left = v41.left;
      }
      v12 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v41,
               (unsigned int)&v41,
               CurrentThreadDpiAwarenessContext,
               v10,
               v13);
      if ( !v35 )
      {
        v15 = 1;
        v43 = v41;
        v35 = 1;
        goto LABEL_15;
      }
      v29 = v43.left;
      if ( v43.left >= v41.left )
        v29 = v41.left;
      v43.left = v29;
      v30 = v43.top;
      if ( v43.top >= v41.top )
        v30 = v41.top;
      v43.top = v30;
      v31 = v43.right;
      if ( v43.right <= v41.right )
        v31 = v41.right;
      v43.right = v31;
      v32 = v43.bottom;
      if ( v43.bottom <= v41.bottom )
        v32 = v41.bottom;
      v43.bottom = v32;
    }
    v15 = v35;
LABEL_15:
    v13 = *(_QWORD *)(v13 + 56);
  }
  while ( v13 );
  if ( v15 )
  {
    v16 = v44.right;
    v17 = v44.left;
    v18 = *(_QWORD *)&v42.left - *(_QWORD *)&v44.left;
    if ( *(_QWORD *)&v42.left == *(_QWORD *)&v44.left )
      v18 = *(_QWORD *)&v42.right - *(_QWORD *)&v44.right;
    if ( v18 )
    {
      v21 = v44.top;
      if ( left <= v44.left )
      {
        v23 = right;
      }
      else
      {
        *(_QWORD *)&v41.right = __PAIR64__(v44.bottom, left);
        *(_QWORD *)&v41.left = *(_QWORD *)&v44.left;
        v22 = TransformOffscreenAdjacentRect(
                (unsigned int)&v42,
                (unsigned int)&v43,
                (unsigned int)&v41,
                CurrentThreadDpiAwarenessContext,
                v10);
        top = v42.top;
        v12 |= v22;
        v23 = v42.right;
      }
      if ( v23 < v16 )
      {
        *(_QWORD *)&v41.left = __PAIR64__(v21, v23);
        *(_QWORD *)&v41.right = __PAIR64__(v44.bottom, v16);
        v33 = TransformOffscreenAdjacentRect(
                (unsigned int)&v42,
                (unsigned int)&v43,
                (unsigned int)&v41,
                CurrentThreadDpiAwarenessContext,
                v10);
        top = v42.top;
        v12 |= v33;
      }
      if ( top > v21 )
      {
        *(_QWORD *)&v41.left = __PAIR64__(v21, v17);
        *(_QWORD *)&v41.right = __PAIR64__(top, v16);
        v12 |= TransformOffscreenAdjacentRect(
                 (unsigned int)&v42,
                 (unsigned int)&v43,
                 (unsigned int)&v41,
                 CurrentThreadDpiAwarenessContext,
                 v10);
      }
      if ( v42.bottom < v44.bottom )
      {
        *(_QWORD *)&v44.left = __PAIR64__(v42.bottom, v17);
        v44.right = v16;
        v34 = TransformOffscreenAdjacentRect(
                (unsigned int)&v42,
                (unsigned int)&v43,
                (unsigned int)&v44,
                CurrentThreadDpiAwarenessContext,
                v10);
        goto LABEL_45;
      }
    }
    goto LABEL_20;
  }
LABEL_41:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    if ( qword_1C029C980 )
      v4 = qword_1C029C980(a2, 2LL, v10);
    v34 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v43,
            (_DWORD)a2,
            CurrentThreadDpiAwarenessContext,
            v10,
            v4);
LABEL_45:
    v12 |= v34;
  }
LABEL_20:
  *a1 = v43;
  return v12;
}
