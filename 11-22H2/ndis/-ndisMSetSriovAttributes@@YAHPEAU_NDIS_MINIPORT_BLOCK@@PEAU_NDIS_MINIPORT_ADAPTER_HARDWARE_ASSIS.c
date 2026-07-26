/*
 * XREFs of ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E660
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00182A0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0076394 (-ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  NTSTATUS LocallyUniqueId; // ebx
  _NDIS_SRIOV_CAPABILITIES *HardwareSriovCapabilities; // rax
  size_t v6; // rsi
  _NDIS_SRIOV_CAPABILITIES *CurrentSriovCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *Pool2; // rax
  _NDIS_SRIOV_CAPABILITIES *v11; // rdx
  size_t Size; // r8
  _NDIS_SRIOV_CAPABILITIES *v13; // rax
  _NDIS_SRIOV_CAPABILITIES *v14; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx

  LocallyUniqueId = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x83u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      a2);
  HardwareSriovCapabilities = a2->HardwareSriovCapabilities;
  if ( !HardwareSriovCapabilities->Header.Revision
    || (v6 = 12LL, HardwareSriovCapabilities->Header.Size < 0xCu)
    || (CurrentSriovCapabilities = a2->CurrentSriovCapabilities, !CurrentSriovCapabilities->Header.Revision)
    || CurrentSriovCapabilities->Header.Size < 0xCu
    || (HardwareSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities) == 0LL || NicSwitchHwCapabilities->Header.Revision < 2u)
    || (CurrentSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities) == 0LL
     || NicSwitchCurrentCapabilities->Header.Revision < 2u) )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_32;
  }
  if ( a1->SriovCurrentCapabilities || a1->SriovHwCapabilities )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_36;
  }
  Pool2 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742);
  a1->SriovHwCapabilities = Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    LocallyUniqueId = -1073741670;
LABEL_32:
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      ExFreePoolWithTag(SriovCurrentCapabilities, 0);
      a1->SriovCurrentCapabilities = 0LL;
    }
    SriovHwCapabilities = a1->SriovHwCapabilities;
    if ( SriovHwCapabilities )
    {
      ExFreePoolWithTag(SriovHwCapabilities, 0);
      a1->SriovHwCapabilities = 0LL;
    }
    goto LABEL_36;
  }
  v11 = a2->HardwareSriovCapabilities;
  Size = v11->Header.Size;
  if ( v11->Header.Size >= 0xCu )
    Size = 12LL;
  memmove(Pool2, v11, Size);
  if ( (a2->CurrentSriovCapabilities->SriovCapabilities & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742);
    a1->SriovCurrentCapabilities = v13;
    if ( !v13 )
      goto LABEL_16;
    v14 = a2->CurrentSriovCapabilities;
    if ( v14->Header.Size < 0xCu )
      v6 = v14->Header.Size;
    memmove(v13, v14, v6);
    LocallyUniqueId = ZwAllocateLocallyUniqueId(&a1->SriovLuid);
    if ( (LocallyUniqueId
       || (a2->CurrentSriovCapabilities->SriovCapabilities & 5) == 5 && (LocallyUniqueId = ndisIovInitVf(a1)) != 0)
      && LocallyUniqueId < 0
      && LocallyUniqueId != -1073676283 )
    {
      goto LABEL_32;
    }
  }
LABEL_36:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x84u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      (char)a2,
      LocallyUniqueId);
  return (unsigned int)LocallyUniqueId;
}
