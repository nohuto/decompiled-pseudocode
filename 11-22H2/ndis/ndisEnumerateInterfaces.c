/*
 * XREFs of ndisEnumerateInterfaces @ 0x1C014D4BC
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F590 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F5B4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(char *a1, size_t Size, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  char *v7; // r13
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  char *v10; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // edx
  char *v15; // r14
  unsigned int Length; // eax
  unsigned int v17; // ecx
  bool v18; // cf
  KIRQL v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]

  v4 = (unsigned int)Size;
  v22 = 0LL;
  v23 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v22);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x30 )
    return 3221225507LL;
  v21 = v4 - 48;
  v6 = (unsigned int)v4;
  memset(a1, 0, (unsigned int)v4);
  v7 = a1 + 16;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v9 = ndisMiniDriverList;
  v20 = v8;
  if ( ndisMiniDriverList )
  {
    v10 = &a1[v4];
    do
    {
      p_SpinLock = &v9->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = v9->MiniportQueue;
      if ( MiniportQueue )
      {
        v13 = v21;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient(
                 MiniportQueue->IfBlock->Compartment,
                 (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
                 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v14 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 32;
            *((_DWORD *)a1 + 2) += v14;
            if ( v13 >= v14 )
            {
              ++*(_DWORD *)a1;
              v13 -= v14;
              v15 = &v10[-MiniportQueue->MiniportName.Length];
              *((_QWORD *)v7 + 1) = v15;
              Length = MiniportQueue->MiniportName.Length;
              *(_WORD *)v7 = Length;
              *((_WORD *)v7 + 1) = Length;
              memmove(v15, MiniportQueue->MiniportName.Buffer, Length);
              *((_QWORD *)v7 + 1) = (*((_QWORD *)v7 + 1) - (_QWORD)a1) & -(__int64)(*((_QWORD *)v7 + 1) != 0LL);
              v10 = &v15[-MiniportQueue->pAdapterInstanceName->Length];
              *((_QWORD *)v7 + 3) = v10;
              v17 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v7 + 8) = v17;
              *((_WORD *)v7 + 9) = v17;
              memmove(v10, MiniportQueue->pAdapterInstanceName->Buffer, v17);
              *((_QWORD *)v7 + 3) = (*((_QWORD *)v7 + 3) - (_QWORD)a1) & -(__int64)(*((_QWORD *)v7 + 3) != 0LL);
              v7 += 32;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v13;
        p_SpinLock = &v9->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v9 = v9->NextDriver;
    }
    while ( v9 );
    v8 = v20;
    v6 = v4;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  v18 = v6 - 48 < (unsigned __int64)*((unsigned int *)a1 + 2);
  *a3 = v4;
  return v18 ? 0x80000005 : 0;
}
