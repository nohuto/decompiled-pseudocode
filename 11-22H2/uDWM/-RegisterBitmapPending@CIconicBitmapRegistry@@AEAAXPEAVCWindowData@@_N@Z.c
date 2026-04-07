/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800166F8
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180034310 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800C34EC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800C3890 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x18001673C (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v3; // r9
  char v4; // al

  if ( !*((_QWORD *)a2 + 54) && !IsWindowTab(a2) )
  {
    v4 = *((_BYTE *)a2 + 674);
    if ( a3 )
    {
      if ( (v4 & 8) == 0 )
        ++*(_DWORD *)(v3 + 84);
    }
    else if ( (v4 & 8) != 0 )
    {
      --*(_DWORD *)(v3 + 84);
    }
  }
  *((_BYTE *)a2 + 674) = (8 * a3) | *((_BYTE *)a2 + 674) & 0xF7;
}
