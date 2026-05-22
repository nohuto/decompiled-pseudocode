/*
 * XREFs of ?CreateRectangleClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIRectangleClip@345@@Z @ 0x18006E950
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z @ 0x18006EA08 (-CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundat.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateRectangleClip(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::IRectangleClip **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int RectangleClip; // eax
  unsigned int v5; // ebx

  *a2 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 192);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 192));
  if ( (v2->SpinCount & 2) != 0 )
  {
    RectangleClip = Windows::UI::Composition::CompositorCommon::CreateRectangleClip(v2);
    v5 = RectangleClip;
    if ( RectangleClip < 0 )
    {
      DoStackCaptureDirect(RectangleClip, 0x178Bu);
    }
    else
    {
      *a2 = 0LL;
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
