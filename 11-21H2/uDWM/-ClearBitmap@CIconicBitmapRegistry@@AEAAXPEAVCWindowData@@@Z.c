/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180022F70
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180003C84 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180003E64 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800BED74 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180003F0C (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  __int64 v4; // r10
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CWindowIconic *v9; // rdi

  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
  }
  else
  {
    v4 = *((_QWORD *)this + 2);
    v5 = 0LL;
    v6 = *((_DWORD *)this + 10);
    if ( v6 )
    {
      do
      {
        if ( a2 == *(struct CWindowData **)(v4 + 8 * v5) )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v6 );
    }
    if ( (unsigned int)v5 < v6 )
    {
      for ( ; (unsigned int)v5 < v6 - 1; v6 = *((_DWORD *)this + 10) )
      {
        v7 = (unsigned int)v5;
        LODWORD(v5) = v5 + 1;
        *(_QWORD *)(v4 + 8 * v7) = *(_QWORD *)(v4 + 8LL * (unsigned int)v5);
      }
      *((_DWORD *)this + 10) = v6 - 1;
    }
    else if ( !*((_QWORD *)a2 + 54) )
    {
      return;
    }
    CWindowData::SetIconicBitmap(a2, 0LL);
    v9 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v8, (int)&UdwmManageIconicThumbnail_Info, 2, *((_QWORD *)a2 + 5));
  }
  if ( v9 )
    CWindowIconic::SetBitmap(v9, 0LL, 0, 1);
}
