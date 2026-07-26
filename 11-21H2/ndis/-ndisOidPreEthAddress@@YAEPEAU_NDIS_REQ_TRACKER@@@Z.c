/*
 * XREFs of ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0008AD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreEthAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 result; // al
  bool v4; // zf
  void *v5; // r10
  __int64 v6; // r8
  unsigned __int16 v7; // dx
  unsigned int v8; // edi
  __int64 v9; // rdx
  const void *v10; // rdx

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
    v4 = *(_DWORD *)(v1 + 32) == 16843009;
    v5 = *(void **)(v1 + 40);
    v6 = *(_QWORD *)(v2 + 4040);
    if ( *(_DWORD *)(v1 + 32) == 16843009 )
      v7 = *(_WORD *)(v6 + 1158);
    else
      v7 = *(_WORD *)(v6 + 1124);
    v8 = v7;
    v9 = 1160LL;
    *((_DWORD *)a1 + 10) = 0;
    if ( !v4 )
      v9 = 1126LL;
    v10 = (const void *)(v6 + v9);
    if ( *(_DWORD *)(v1 + 48) < v8 )
    {
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 56) = v8;
    }
    else
    {
      memmove(v5, v10, v8);
      *(_DWORD *)(v1 + 52) = v8;
    }
  }
  return 1;
}
