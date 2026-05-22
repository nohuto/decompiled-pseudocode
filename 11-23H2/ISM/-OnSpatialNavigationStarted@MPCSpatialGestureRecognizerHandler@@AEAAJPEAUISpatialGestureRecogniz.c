/*
 * XREFs of ?OnSpatialNavigationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationStartedEventArgs@3456@@Z @ 0x1800C3150
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z @ 0x1800C0E3C (--$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C0F9C (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 13);
  if ( *((_DWORD *)this + 42) == 1 )
  {
    *(_DWORD *)(v3 + 856) = 5;
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ScrollStarted");
  }
  else
  {
    *(_DWORD *)(v3 + 856) = 6;
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[12]>(L"ZoomStarted");
  }
  return 0LL;
}
