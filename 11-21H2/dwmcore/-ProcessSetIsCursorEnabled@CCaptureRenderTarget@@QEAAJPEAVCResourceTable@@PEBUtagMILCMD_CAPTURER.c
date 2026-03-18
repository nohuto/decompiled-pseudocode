/*
 * XREFs of ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x1801C51C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetIsCursorEnabled(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 438) = 2 - (*((_BYTE *)a3 + 8) != 0);
  return result;
}
