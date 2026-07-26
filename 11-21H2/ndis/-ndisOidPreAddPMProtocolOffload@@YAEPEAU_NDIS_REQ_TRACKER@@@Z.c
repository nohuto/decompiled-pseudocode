/*
 * XREFs of ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008CA00 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C008D9B8 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C008DC90 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C008E9CC (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094040 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 */

unsigned __int8 __fastcall ndisOidPreAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int8 v5; // r8
  __int64 v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int PMProtocolOffloadSize; // eax
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // r9
  struct _NDIS_OPEN_BLOCK *v15; // r10
  int v16; // eax
  struct _NDIS_FILTER_BLOCK *v17; // rdx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v21; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  v21 = 1;
  if ( v4
    && (v8 = *(_QWORD *)(v4 + 24), *(_BYTE *)(v8 + 56) <= 6u)
    && (*(_BYTE *)(v8 + 56) != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
    || (v9 = *((_QWORD *)a1 + 1)) != 0
    && (*(_DWORD *)(v6 + 88) & 0x4000) == 0
    && (v10 = *(_QWORD *)(v9 + 16), *(_BYTE *)(v10 + 100) <= 6u)
    && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x14u)
    || *(_DWORD *)(v6 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v5;
  }
  if ( (*(_DWORD *)(v6 + 88) & 0xC0000) != 0 )
    return 0;
  PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize(*(struct _NDIS_PM_PROTOCOL_OFFLOAD **)(v6 + 40));
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v6 + 48) < PMProtocolOffloadSize )
  {
    *(_DWORD *)(v6 + 56) = PMProtocolOffloadSize;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v6 + 48) < 0x100u )
    {
      *(_DWORD *)(v6 + 56) = 256;
      *((_DWORD *)a1 + 10) = -1073676268;
      return v5;
    }
  }
  if ( *(_BYTE *)v12 != 0x80 )
  {
LABEL_19:
    *((_DWORD *)a1 + 10) = -1073676267;
    return v5;
  }
  v13 = *(_BYTE *)(v12 + 1);
  if ( v13 == v5 )
  {
    if ( *(_WORD *)(v12 + 2) < 0xF0u )
      goto LABEL_19;
  }
  else if ( v13 != 2 || *(_WORD *)(v12 + 2) < 0x100u )
  {
    goto LABEL_19;
  }
  if ( !ndisIsValidPmCountedString((struct _NDIS_PM_COUNTED_STRING *)(v12 + 16))
    || *(_DWORD *)(v14 + 152)
    || (unsigned int)(*(_DWORD *)(v14 + 12) - 1) > 3 )
  {
    goto LABEL_19;
  }
  if ( !*((_QWORD *)a1 + 3)
    || (v16 = ndisSourcePreAddProtocolOffload(v15, 0LL, (struct _NDIS_OID_REQUEST *)v6, &v21),
        v5 = v21,
        *((_DWORD *)a1 + 10) = v16,
        !v5) )
  {
    v17 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
    if ( !v17
      || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
      || (v18 = ndisSourcePreAddProtocolOffload(0LL, v17, (struct _NDIS_OID_REQUEST *)v6, &v21),
          v5 = v21,
          *((_DWORD *)a1 + 10) = v18,
          !v5) )
    {
      if ( !*(_QWORD *)a1 )
        return 0;
      v19 = ndisMiniportPreAddProtocolOffload(v7, (struct _NDIS_OID_REQUEST *)v6, (char *)&v21);
      v5 = v21;
      *((_DWORD *)a1 + 10) = v19;
      if ( !v5 )
        return 0;
    }
  }
  return v5;
}
