/*
 * XREFs of HamCloseActivity @ 0x180007EB0
 * Callers:
 *     sub_18001CD28 @ 0x18001CD28 (sub_18001CD28.c)
 * Callees:
 *     sub_1800083D0 @ 0x1800083D0 (sub_1800083D0.c)
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamCloseActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  CLIENT_CALL_RETURN result; // rax
  int v7; // edi
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  int v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+54h] [rbp-54h]
  __int64 v18; // [rsp+5Ch] [rbp-4Ch]
  __int64 v19; // [rsp+64h] [rbp-44h]
  __int64 v20; // [rsp+6Ch] [rbp-3Ch]
  __int64 v21; // [rsp+74h] [rbp-34h]
  int v22; // [rsp+7Ch] [rbp-2Ch]

  if ( (unsigned int)unknown_libname_2(a1) )
    result.Simple = HampInProcCloseActivity(v5[1]);
  else
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0xFu, 0LL, *v5, v4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0;
    v15[0] = a2;
    v15[1] = 0LL;
    v16 = 3;
    RtlAcquireSRWLockExclusive(a1 + 32);
    *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
    v7 = *(_BYTE *)(a1 + 56) & 1;
    v8 = *(_QWORD *)(a1 + 48);
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    {
      if ( !v8 )
      {
LABEL_24:
        *(_DWORD *)(a1 + 40) = 0;
        RtlReleaseSRWLockExclusive(a1 + 32);
        return 0LL;
      }
      v8 ^= a1 + 48;
    }
    if ( v8 )
    {
      do
      {
        v9 = sub_1800083D0(v15, v8);
        if ( v9 >= 0 )
        {
          if ( v9 <= 0 )
            break;
          v10 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v10 = *(_QWORD *)v8;
        }
        if ( v7 && v10 )
          v8 ^= v10;
        else
          v8 = v10;
      }
      while ( v8 );
      if ( v8 )
      {
        RtlRbRemoveNode(a1 + 48, v8);
        v11 = (_QWORD *)(v8 + 24);
        v12 = *(_QWORD **)(a1 + 72);
        if ( *v12 != a1 + 64 )
          __fastfail(3u);
        *v11 = a1 + 64;
        v11[1] = v12;
        *v12 = v11;
        *(_QWORD *)(a1 + 72) = v11;
        v13 = *(_QWORD *)(a1 + 24);
        RtlAcquireSRWLockExclusive(v13 + 32);
        v14 = *(_DWORD *)(v13 + 64) | 2;
        *(_DWORD *)(v13 + 64) = v14;
        if ( (v14 & 1) == 0 )
        {
          *(_DWORD *)(v13 + 64) = v14 | 1;
          TpPostWork(*(_QWORD *)(v13 + 56));
        }
        RtlReleaseSRWLockExclusive(v13 + 32);
      }
    }
    goto LABEL_24;
  }
  return result;
}
