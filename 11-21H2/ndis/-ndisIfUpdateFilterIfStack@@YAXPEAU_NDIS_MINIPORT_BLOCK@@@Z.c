/*
 * XREFs of ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00216DC
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015FB8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0021A24 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0021894 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C0022C88 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int IfIndex; // esi
  struct _NDIS_IF_BLOCK *Interface; // rbx
  PVOID *v4; // rcx
  unsigned int v5; // edx
  unsigned int HigherLayerIfCount; // r8d
  PVOID *v7; // rbx
  unsigned int v8[4]; // [rsp+30h] [rbp-488h] BYREF
  _OWORD v9[69]; // [rsp+40h] [rbp-478h] BYREF

  IfIndex = a1->IfIndex;
  memset(&v9[1], 0, 0x434uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      a1);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00ECDB0);
  Interface = ndisIfFindInterface(IfIndex);
  v9[0] = Interface->NetworkGuid;
  if ( Interface->HigherLayerIfCount )
  {
LABEL_4:
    v4 = (PVOID *)P;
    v5 = 0;
    if ( P != &P )
    {
      HigherLayerIfCount = Interface->HigherLayerIfCount;
      while ( v5 < HigherLayerIfCount )
      {
        v7 = v4;
        v4 = (PVOID *)*v4;
        if ( *((_DWORD *)v7 + 5) == IfIndex )
        {
          Interface = (struct _NDIS_IF_BLOCK *)v7[3];
          ++v5;
          if ( Interface )
          {
            if ( (Interface->Flags & 2) != 0 )
            {
              v8[0] = 0;
              ndisNsiChangeInterfaceInfo(
                Interface,
                (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v9,
                (wchar_t *)0x10,
                0,
                v8);
              IfIndex = Interface->ifIndex;
              if ( Interface->HigherLayerIfCount )
                goto LABEL_4;
              break;
            }
          }
        }
        if ( v4 == &P )
          break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_1C00ECDB0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      a1);
}
