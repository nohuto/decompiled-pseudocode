/*
 * XREFs of ?ndisOidPreGetPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreGetPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v3; // r8
  char v4; // cl
  int v5; // r9d
  __int64 *i; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 32) > 6u || *(_BYTE *)(v3 + 32) == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
    {
      if ( *(_DWORD *)(v1 + 48) >= 4u )
      {
        if ( *(_DWORD *)(v1 + 52) >= 0xF0u )
        {
          v5 = **(_DWORD **)(v1 + 40);
          for ( i = *(__int64 **)(v3 + 976); i; i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 49) == v5 )
              return v4;
          }
          *((_DWORD *)a1 + 10) = -1073676267;
        }
        else
        {
          *((_DWORD *)a1 + 10) = -1073676268;
          *(_DWORD *)(v1 + 68) = 240;
        }
      }
      else
      {
        *((_DWORD *)a1 + 10) = -1073676268;
        *(_DWORD *)(v1 + 68) = 4;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    return 1;
  }
  return v4;
}
