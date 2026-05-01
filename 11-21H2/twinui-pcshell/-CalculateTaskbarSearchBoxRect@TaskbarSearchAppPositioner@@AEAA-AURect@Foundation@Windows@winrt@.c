/*
 * XREFs of ?CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x180147DE0
 * Callers:
 *     ?GetTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180147C90 (-GetTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AEBUt.c)
 *     ?GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A6550 (-GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorderInfo@@AEBU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTaskbarSearchBoxWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z @ 0x1803A067C (-GetTaskbarSearchBoxWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall TaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(
        TaskbarSearchAppPositioner *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  int *v9; // rbx
  __m128i v10; // xmm0
  int v11; // ebx
  int TaskbarSearchBoxWidth; // eax
  unsigned int v13; // eax
  int v14; // ecx
  __m128i v15; // xmm1
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx

  *(_OWORD *)a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 32LL))(*((_QWORD **)a1 + 1)) )
  {
    if ( !*(_DWORD *)(a3 + 76) && *(_DWORD *)(a3 + 80) == 2 )
    {
      v9 = (int *)(a3 + 60);
      if ( !IsRectEmpty((const RECT *)(a3 + 60)) )
      {
        *(float *)a2 = (float)*v9;
        *(float *)(a2 + 4) = (float)*(int *)(a3 + 64);
        *(float *)(a2 + 8) = (float)(*(_DWORD *)(a3 + 68) - *v9);
        v10 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 64));
LABEL_19:
        *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v10).m128_u32[0];
        return a2;
      }
      v11 = *(_DWORD *)(a3 + 56);
      TaskbarSearchBoxWidth = TaskbarSearchAppPositioner::GetTaskbarSearchBoxWidth(a1, (const struct tagRECT *)a3);
      v13 = MulDiv(TaskbarSearchBoxWidth, v11, 96);
      if ( a4 )
        v14 = *(_DWORD *)(a3 + 32) - v13;
      else
        v14 = *(_DWORD *)(a3 + 40);
      *(float *)a2 = (float)v14;
      *(float *)(a2 + 4) = (float)*(int *)(a3 + 36);
      v10 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 44) - *(_DWORD *)(a3 + 36) - 8);
      v15 = _mm_cvtsi32_si128(v13);
LABEL_18:
      *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v15).m128_u32[0];
      goto LABEL_19;
    }
  }
  else if ( *(_DWORD *)(a3 + 52) == 3 && *(_BYTE *)(a3 + 48) && *(_BYTE *)(a3 + 49) )
  {
    v16 = *(_DWORD *)(a3 + 56);
    v17 = TaskbarSearchAppPositioner::GetTaskbarSearchBoxWidth(a1, (const struct tagRECT *)a3);
    v18 = MulDiv(v17, v16, 96);
    if ( a4 )
      v19 = *(_DWORD *)(a3 + 32) - v18;
    else
      v19 = *(_DWORD *)(a3 + 40);
    *(float *)a2 = (float)v19;
    *(float *)(a2 + 4) = (float)*(int *)(a3 + 36);
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 44) - *(_DWORD *)(a3 + 36));
    v15 = _mm_cvtsi32_si128(v18);
    goto LABEL_18;
  }
  return a2;
}
