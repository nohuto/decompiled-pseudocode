/*
 * XREFs of ?ethAllocateOpenMulticastBuffer@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C001986C
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ethAllocateOpenMulticastBuffer(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  unsigned int v2; // ebx
  __int64 MaxMulticastAddresses; // rax
  _ETH_MULTICAST_WRAPPER *Pool2; // rax
  _ETH_MULTICAST_WRAPPER *v6; // rax

  v2 = 0;
  if ( a1->Miniport->MediaType == NdisMedium802_3 )
  {
    MaxMulticastAddresses = a1->MaxMulticastAddresses;
    a2->MaxMulticastAddresses = MaxMulticastAddresses;
    if ( (_DWORD)MaxMulticastAddresses )
    {
      a2->OldNumAddresses = 0;
      a2->NumAddresses = 0;
      Pool2 = (_ETH_MULTICAST_WRAPPER *)ExAllocatePool2(66LL, 12 * MaxMulticastAddresses, 1634092110);
      a2->MCastAddressBuf = Pool2;
      if ( Pool2 )
      {
        v6 = (_ETH_MULTICAST_WRAPPER *)ExAllocatePool2(66LL, 12LL * a2->MaxMulticastAddresses, 1634092110);
        a2->OldMCastAddressBuf = v6;
        if ( v6 )
          return v2;
        ExFreePoolWithTag(a2->MCastAddressBuf, 0);
        a2->MCastAddressBuf = 0LL;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
