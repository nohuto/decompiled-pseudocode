/*
 * XREFs of PdcTaskClientRequest @ 0x1C0143C54
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0097930 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0099EC8 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01374D0 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x1C00D25BC (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C0143DD4 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // edx
  _DWORD v8[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive(a1 + 8);
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_15:
      *(_QWORD *)(a1 + 16) = 0LL;
      ExReleasePushLockEx(a1 + 8, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v4;
    }
    v4 = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a1 + 48) )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)(a1 + 48) != 1 )
    {
      goto LABEL_12;
    }
    v5 = *(_QWORD *)(a1 + 40);
    v8[10] = 7;
    LOBYTE(v8[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v5, (__int64)v8);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
LABEL_12:
    v6 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      *(_DWORD *)(a1 + 48) = v6 + 1;
    else
      *(_DWORD *)(a1 + 48) = v6 - 1;
    goto LABEL_15;
  }
  return (unsigned int)-1073741585;
}
