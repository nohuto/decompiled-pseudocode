/*
 * XREFs of ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x1802771B8
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800EE5B0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

void __fastcall CDeviceManager::EnterHardwareProtectionTeardown(CDeviceManager *this)
{
  __int64 v1; // rcx
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &stru_1803D75A8;
  EnterCriticalSection(&stru_1803D75A8);
  byte_1803D75E8 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(v1, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v2);
}
