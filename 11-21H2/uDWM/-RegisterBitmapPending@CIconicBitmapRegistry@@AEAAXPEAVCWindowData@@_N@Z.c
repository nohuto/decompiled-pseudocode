/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180011214
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180023BB8 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004BE50 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800BED74 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180011268 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v3; // r9

  if ( !*((_QWORD *)a2 + 54) && !IsWindowTab(a2) )
  {
    if ( a3 )
    {
      if ( (*((_BYTE *)a2 + 666) & 8) == 0 )
        ++*(_DWORD *)(v3 + 84);
    }
    else if ( (*((_BYTE *)a2 + 666) & 8) != 0 )
    {
      --*(_DWORD *)(v3 + 84);
    }
  }
  *((_BYTE *)a2 + 666) &= ~8u;
  *((_BYTE *)a2 + 666) |= 8 * a3;
}
