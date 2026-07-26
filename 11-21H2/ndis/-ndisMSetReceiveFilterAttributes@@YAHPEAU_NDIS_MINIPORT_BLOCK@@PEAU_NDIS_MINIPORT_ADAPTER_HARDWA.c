/*
 * XREFs of ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0068EE8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C0065B50 (-ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C006990C (-ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  int v4; // ebx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *HardwareReceiveFilterCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *CurrentReceiveFilterCapabilities; // rax
  size_t v7; // rbp
  _NDIS_RECEIVE_FILTER_CAPABILITIES *Pool2; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v9; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v10; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v11; // rdx
  size_t Size; // r8
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v13; // rdx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // rcx
  char v18[8]; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Eu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      a2);
  HardwareReceiveFilterCapabilities = a2->HardwareReceiveFilterCapabilities;
  if ( !HardwareReceiveFilterCapabilities->Header.Revision
    || HardwareReceiveFilterCapabilities->Header.Size < 0x38u
    || (CurrentReceiveFilterCapabilities = a2->CurrentReceiveFilterCapabilities,
        !CurrentReceiveFilterCapabilities->Header.Revision)
    || CurrentReceiveFilterCapabilities->Header.Size < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_29;
  }
  if ( ndisShouldSuppressReceiveFilterCapabilities(HardwareReceiveFilterCapabilities)
    || ndisShouldSuppressReceiveFilterCapabilities(a2->CurrentReceiveFilterCapabilities) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Fu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      (char)a2->HardwareReceiveFilterCapabilities,
      a2->CurrentReceiveFilterCapabilities);
  }
  else
  {
    v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(a2->HardwareReceiveFilterCapabilities);
    if ( v4 || (v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(a2->CurrentReceiveFilterCapabilities)) != 0 )
    {
      if ( v4 < 0 && v4 != -1073676283 )
        goto LABEL_29;
    }
    else
    {
      if ( !a1->ReceiveFilterCurrentCapabilities && !a1->ReceiveFilterHwCapabilities )
      {
        v7 = 84LL;
        Pool2 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014);
        a1->ReceiveFilterCurrentCapabilities = Pool2;
        if ( Pool2 )
        {
          v9 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014);
          a1->TopReceiveFilterCurrentCapabilities = v9;
          if ( v9 )
          {
            v10 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014);
            a1->ReceiveFilterHwCapabilities = v10;
            if ( v10 )
            {
              v11 = a2->HardwareReceiveFilterCapabilities;
              Size = v11->Header.Size;
              if ( v11->Header.Size >= 0x54u )
                Size = 84LL;
              memmove(v10, v11, Size);
              v13 = a2->CurrentReceiveFilterCapabilities;
              if ( v13->Header.Size < 0x54u )
                v7 = v13->Header.Size;
              memmove(a1->ReceiveFilterCurrentCapabilities, v13, v7);
              memmove(a1->TopReceiveFilterCurrentCapabilities, a2->CurrentReceiveFilterCapabilities, v7);
              a1->EnabledReceiveQueueTypes = a2->CurrentReceiveFilterCapabilities->EnabledQueueTypes;
              a1->EnabledReceiveFilterTypes = a2->CurrentReceiveFilterCapabilities->EnabledFilterTypes;
              goto LABEL_35;
            }
          }
        }
        v4 = -1073741670;
LABEL_29:
        ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
        if ( ReceiveFilterCurrentCapabilities )
        {
          ExFreePoolWithTag(ReceiveFilterCurrentCapabilities, 0);
          a1->ReceiveFilterCurrentCapabilities = 0LL;
        }
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
        {
          ExFreePoolWithTag(TopReceiveFilterCurrentCapabilities, 0);
          a1->TopReceiveFilterCurrentCapabilities = 0LL;
        }
        ReceiveFilterHwCapabilities = a1->ReceiveFilterHwCapabilities;
        if ( ReceiveFilterHwCapabilities )
        {
          ExFreePoolWithTag(ReceiveFilterHwCapabilities, 0);
          a1->ReceiveFilterHwCapabilities = 0LL;
        }
        goto LABEL_35;
      }
      v4 = -1073676283;
    }
  }
LABEL_35:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x80u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      (char)a2,
      *(_QWORD *)v18);
  }
  return (unsigned int)v4;
}
