/*
 * XREFs of ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00270F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreEthAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 result; // al
  void *v4; // r10
  _WORD *v5; // rdx
  unsigned __int16 v6; // r8
  const void *v7; // r9
  int v8; // edi

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    result = 0;
    if ( !v2 )
      return result;
    v4 = *(void **)(v1 + 40);
    v5 = *(_WORD **)(v2 + 4040);
    if ( *(_DWORD *)(v1 + 32) == 16843009 )
    {
      v6 = v5[579];
      v7 = v5 + 580;
    }
    else
    {
      v6 = v5[562];
      v7 = v5 + 563;
    }
    v8 = v6;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < (unsigned int)v6 )
    {
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 56) = v6;
    }
    else
    {
      memmove(v4, v7, v6);
      *(_DWORD *)(v1 + 52) = v8;
    }
  }
  return 1;
}
