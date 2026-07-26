/*
 * XREFs of ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00903B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009219C (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092664 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPrePMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // eax

  v1 = *((_QWORD *)a1 + 3);
  v2 = 1;
  v3 = *((_QWORD *)a1 + 4);
  if ( (!v1
     || (v4 = *(_QWORD *)(v1 + 24), *(_BYTE *)(v4 + 56) > 6u)
     || *(_BYTE *)(v4 + 56) == 6 && *(_BYTE *)(v4 + 57) >= 0x14u)
    && ((v5 = *((_QWORD *)a1 + 1)) == 0
     || (*(_DWORD *)(v3 + 88) & 0x4000) != 0
     || (v6 = *(_QWORD *)(v5 + 16), *(_BYTE *)(v6 + 100) > 6u)
     || *(_BYTE *)(v6 + 100) == 6 && *(_BYTE *)(v6 + 101) >= 0x14u) )
  {
    v7 = *(_DWORD *)(v3 + 4);
    if ( (v7 & 0xFFFFFFFD) == 0 )
      return ndisPreQueryPMParameters(a1);
    if ( v7 == 1 )
      return ndisPreSetPMParameters(a1);
    *((_DWORD *)a1 + 10) = -1073676267;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v2;
}
