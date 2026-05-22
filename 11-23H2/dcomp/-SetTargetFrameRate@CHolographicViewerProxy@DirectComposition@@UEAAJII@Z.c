/*
 * XREFs of ?SetTargetFrameRate@CHolographicViewerProxy@DirectComposition@@UEAAJII@Z @ 0x1800E83A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::SetTargetFrameRate(
        DirectComposition::CHolographicViewerProxy *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  if ( !a3 && a2 )
    return 2147942487LL;
  v4 = a3 | ((unsigned __int64)a2 << 32);
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CHolographicViewerProxy *)((char *)this + 8),
           6,
           &v4,
           8uLL);
}
