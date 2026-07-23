/*
 * XREFs of KiRestoreFeatureBits @ 0x140576BD0
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14056C604 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KeInitializeCatRegisters @ 0x14038398C (KeInitializeCatRegisters.c)
 *     KiSetVirtualMitigationControl @ 0x140410EF0 (KiSetVirtualMitigationControl.c)
 *     KiApplyProcessorErrata @ 0x140410F5C (KiApplyProcessorErrata.c)
 *     KiCheckMicrocode @ 0x140A8C8B4 (KiCheckMicrocode.c)
 */

__int64 KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( _bittest64((const signed __int64 *)&CurrentPrcb->FeatureBits, 0x22u) )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  if ( CurrentPrcb->BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, CurrentPrcb->BpbCurrentSpecCtrl);
  KiSetVirtualMitigationControl((__int64)CurrentPrcb);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  KeInitializeCatRegisters();
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  KiApplyProcessorErrata(CurrentPrcb);
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v1 = __readcr3();
    __writecr3(v1 | 2);
  }
  KiCheckMicrocode(CurrentPrcb);
  if ( KiUserCetAllowed )
  {
    v2 = __readcr4();
    __writecr4(v2 | 0x800000);
  }
  result = (unsigned int)KiHresetMask;
  if ( (_DWORD)KiHresetMask )
    __writemsr(0x17DAu, (unsigned int)KiHresetMask);
  return result;
}
