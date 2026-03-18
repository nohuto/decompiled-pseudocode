/*
 * XREFs of KeSaveIptStateBeforeProcessorGoesOffline @ 0x140572698
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9D480 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 * Callees:
 *     KiSaveIptState @ 0x140572D10 (KiSaveIptState.c)
 */

struct _KPRCB *KeSaveIptStateBeforeProcessorGoesOffline()
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiSaveIptState((char *)ExtendedState + (unsigned int)KeXStateLength);
  }
  return result;
}
