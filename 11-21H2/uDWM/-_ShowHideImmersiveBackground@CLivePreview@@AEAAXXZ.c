/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C4894
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C4A10 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C400C (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800C56D8 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E6248 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int v1; // r14d
  __int64 *v3; // r12
  __int64 *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 108) )
  {
    while ( 1 )
    {
      v3 = (__int64 *)*((_QWORD *)this + 67);
      v4 = (__int64 *)*((_QWORD *)this + 66);
      v5 = *(_QWORD *)(*((_QWORD *)this + 51) + 16LL * v1);
      v6 = *(_QWORD *)(v5 + 752);
      if ( (((char *)v3 - (char *)v4) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        break;
      if ( !v6 || !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, *(_QWORD *)(v5 + 752)) )
        goto LABEL_15;
LABEL_5:
      if ( *(_BYTE *)(*((_QWORD *)this + 51) + 16LL * v1 + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation(v5, 3LL);
        *(_BYTE *)(*((_QWORD *)this + 51) + 16LL * v1 + 8) = 0;
      }
LABEL_17:
      if ( ++v1 >= *((_DWORD *)this + 108) )
        return;
    }
    while ( v4 != v3 )
    {
      v7 = *v4;
      if ( *(_DWORD *)(*v4 + 132) == 1 )
      {
        if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, v6) )
          goto LABEL_5;
      }
      else
      {
        v8 = 0LL;
        if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v6 + 48, v7 + 48, &v8) == 1 )
          goto LABEL_5;
      }
      ++v4;
    }
LABEL_15:
    if ( !*(_BYTE *)(*((_QWORD *)this + 51) + 16LL * v1 + 8) )
    {
      CTopLevelWindow::StartLivePreviewAnimation(v5, 4LL);
      *(_BYTE *)(*((_QWORD *)this + 51) + 16LL * v1 + 8) = 1;
    }
    goto LABEL_17;
  }
}
