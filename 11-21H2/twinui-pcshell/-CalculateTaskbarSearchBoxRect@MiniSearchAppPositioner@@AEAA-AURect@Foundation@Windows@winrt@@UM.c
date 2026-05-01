/*
 * XREFs of ?CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x1803AE13C
 * Callers:
 *     ?GetAppRectAndClippingRegion@MiniSearchAppPositioner@@UEAA?AUMiniSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1803AE900 (-GetAppRectAndClippingRegion@MiniSearchAppPositioner@@UEAA-AUMiniSearchAppSizeAndBorderInfo@@AEB.c)
 *     ?GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1803AEC40 (-GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AEBUtagR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTaskbarSearchBoxWidth@MiniSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z @ 0x1803AED1C (-GetTaskbarSearchBoxWidth@MiniSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall MiniSearchAppPositioner::CalculateTaskbarSearchBoxRect(
        MiniSearchAppPositioner *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  int *v8; // rbx
  __m128i v9; // xmm0
  int v10; // ebx
  int TaskbarSearchBoxWidth; // eax
  unsigned int v12; // eax
  int v13; // ecx
  __m128i v14; // xmm1
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx

  *(_OWORD *)a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 24LL))(*((_QWORD **)a1 + 1)) )
  {
    if ( !*(_DWORD *)(a3 + 76) && *(_DWORD *)(a3 + 80) == 2 )
    {
      v8 = (int *)(a3 + 60);
      if ( !IsRectEmpty((const RECT *)(a3 + 60)) )
      {
        *(float *)a2 = (float)*v8;
        *(float *)(a2 + 4) = (float)*(int *)(a3 + 64);
        *(float *)(a2 + 8) = (float)(*(_DWORD *)(a3 + 68) - *v8);
        v9 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 64));
LABEL_18:
        *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v9).m128_u32[0];
        return a2;
      }
      v10 = *(_DWORD *)(a3 + 56);
      TaskbarSearchBoxWidth = MiniSearchAppPositioner::GetTaskbarSearchBoxWidth(a1, (const struct tagRECT *)a3);
      v12 = MulDiv(TaskbarSearchBoxWidth, v10, 96);
      if ( a4 )
        v13 = *(_DWORD *)(a3 + 32) - v12;
      else
        v13 = *(_DWORD *)(a3 + 40);
      *(float *)a2 = (float)v13;
      *(float *)(a2 + 4) = (float)*(int *)(a3 + 36);
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 44) - *(_DWORD *)(a3 + 36) - 8);
      v14 = _mm_cvtsi32_si128(v12);
LABEL_17:
      *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v14).m128_u32[0];
      goto LABEL_18;
    }
  }
  else if ( *(_DWORD *)(a3 + 52) == 3 && *(_BYTE *)(a3 + 48) && *(_BYTE *)(a3 + 49) )
  {
    v15 = *(_DWORD *)(a3 + 56);
    v16 = MiniSearchAppPositioner::GetTaskbarSearchBoxWidth(a1, (const struct tagRECT *)a3);
    v17 = MulDiv(v16, v15, 96);
    if ( a4 )
      v18 = *(_DWORD *)(a3 + 32) - v17;
    else
      v18 = *(_DWORD *)(a3 + 40);
    *(float *)a2 = (float)v18;
    *(float *)(a2 + 4) = (float)*(int *)(a3 + 36);
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 44) - *(_DWORD *)(a3 + 36));
    v14 = _mm_cvtsi32_si128(v17);
    goto LABEL_17;
  }
  return a2;
}
