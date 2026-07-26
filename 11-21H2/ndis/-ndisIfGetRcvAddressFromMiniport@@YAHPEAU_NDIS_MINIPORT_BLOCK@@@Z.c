/*
 * XREFs of ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C478
 * Callers:
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001C630 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009A5A0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfGetRcvAddressFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rdi
  unsigned int v2; // ebx
  _X_FILTER *EthDB; // rsi
  unsigned int MaxMulticastAddresses; // eax
  unsigned int v5; // ecx
  struct _NDIS_IF_RCV_ADDRESS *ifRcvAddressTable; // rax
  unsigned int MiniportNumAddresses; // ecx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int8 *MiniportMCastAddressBuf; // rcx
  struct _NDIS_IF_RCV_ADDRESS *v13; // rdx
  __int64 v14; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v15; // rcx
  __int64 Pool2; // rax
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int8 *v20; // rdx
  struct _NDIS_IF_RCV_ADDRESS *v21; // r8
  __int64 v22; // rax

  IfBlock = a1->IfBlock;
  v2 = 0;
  EthDB = a1->EthDB;
  if ( !IfBlock )
    return v2;
  if ( !EthDB )
    return v2;
  MaxMulticastAddresses = EthDB->MaxMulticastAddresses;
  v5 = MaxMulticastAddresses + 1;
  if ( MaxMulticastAddresses + 1 < MaxMulticastAddresses )
    return v2;
  ifRcvAddressTable = IfBlock->ifRcvAddressTable;
  if ( IfBlock->ifMaxRcvAddressCount < v5 )
  {
    if ( ifRcvAddressTable )
      ExFreePoolWithTag(IfBlock->ifRcvAddressTable, 0);
    IfBlock->ifRcvAddressTable = 0LL;
    *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
    goto LABEL_13;
  }
  if ( !ifRcvAddressTable )
  {
LABEL_13:
    Pool2 = ExAllocatePool2(64LL, 48 * (EthDB->MaxMulticastAddresses + 1), 1718174798);
    IfBlock->ifRcvAddressTable = (struct _NDIS_IF_RCV_ADDRESS *)Pool2;
    if ( !Pool2 )
    {
      *(_QWORD *)&IfBlock->ifRcvAddressCount = 0LL;
      return (unsigned int)-1073741670;
    }
    IfBlock->ifMaxRcvAddressCount = EthDB->MaxMulticastAddresses + 1;
  }
  MiniportNumAddresses = EthDB->MiniportNumAddresses;
  v8 = 0;
  IfBlock->ifRcvAddressCount = MiniportNumAddresses + 1;
  if ( MiniportNumAddresses )
  {
    do
    {
      v9 = v8++;
      v10 = 5 * v9;
      *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v10) = 2;
      v11 = 3 * v9;
      *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v10 + 2) = 6;
      MiniportMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
      v13 = IfBlock->ifRcvAddressTable;
      *((_DWORD *)v13 + 2 * v10 + 2) = *(_DWORD *)&MiniportMCastAddressBuf[2 * v11];
      *((_WORD *)v13 + 4 * v10 + 6) = *(_WORD *)&MiniportMCastAddressBuf[2 * v11 + 4];
    }
    while ( v8 < IfBlock->ifRcvAddressCount - 1 );
  }
  v14 = 5LL * v8;
  *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v14) = 2;
  *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v14 + 2) = 6;
  v15 = IfBlock->ifRcvAddressTable;
  *((_DWORD *)v15 + 2 * v14 + 2) = *(_DWORD *)EthDB->AdapterAddress;
  *((_WORD *)v15 + 4 * v14 + 6) = *(_WORD *)&EthDB->AdapterAddress[4];
  if ( v8 < IfBlock->ifRcvAddressCount - 1 )
  {
    do
    {
      v18 = v8 + 1;
      v19 = 5 * v18;
      *((_DWORD *)IfBlock->ifRcvAddressTable + 2 * v19) = 2;
      *((_WORD *)IfBlock->ifRcvAddressTable + 4 * v19 + 2) = 6;
      v20 = (unsigned __int8 *)EthDB->MiniportMCastAddressBuf;
      v21 = IfBlock->ifRcvAddressTable;
      v22 = v8++;
      *((_DWORD *)v21 + 2 * v19 + 2) = *(_DWORD *)&v20[6 * v22];
      *((_WORD *)v21 + 4 * v19 + 6) = *(_WORD *)&v20[6 * v22 + 4];
    }
    while ( (unsigned int)v18 < IfBlock->ifRcvAddressCount - 1 );
  }
  return v2;
}
