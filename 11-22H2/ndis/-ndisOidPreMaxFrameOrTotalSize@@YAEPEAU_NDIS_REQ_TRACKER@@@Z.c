/*
 * XREFs of ?ndisOidPreMaxFrameOrTotalSize@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0025270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMaxFrameOrTotalSize(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned __int8 result; // al

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  result = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v2 + 48) < 4u )
      {
        *(_DWORD *)(v2 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        if ( !v1 || *(_DWORD *)(v2 + 32) != 65798 )
          return result;
        **(_DWORD **)(v2 + 40) = *(_DWORD *)(v1 + 3020);
        *(_DWORD *)(v2 + 52) = 4;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    return 1;
  }
  return result;
}
