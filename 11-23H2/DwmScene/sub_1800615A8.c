/*
 * XREFs of sub_1800615A8 @ 0x1800615A8
 * Callers:
 *     sub_180060F7C @ 0x180060F7C (sub_180060F7C.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_18005F298 @ 0x18005F298 (sub_18005F298.c)
 *     sub_18005F340 @ 0x18005F340 (sub_18005F340.c)
 */

__int64 __fastcall sub_1800615A8(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( *(_QWORD *)(v6 + 40) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_QWORD *)(v6 + 40) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( *(_BYTE *)(v5 + 25) )
    v8 = *(_QWORD *)(v2 + 8);
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *(_QWORD *)(a2 + 8) >= *(_QWORD *)(v8 + 40) )
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v5 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v15 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    sub_18001D3F8(&v15);
    v9 = v15;
  }
  v15 = v4;
  if ( v4 == *(_QWORD *)v2 && *(_BYTE *)(v5 + 25) )
  {
    sub_18005F298((__int64)a1, (__int64)a1, *(__int64 **)(v2 + 8));
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
    *(_QWORD *)(v2 + 16) = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      sub_18001D3F8(&v15);
      v13 = sub_180028C50(a1, v12);
      sub_18005F340(v14, v13);
      v4 = v15;
    }
  }
  return v10;
}
