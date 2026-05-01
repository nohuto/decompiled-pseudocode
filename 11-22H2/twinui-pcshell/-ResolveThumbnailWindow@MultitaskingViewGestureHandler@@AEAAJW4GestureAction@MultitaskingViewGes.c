/*
 * XREFs of ?ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x18054FD98
 * Callers:
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ResolveThumbnailWindow(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  if ( !a2 )
    goto LABEL_14;
  v2 = a2 - 1;
  if ( !v2 )
  {
    v9 = 2;
    goto LABEL_15;
  }
  v3 = v2 - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 1;
  if ( !v4 )
  {
    v9 = 3;
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_11:
    v9 = 1;
LABEL_15:
    MultitaskingViewGestureHandler::AnimationComplete(a1, v9);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs();
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  return 0LL;
}
