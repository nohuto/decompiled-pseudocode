/*
 * XREFs of ?UpdateTouchEdgeGestureType@TouchEdgeGestureProcessor@@AEAAXW4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@@Z @ 0x180655BE0
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180655074 (-IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall TouchEdgeGestureProcessor::UpdateTouchEdgeGestureType(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = (unsigned int)(v2 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          *(_DWORD *)(a1 + 88) = TouchEdgeGestureProcessor::IsBottomGesture(
                                   (TouchEdgeGestureProcessor *)a1,
                                   (const struct winrt::Windows::Foundation::Point *)(a1 + 96))
                               ? 2
                               : 16;
        else
          MicrosoftTelemetryAssertTriggeredNoArgs(a1, v3);
      }
      else
      {
        *(_DWORD *)(a1 + 88) = 8;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 88) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 88) = 4;
  }
}
