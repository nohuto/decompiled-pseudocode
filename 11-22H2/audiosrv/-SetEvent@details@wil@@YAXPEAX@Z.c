/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180017654
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x180016884 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180017334 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x1800CE860 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800D6140 (-OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180135808 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180136D10 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180136D50 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CDB34 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x92D, v2, v3);
}
