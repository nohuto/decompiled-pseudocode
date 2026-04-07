/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C400C
 * Callers:
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C33CC (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C4894 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800C412C (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800C56D8 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(CLivePreview *a1, __int64 a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rbp
  unsigned int CoverageStateOfTwoRects; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 132) == 1;
  v15 = 0LL;
  if ( v2 )
    v4 = (__int128)*CLivePreview::_GetDesktopWorkArea(a1, &v16, (struct CWindowData *)a2);
  else
    v4 = *(_OWORD *)(a2 + 48);
  v5 = (_QWORD *)*((_QWORD *)a1 + 66);
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)a1 + 67);
  v14 = v4;
  while ( v5 != v7 )
  {
    CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(*v5 + 764LL, &v14, &v15);
    if ( CoverageStateOfTwoRects )
    {
      v6 = CoverageStateOfTwoRects;
      if ( CoverageStateOfTwoRects == 2 )
        break;
    }
    ++v5;
  }
  if ( ((*((_QWORD *)a1 + 67) - *((_QWORD *)a1 + 66)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v9 = 0LL;
    v10 = *(_DWORD *)(*((_QWORD *)a1 + 70) + 40LL);
    if ( v10 )
    {
      do
      {
        if ( v6 )
          break;
        v11 = *((_QWORD *)a1 + 70);
        if ( (unsigned int)v9 < *(_DWORD *)(v11 + 40) )
        {
          v12 = *(_QWORD *)(v11 + 16);
          if ( v12 + 24 * v9 )
          {
            v16 = *(struct tagRECT *)(v12 + 24 * v9);
            v6 = CLivePreview::s_GetCoverageStateOfTwoRects(&v16, &v14, &v15);
          }
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < v10 );
    }
  }
  return v6;
}
