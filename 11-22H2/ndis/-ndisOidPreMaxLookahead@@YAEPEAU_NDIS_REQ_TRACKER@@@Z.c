/*
 * XREFs of ?ndisOidPreMaxLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  char v2; // r8

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      v2 = 1;
      **(_DWORD **)(v1 + 40) = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
      *(_DWORD *)(v1 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  return v2;
}
