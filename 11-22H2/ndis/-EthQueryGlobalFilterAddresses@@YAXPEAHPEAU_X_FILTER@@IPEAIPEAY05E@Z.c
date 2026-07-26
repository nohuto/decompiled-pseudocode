/*
 * XREFs of ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C00618E8
 * Callers:
 *     ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A4F60 (-ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00038D0 (NdisAcquireRWLockRead.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

void __fastcall EthQueryGlobalFilterAddresses(
        int *a1,
        struct _X_FILTER *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 (*a5)[6])
{
  unsigned int MiniportNumAddresses; // ecx
  unsigned __int8 *MiniportMCastAddressBuf; // rdx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+18h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockRead(a2->BindListLock, &LockState, 0);
  MiniportNumAddresses = a2->MiniportNumAddresses;
  if ( a3 >= 6 * MiniportNumAddresses )
  {
    *a1 = 0;
    MiniportMCastAddressBuf = (unsigned __int8 *)a2->MiniportMCastAddressBuf;
    *a4 = MiniportNumAddresses;
    memmove(a5, MiniportMCastAddressBuf, 6 * MiniportNumAddresses);
  }
  else
  {
    *a4 = 0;
    *a1 = -1073741823;
  }
  NdisReleaseRWLock(a2->BindListLock, &LockState);
}
