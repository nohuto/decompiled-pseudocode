/*
 * XREFs of ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001B5C0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00157C8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001BF74 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C00193F8 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001B778 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int IfIndex; // esi
  struct _LIST_ENTRY *Interface; // rbx
  PVOID *v4; // rcx
  unsigned int v5; // edx
  unsigned int Flink_high; // r8d
  PVOID *v7; // rbx
  unsigned int v8[4]; // [rsp+30h] [rbp-488h] BYREF
  _OWORD v9[69]; // [rsp+40h] [rbp-478h] BYREF

  IfIndex = a1->IfIndex;
  memset(v9, 0, 0x444uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      a1);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00F5D90);
  Interface = ndisIfFindInterface(IfIndex);
  v9[0] = *(struct _LIST_ENTRY *)((char *)Interface + 580);
  if ( HIDWORD(Interface[81].Flink) )
  {
LABEL_4:
    v4 = (PVOID *)P;
    v5 = 0;
    if ( P != &P )
    {
      Flink_high = HIDWORD(Interface[81].Flink);
      while ( v5 < Flink_high )
      {
        v7 = v4;
        v4 = (PVOID *)*v4;
        if ( *((_DWORD *)v7 + 5) == IfIndex )
        {
          Interface = (struct _LIST_ENTRY *)v7[3];
          ++v5;
          if ( Interface )
          {
            if ( ((__int64)Interface[83].Blink & 2) != 0 )
            {
              v8[0] = 0;
              ndisNsiChangeInterfaceInfo(
                (struct _NDIS_IF_BLOCK *)Interface,
                (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v9,
                (wchar_t *)0x10,
                0,
                v8);
              IfIndex = HIDWORD(Interface->Flink);
              if ( HIDWORD(Interface[81].Flink) )
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
  KeReleaseSpinLockFromDpcLevel(&qword_1C00F5D90);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      a1);
}
