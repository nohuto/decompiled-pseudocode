/*
 * XREFs of sub_1800298CC @ 0x1800298CC
 * Callers:
 *     sub_1800295A0 @ 0x1800295A0 (sub_1800295A0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_18002988C @ 0x18002988C (sub_18002988C.c)
 */

__int64 __fastcall sub_1800298CC(__int64 *a1, unsigned int *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_DWORD *)(v7 + 28) >= v8 )
      {
        if ( *(_BYTE *)(v5 + 25) && v8 < *(_DWORD *)(v7 + 28) )
          v5 = v7;
        v4 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v6 + 28) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
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
    sub_18002988C(a1);
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
