/*
 * XREFs of ?AddTrailPointsWithPrediction@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@I0PEAI@Z @ 0x18011B230
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@QEAAJPEBUInkTrailPoint@Composition@UI@Windows@@I0IPEAI@Z @ 0x1800E67EC (-AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@QEAAJPEBUInkTrailPoint@C.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisual::Api::AddTrailPointsWithPrediction(
        Windows::UI::Composition::DelegatedInkTrailVisual::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::InkTrailPoint *a3,
        unsigned int a4,
        struct Windows::UI::Composition::InkTrailPoint *a5,
        unsigned int *a6)
{
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax

  *a6 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v12 = DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsWithPrediction(
            *((DirectComposition::CDelegatedInkTrailImpl **)this + 2),
            a3,
            a2,
            a5,
            a4,
            a6);
    v11 = v12;
    if ( v12 < 0 )
      DoStackCaptureDirect(v12, 0x69u);
    else
      v11 = 0;
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v11;
}
