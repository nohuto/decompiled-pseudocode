/*
 * XREFs of ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006F7C
 * Callers:
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0007150 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C640 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A04A0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rdi
  unsigned int v2; // ebx
  _X_FILTER *EthDB; // rsi
  unsigned int MaxMulticastAddresses; // eax
  __int64 Pool2; // rax
  unsigned int *p_ifRcvAddressCount; // rdx
  unsigned int *v7; // r14
  unsigned int MiniportNumAddresses; // ecx
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 *MiniportMCastAddressBuf; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v14; // rdx
  __int64 v15; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v16; // rcx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rcx
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned __int8 *v21; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v22; // r8
  __int64 v23; // rax

  IfBlock = a1->IfBlock;
  v2 = 0;
  EthDB = a1->EthDB;
  if ( IfBlock )
  {
    if ( EthDB )
    {
      MaxMulticastAddresses = EthDB->MaxMulticastAddresses;
      if ( MaxMulticastAddresses + 1 >= MaxMulticastAddresses )
      {
        if ( IfBlock->ifMaxRcvAddressCount < MaxMulticastAddresses + 1 )
        {
          ifRcvAddressTable = IfBlock->ifRcvAddressTable;
          if ( ifRcvAddressTable )
            ExFreePoolWithTag(ifRcvAddressTable, 0);
          IfBlock->ifRcvAddressTable = 0LL;
          *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
        }
        Pool2 = (__int64)IfBlock->ifRcvAddressTable;
        if ( Pool2
          || (Pool2 = ExAllocatePool2(64LL, 48 * (EthDB->MaxMulticastAddresses + 1), 1718174798LL),
              (IfBlock->ifRcvAddressTable = (struct _NDIS_IF_RCV_ADDRESS *)Pool2) == 0LL) )
        {
          p_ifRcvAddressCount = &IfBlock->ifRcvAddressCount;
          v7 = &IfBlock->ifRcvAddressCount;
          if ( !Pool2 )
          {
            *p_ifRcvAddressCount = 0;
            IfBlock->ifMaxRcvAddressCount = 0;
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          p_ifRcvAddressCount = &IfBlock->ifRcvAddressCount;
          v7 = &IfBlock->ifRcvAddressCount;
          IfBlock->ifMaxRcvAddressCount = EthDB->MaxMulticastAddresses + 1;
        }
        MiniportNumAddresses = EthDB->MiniportNumAddresses;
        v9 = 0;
        *p_ifRcvAddressCount = MiniportNumAddresses + 1;
        if ( MiniportNumAddresses )
        {
          do
          {
            v10 = v9++;
            v11 = 5 * v10;
            *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v11) = 2;
            v12 = 3 * v10;
            *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v11 + 2) = 6;
            MiniportMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
            v14 = IfBlock->ifRcvAddressTable;
            *((_DWORD *)v14 + 2 * v11 + 2) = *(_DWORD *)&MiniportMCastAddressBuf[2 * v12];
            *((_WORD *)v14 + 4 * v11 + 6) = *(_WORD *)&MiniportMCastAddressBuf[2 * v12 + 4];
          }
          while ( v9 < *v7 - 1 );
        }
        v15 = 5LL * v9;
        *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v15) = 2;
        *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v15 + 2) = 6;
        v16 = IfBlock->ifRcvAddressTable;
        *((_DWORD *)v16 + 2 * v15 + 2) = *(_DWORD *)EthDB->AdapterAddress;
        *((_WORD *)v16 + 4 * v15 + 6) = *(_WORD *)&EthDB->AdapterAddress[4];
        if ( v9 < *v7 - 1 )
        {
          do
          {
            v19 = v9 + 1;
            v20 = 5 * v19;
            *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v20) = 2;
            *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v20 + 2) = 6;
            v21 = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
            v22 = IfBlock->ifRcvAddressTable;
            v23 = v9++;
            *((_DWORD *)v22 + 2 * v20 + 2) = *(_DWORD *)&v21[6 * v23];
            *((_WORD *)v22 + 4 * v20 + 6) = *(_WORD *)&v21[6 * v23 + 4];
          }
          while ( (unsigned int)v19 < *v7 - 1 );
        }
      }
    }
  }
  return v2;
}
