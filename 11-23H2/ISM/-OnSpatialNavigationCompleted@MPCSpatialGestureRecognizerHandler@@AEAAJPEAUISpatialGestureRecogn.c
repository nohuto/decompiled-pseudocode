/*
 * XREFs of ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x1800C3100
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z @ 0x1800C0D90 (--$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C0F9C (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs *a3)
{
  *(_DWORD *)(*((_QWORD *)this + 13) + 856LL) = 2;
  if ( *((_DWORD *)this + 42) == 1 )
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[16]>((__int64)this);
  else
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ZoomCompleted");
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
