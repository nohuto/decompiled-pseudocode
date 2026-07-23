/*
 * XREFs of sub_1405338FC @ 0x1405338FC
 * Callers:
 *     sub_140532D90 @ 0x140532D90 (sub_140532D90.c)
 * Callees:
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 */

__int64 __fastcall sub_1405338FC(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v4; // rax
  __int64 *v5; // r8
  __int64 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 **v10; // r9
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 **v15; // r8
  __int64 **v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (__int64 *)(a1 + 24);
  v16 = 0LL;
  v6 = *(__int64 **)(a1 + 24);
  v8 = a1;
  while ( v6 != v5 )
  {
    v9 = v6[2];
    v10 = (__int64 **)v6;
    if ( v9 > a3 )
      break;
    a1 = v6[3];
    if ( a1 >= a2 )
    {
      if ( v9 == a2 && a1 == a3 )
        return 0LL;
      v6 = (__int64 *)*v6;
      if ( !v4 )
      {
        v4 = v10;
        v16 = v10;
        if ( v9 < a2 )
          a2 = v9;
      }
      if ( a1 >= a3 )
      {
        a3 = a1;
        break;
      }
    }
    else
    {
      v6 = (__int64 *)*v6;
    }
  }
  if ( v4 )
  {
    while ( *v4 != v6 )
    {
      v13 = *v4;
      v14 = **v4;
      if ( *(__int64 **)(v14 + 8) != *v4 )
        goto LABEL_26;
      v15 = (__int64 **)v13[1];
      if ( *v15 != v13 )
        goto LABEL_26;
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      --*(_DWORD *)(v8 + 20);
    }
  }
  else
  {
    if ( (int)sub_1403CE24C(a1, 0x20u, &v16) < 0 )
      return 3221225626LL;
    v12 = (__int64 *)v6[1];
    if ( (__int64 *)*v12 != v6 )
LABEL_26:
      __fastfail(3u);
    v4 = v16;
    *v16 = v6;
    v4[1] = v12;
    *v12 = (__int64)v4;
    v6[1] = (__int64)v4;
    ++*(_DWORD *)(v8 + 20);
  }
  v4[2] = (__int64 *)a2;
  v4[3] = (__int64 *)a3;
  return 0LL;
}
