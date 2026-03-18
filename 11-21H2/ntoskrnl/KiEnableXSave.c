/*
 * XREFs of KiEnableXSave @ 0x140A5433C
 * Callers:
 *     KiRestoreXSaveSupport @ 0x140A4DC5C (KiRestoreXSaveSupport.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     KiConfigureDynamicProcessor @ 0x140A699D0 (KiConfigureDynamicProcessor.c)
 * Callees:
 *     <none>
 */

_CONTEXT *__fastcall KiEnableXSave(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _CONTEXT *result; // rax
  unsigned __int64 v4; // rdx

  v1 = __readcr4();
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (v1 & 0x40000) == 0 )
      __writecr4(v1 | 0x40000);
    __asm { xsetbv }
    if ( KeEnabledSupervisorXStateFeatures )
      __writemsr(0xDA0u, KeEnabledSupervisorXStateFeatures);
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      if ( a1 )
        v4 = *a1;
      else
        v4 = MEMORY[0xFFFFF78000000710];
      __writemsr(0x1C4u, v4);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    result = &CurrentPrcb->ProcessorState.ContextFrame;
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
    {
      CurrentPrcb->ContextFlagsInit |= 0x100040u;
      if ( (_BYTE)KiKernelCetEnabled )
        CurrentPrcb->ContextFlagsInit |= 0x100080u;
    }
  }
  else if ( (v1 & 0x40000) != 0 )
  {
    __writecr4(v1 & 0xFFFFFFFFFFFBFFFFuLL);
  }
  return result;
}
