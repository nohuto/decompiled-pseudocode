/*
 * XREFs of ?AddTrailPoints@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@PEAI@Z @ 0x18011B130
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     DirectComposition::ConvertToSuperWetInkPoints_Windows::UI::Composition::InkTrailPoint_ @ 0x1800E60C4 (DirectComposition--ConvertToSuperWetInkPoints_Windows--UI--Composition--InkTrailPoint_.c)
 *     ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4 (-AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV-$vector@USuperWetInkB.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisual::Api::AddTrailPoints(
        Windows::UI::Composition::DelegatedInkTrailVisual::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::InkTrailPoint *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v9; // edi
  __int64 v10; // rdi
  void *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  *a4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v10 = *((_QWORD *)this + 2);
    DirectComposition::ConvertToSuperWetInkPoints_Windows::UI::Composition::InkTrailPoint_(v12, (__int64)a3, a2, 0);
    v9 = DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsPrivate(v10, v12, 0LL, (__int64)a4);
    if ( v12[0] )
      std::_Deallocate<16,0>(v12[0], 8 * (((char *)v12[2] - (char *)v12[0]) >> 3));
    if ( v9 < 0 )
      DoStackCaptureDirect(v9, 0x53u);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return (unsigned int)v9;
}
