/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C3260
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18001161C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013490 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C2D68 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800C3890 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800056C0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3C28 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107510 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, CWindowIconic **a2)
{
  CWindowIconic *v3; // rdi
  __int64 v4; // rcx
  struct CWindowData *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (struct CWindowData *)a2;
  if ( (unsigned __int64)a2 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v3 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
LABEL_7:
    if ( v3 )
      CWindowIconic::SetBitmap(v3, 0LL, 0, 1);
    return;
  }
  if ( (unsigned int)DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, &v5) || a2[54] )
  {
    CWindowData::SetIconicBitmap((CWindowData *)a2, 0LL);
    v3 = a2[61];
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v4, (__int64)&UdwmManageIconicThumbnail_Info, 2LL, a2[5]);
    goto LABEL_7;
  }
}
