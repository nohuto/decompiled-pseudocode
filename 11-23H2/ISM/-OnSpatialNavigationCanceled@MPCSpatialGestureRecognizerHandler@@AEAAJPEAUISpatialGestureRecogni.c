/*
 * XREFs of ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x1800C30B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z @ 0x1800C0EEC (--$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z @ 0x1800C104C (--$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    *(_DWORD *)(v3 + 856) = 2;
  if ( *((_DWORD *)this + 42) == 1 )
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[15]>((__int64)this);
  else
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[13]>(L"ZoomCanceled");
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
