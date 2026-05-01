/*
 * XREFs of HamCloseActivity @ 0x180005290
 * Callers:
 *     ?Close@HamActivityWrapper@@QEAAXXZ @ 0x18001C358 (-Close@HamActivityWrapper@@QEAAXXZ.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008680 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCloseActivity(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  int v5; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  _QWORD v13[2]; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+54h] [rbp-54h]
  __int64 v16; // [rsp+5Ch] [rbp-4Ch]
  __int64 v17; // [rsp+64h] [rbp-44h]
  __int64 v18; // [rsp+6Ch] [rbp-3Ch]
  __int64 v19; // [rsp+74h] [rbp-34h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xEu, 0LL, *(_QWORD *)a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0;
    v13[0] = a2;
    v13[1] = 0LL;
    v14 = 3;
    RtlAcquireSRWLockExclusive(a1 + 24);
    *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
    v5 = *(_BYTE *)(a1 + 48) & 1;
    v6 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      if ( v6 )
        v6 ^= a1 + 40;
      else
        v6 = 0LL;
    }
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = HampIpcChannelObjectComparePayloadForTree(v13, v6);
        if ( v7 >= 0 )
        {
          if ( v7 <= 0 )
          {
LABEL_11:
            if ( v6 )
            {
              RtlRbRemoveNode(a1 + 40, v6);
              v9 = (_QWORD *)(v6 + 24);
              v10 = *(_QWORD **)(a1 + 64);
              if ( *v10 != a1 + 56 )
                __fastfail(3u);
              *v9 = a1 + 56;
              v9[1] = v10;
              *v10 = v9;
              *(_QWORD *)(a1 + 64) = v9;
              v11 = *(_QWORD *)(a1 + 16);
              RtlAcquireSRWLockExclusive(v11 + 32);
              v12 = *(_DWORD *)(v11 + 64) | 2;
              *(_DWORD *)(v11 + 64) = v12;
              if ( (v12 & 1) == 0 )
              {
                *(_DWORD *)(v11 + 64) = v12 | 1;
                TpPostWork(*(_QWORD *)(v11 + 56));
              }
              RtlReleaseSRWLockExclusive(v11 + 32);
            }
            break;
          }
          v8 = *(_QWORD *)(v6 + 8);
          if ( v5 && v8 )
          {
LABEL_23:
            v6 ^= v8;
            goto LABEL_10;
          }
        }
        else
        {
          v8 = *(_QWORD *)v6;
          if ( v5 && v8 )
            goto LABEL_23;
        }
        v6 = v8;
LABEL_10:
        if ( !v6 )
          goto LABEL_11;
      }
    }
    *(_DWORD *)(a1 + 32) = 0;
    RtlReleaseSRWLockExclusive(a1 + 24);
    return 0LL;
  }
  return result;
}
