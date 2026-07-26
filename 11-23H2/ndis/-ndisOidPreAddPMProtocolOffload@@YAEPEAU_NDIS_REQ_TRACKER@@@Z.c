/*
 * XREFs of ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092A30 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C00939C0 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C0093C68 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00949B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A088 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 */

unsigned __int8 __fastcall ndisOidPreAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  int v5; // r8d
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
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // eax
  struct _NDIS_FILTER_BLOCK *v20; // rdx
  int v21; // eax
  int v22; // eax
  unsigned __int8 v24; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v4 = *(_QWORD *)(v3 + 24);
  LOBYTE(v5) = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  v24 = 1;
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
    goto LABEL_35;
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
  if ( v13 == (_BYTE)v5 )
  {
    if ( *(_WORD *)(v12 + 2) < 0xF0u )
      goto LABEL_19;
  }
  else if ( v13 != 2 || *(_WORD *)(v12 + 2) < 0x100u )
  {
    goto LABEL_19;
  }
  if ( !ndisIsValidPmCountedString((struct _NDIS_PM_COUNTED_STRING *)(v12 + 16)) )
    goto LABEL_19;
  if ( *(_DWORD *)(v14 + 152) )
    goto LABEL_19;
  v16 = *(_DWORD *)(v14 + 12) - v5;
  if ( v16 )
  {
    v17 = v16 - v5;
    if ( v17 )
    {
      v18 = v17 - v5;
      if ( v18 )
      {
        if ( v18 != v5 )
          goto LABEL_19;
      }
    }
  }
  if ( !*((_QWORD *)a1 + 3)
    || (v19 = ndisSourcePreAddProtocolOffload(v15, 0LL, (struct _NDIS_OID_REQUEST *)v6, &v24),
        LOBYTE(v5) = v24,
        *((_DWORD *)a1 + 10) = v19,
        !(_BYTE)v5) )
  {
    v20 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
    if ( !v20
      || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
      || (v21 = ndisSourcePreAddProtocolOffload(0LL, v20, (struct _NDIS_OID_REQUEST *)v6, &v24),
          LOBYTE(v5) = v24,
          *((_DWORD *)a1 + 10) = v21,
          !(_BYTE)v5) )
    {
      if ( !*(_QWORD *)a1
        || (v22 = ndisMiniportPreAddProtocolOffload(v7, (struct _NDIS_OID_REQUEST *)v6, (char *)&v24),
            LOBYTE(v5) = v24,
            *((_DWORD *)a1 + 10) = v22,
            !(_BYTE)v5) )
      {
LABEL_35:
        LOBYTE(v5) = 0;
      }
    }
  }
  return v5;
}
