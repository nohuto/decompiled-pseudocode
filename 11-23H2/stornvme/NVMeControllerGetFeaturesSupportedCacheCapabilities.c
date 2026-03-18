/*
 * XREFs of NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D7C4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeControllerGetFeaturesSupportedCacheCapabilities(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 1840);
  if ( (*(_BYTE *)(v2 + 525) & 1) != 0
    && (*(_WORD *)(a1 + 194) > 1u || *(_BYTE *)(a1 + 193))
    && (*(_BYTE *)(v2 + 520) & 0x10) != 0 )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~4u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 1040);
    *(_BYTE *)(v3 + 4136) = 6;
    v4 = *(_DWORD *)(v3 + 4136);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_DWORD *)(v3 + 4136) = v4 & 0xFFFFF8FF | 0x300;
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetFeaturesSupportedCacheCapabilitiesCompletion;
    ProcessCommand(a1, a1 + 952);
    Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( *(_BYTE *)(a1 + 955) != 1 )
      *(_BYTE *)(a1 + 4244) &= ~4u;
  }
}
