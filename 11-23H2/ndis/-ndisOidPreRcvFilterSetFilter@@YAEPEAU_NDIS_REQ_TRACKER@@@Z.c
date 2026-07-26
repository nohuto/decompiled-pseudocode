/*
 * XREFs of ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00857F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C190 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085A7C (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterSetFilter(struct _NDIS_REQ_TRACKER *a1)
{
  char v2; // di
  __int64 v3; // rcx
  _DWORD *v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax

  v2 = 1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *(_DWORD **)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 12 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  v5 = 36;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x24u )
    goto LABEL_7;
  if ( *(_DWORD *)(v3 + 52) < 0x24u )
    goto LABEL_9;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
  {
    v5 = 44;
    if ( *(_DWORD *)(v3 + 48) < 0x2Cu )
    {
LABEL_7:
      *(_DWORD *)(v3 + 68) = v5;
LABEL_16:
      *((_DWORD *)a1 + 10) = -1073676268;
      return v2;
    }
    if ( *(_DWORD *)(v3 + 52) < 0x2Cu )
    {
LABEL_9:
      *(_DWORD *)(v3 + 68) = v5;
LABEL_19:
      *((_DWORD *)a1 + 10) = -1073676266;
      return v2;
    }
  }
  v6 = (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7];
  if ( v6 > 0xFFFFFFFF || (v7 = v4[5], v8 = v6 + v7, (unsigned int)v6 + v7 < v7) )
  {
    *((_DWORD *)a1 + 10) = NdisConvertNtStatusToNdisStatus(-1073741675);
    return v2;
  }
  *((_DWORD *)a1 + 10) = 0;
  v9 = v5;
  if ( v8 > v5 )
    v9 = v8;
  if ( *(_DWORD *)(v3 + 48) < v8 )
  {
    *(_DWORD *)(v3 + 68) = v9;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v3 + 52) < v5 )
  {
    *(_DWORD *)(v3 + 68) = v9;
    goto LABEL_19;
  }
  if ( *(_QWORD *)a1 )
    return ndisSetReceiveFilter(a1);
  else
    return 0;
}
