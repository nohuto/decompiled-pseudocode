/*
 * XREFs of ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C032FD6C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C01C3AFC (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall DXGPRESENT::CheckOcclusion(DXGPRESENT *this)
{
  int v1; // r8d
  LONG v3; // edx
  int v4; // r8d
  DXGGLOBAL *Global; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 10);
  v7.left = v1 + *((_DWORD *)this + 6);
  v3 = v1 + *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 11);
  v7.right = v3;
  v7.top = v4 + *((_DWORD *)this + 7);
  v7.bottom = v4 + *((_DWORD *)this + 9);
  Global = DXGGLOBAL_GetGlobal();
  if ( DXGGLOBAL::IsWindowVisible(Global, &v7) )
    return 0;
  *((_DWORD *)this + 1) |= 3u;
  return 1;
}
