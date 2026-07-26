/*
 * XREFs of ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1520
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreFriendlyName(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  char v2; // di
  __int64 v3; // rbp
  const void **v5; // rdx
  unsigned int v6; // r14d
  char *v7; // rbx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      v5 = *(const void ***)(v1 + 3856);
      v6 = *(unsigned __int16 *)v5 + 2;
      if ( *(_DWORD *)(v3 + 48) < v6 )
      {
        *((_DWORD *)a1 + 10) = -1073676266;
        *(_DWORD *)(v3 + 56) = v6;
      }
      else
      {
        v7 = *(char **)(v3 + 40);
        memmove(v7, v5[1], *(unsigned __int16 *)v5);
        *(_WORD *)&v7[**(unsigned __int16 **)(v1 + 3856)] = 0;
        *(_DWORD *)(v3 + 56) = v6;
        *(_DWORD *)(v3 + 52) = v6;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    return 1;
  }
  return v2;
}
