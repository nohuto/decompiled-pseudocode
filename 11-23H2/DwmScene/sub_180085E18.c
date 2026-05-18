/*
 * XREFs of sub_180085E18 @ 0x180085E18
 * Callers:
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 */

__int64 __fastcall sub_180085E18(__int64 *a1, unsigned int *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 28) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_DWORD *)(v6 + 28) )
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
    v8 = v2[1];
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 28) )
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
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    sub_18001D3F8(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == *v2 && *(_BYTE *)(v5 + 25) )
  {
    sub_180027BC8((__int64)a1, (__int64)a1, v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      sub_18001D3F8(&v14);
      v13 = sub_180028C50(a1, v12);
      sub_1800100E8(v13, 0x28uLL);
      v4 = v14;
    }
  }
  return v10;
}
