/*
 * XREFs of PdcTaskClientRequest @ 0x1C0137D98
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0091910 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0093E88 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C012B680 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x1C00CC15C (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C0137F1C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  _DWORD v9[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v9, 0, sizeof(v9));
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
    v5 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v5 )
      {
LABEL_12:
        v6 = *(_DWORD *)(a1 + 48);
        if ( a2 )
        {
          *(_DWORD *)(a1 + 48) = v6 + 1;
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
    else if ( v5 != 1 )
    {
      v6 = *(_DWORD *)(a1 + 48);
LABEL_13:
      *(_DWORD *)(a1 + 48) = v6 - 1;
      goto LABEL_15;
    }
    v7 = *(_QWORD *)(a1 + 40);
    v9[10] = 7;
    LOBYTE(v9[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v7, (__int64)v9);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  return (unsigned int)-1073741585;
}
