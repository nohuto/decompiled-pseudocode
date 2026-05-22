/*
 * XREFs of ?SetProperties@CGenericInk@DirectComposition@@UEAAJPEBEI@Z @ 0x1800F8B90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInk::SetProperties(
        DirectComposition::CGenericInk *this,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = DirectComposition::CResourceProxy::SetBufferProperty(
         (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
         0,
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    DoStackCaptureDirect(v3, 0x28u);
  return v4;
}
