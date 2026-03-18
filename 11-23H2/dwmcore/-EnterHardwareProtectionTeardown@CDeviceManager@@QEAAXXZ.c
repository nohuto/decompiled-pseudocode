/*
 * XREFs of ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180285868
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800F1610 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800AF054 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CDeviceManager::EnterHardwareProtectionTeardown(CDeviceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  byte_1803EA150 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
