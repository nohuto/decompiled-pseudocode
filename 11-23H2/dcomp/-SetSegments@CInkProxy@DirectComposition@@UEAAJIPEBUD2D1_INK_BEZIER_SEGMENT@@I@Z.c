/*
 * XREFs of ?SetSegments@CInkProxy@DirectComposition@@UEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@I@Z @ 0x1800F8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkProxy::SetSegments(
        DirectComposition::CInkProxy *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx

  if ( a2 >= 0xFFFFFFF9 )
  {
    v5 = -2147024809;
    v6 = 60;
    v7 = -2147024809;
    goto LABEL_5;
  }
  v4 = DirectComposition::CResourceProxy::SetBufferProperty(
         (DirectComposition::CInkProxy *)((char *)this + 8),
         a2 + 6,
         a3,
         36LL * a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 55;
    v7 = v4;
LABEL_5:
    DoStackCaptureDirect(v7, v6);
  }
  return v5;
}
