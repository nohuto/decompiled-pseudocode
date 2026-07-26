/*
 * XREFs of ndisEnumerateInterfaces32 @ 0x1C0155F38
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F720 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C002F744 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(char *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // rbp
  size_t v7; // r14
  char *v8; // r13
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  char *v11; // r14
  KSPIN_LOCK *p_SpinLock; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  size_t Length; // r8
  char *v17; // r14
  size_t v18; // r8
  bool v19; // cf
  KIRQL v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]

  v4 = (unsigned int)Size;
  v22 = 0LL;
  v23 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v22);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x20 )
    return 3221225507LL;
  v21 = v4 - 32;
  v7 = v4;
  memset(a1, 0, v4);
  v8 = a1 + 16;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v20 = v9;
  if ( ndisMiniDriverList )
  {
    v11 = &a1[v4];
    do
    {
      p_SpinLock = &v10->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      MiniportQueue = v10->MiniportQueue;
      if ( MiniportQueue )
      {
        v14 = v21;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient(
                 MiniportQueue->IfBlock->Compartment,
                 (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
                 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
            *((_DWORD *)a1 + 2) += v15;
            if ( v14 >= v15 )
            {
              ++*(_DWORD *)a1;
              v14 -= v15;
              Length = MiniportQueue->MiniportName.Length;
              v17 = &v11[-Length];
              *(_WORD *)v8 = Length;
              *((_WORD *)v8 + 1) = Length;
              memmove(v17, MiniportQueue->MiniportName.Buffer, Length);
              *((_DWORD *)v8 + 1) = (_DWORD)v17 - (_DWORD)a1;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v8 + 4) = v18;
              v11 = &v17[-v18];
              *((_WORD *)v8 + 5) = v18;
              memmove(v11, MiniportQueue->pAdapterInstanceName->Buffer, v18);
              *((_DWORD *)v8 + 3) = (_DWORD)v11 - (_DWORD)a1;
              v8 += 16;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v21 = v14;
        p_SpinLock = &v10->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v10 = v10->NextDriver;
    }
    while ( v10 );
    v9 = v20;
    v7 = v4;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  v19 = v7 - 32 < *((unsigned int *)a1 + 2);
  *a3 = v4;
  return v19 ? 0x80000005 : 0;
}
