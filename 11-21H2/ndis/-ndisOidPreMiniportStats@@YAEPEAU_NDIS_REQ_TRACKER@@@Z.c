/*
 * XREFs of ?ndisOidPreMiniportStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x1C009A43C (-ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z.c)
 */

char __fastcall ndisOidPreMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  struct _NDIS_REQ_TRACKER *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  void *Pool2; // r14
  _DWORD *v12; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = a1;
  v14 = 0LL;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
    a1 = (struct _NDIS_REQ_TRACKER *)(v4 + 32);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(v1 + 32);
  if ( !v4 && *(_BYTE *)(v5 + 32) < 6u )
  {
    if ( !*(_QWORD *)v3 )
      return v2;
    if ( ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v5 + 3152), v6, &v14) != 1 )
    {
      v9 = v14;
LABEL_15:
      v10 = *(_DWORD *)(v1 + 48);
      if ( v10 >= 8 )
      {
        **(_QWORD **)(v1 + 40) = v9;
        *(_DWORD *)(v1 + 52) = 8;
LABEL_19:
        *((_DWORD *)v3 + 10) = 0;
        return 1;
      }
      if ( v10 == 4 )
      {
        **(_DWORD **)(v1 + 40) = v9;
        *(_DWORD *)(v1 + 52) = 4;
        goto LABEL_19;
      }
LABEL_21:
      *(_DWORD *)(v1 + 56) = 8;
      *((_DWORD *)v3 + 10) = -1073676268;
      return 1;
    }
    if ( v6 != 131611 )
      return v2;
    v7 = *(_QWORD *)(v1 + 144);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 56);
      if ( v8 )
      {
        *((_DWORD *)v3 + 10) = v8;
        return 1;
      }
      v9 = *(_QWORD *)(v7 + 40);
      goto LABEL_15;
    }
LABEL_24:
    *((_DWORD *)v3 + 10) = -1073741670;
    return 1;
  }
  if ( *(_DWORD *)(v1 + 48) < 4u )
    goto LABEL_21;
  Pool2 = (void *)ExAllocatePool2(64LL, 152LL, 1903313998);
  if ( !Pool2 )
    goto LABEL_24;
  v12 = (_DWORD *)ExAllocatePool2(64LL, 64LL, 1903313998);
  *(_QWORD *)(v1 + 144) = v12;
  if ( v12 )
  {
    *v12 = v6;
    *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8LL) = *(_QWORD *)(v1 + 40);
    *(_DWORD *)(*(_QWORD *)(v1 + 144) + 16LL) = *(_DWORD *)(v1 + 48);
    *(_DWORD *)(v1 + 32) = 131334;
    *(_QWORD *)(v1 + 40) = Pool2;
    *(_DWORD *)(v1 + 48) = 152;
  }
  else
  {
    *((_DWORD *)v3 + 10) = -1073741670;
    v2 = 1;
    ExFreePoolWithTag(Pool2, 0);
  }
  return v2;
}
