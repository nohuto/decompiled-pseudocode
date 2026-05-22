/*
 * XREFs of ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x1800E39B4
 * Callers:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D24C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180101F3C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

_QWORD *__fastcall PointerInputMediator::FindFrame(_QWORD *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 **v5; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = *((_QWORD *)&xmmword_180242FA0 + 1);
  v3 = 0LL;
  v5 = (__int64 **)PointerInputMediator::s_frameQueue;
  if ( (_QWORD)PointerInputMediator::s_frameQueue )
    v7 = *(_QWORD *)PointerInputMediator::s_frameQueue;
  else
    v7 = 0LL;
  while ( v2 != *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0
       && **(_DWORD **)(*(_QWORD *)(v7 + 8) + 8 * (v2 & (*(_QWORD *)(v7 + 16) - 1LL))) != a2 )
    ++v2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v5 )
  {
    if ( *v5 )
      v3 = **v5;
    *a1 = v3;
  }
  a1[2] = v2;
  if ( v2 == *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(*((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0, v7, v3);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::GetImpl'::`2'::impl,
      0,
      v8,
      v9);
  }
  return a1;
}
