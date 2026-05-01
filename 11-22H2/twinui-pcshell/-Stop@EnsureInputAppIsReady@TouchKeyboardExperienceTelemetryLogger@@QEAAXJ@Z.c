/*
 * XREFs of ?Stop@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXJ@Z @ 0x18052B8D8
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::Stop(__int64 *this, int a2)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
