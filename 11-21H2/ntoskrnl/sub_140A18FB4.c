/*
 * XREFs of sub_140A18FB4 @ 0x140A18FB4
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140841E14 @ 0x140841E14 (sub_140841E14.c)
 *     sub_140A18474 @ 0x140A18474 (sub_140A18474.c)
 *     sub_140A18558 @ 0x140A18558 (sub_140A18558.c)
 */

__int64 __fastcall sub_140A18FB4(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v4 = sub_140841A58(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 5 )
  {
    *(_DWORD *)(a1 + 664) |= 2u;
LABEL_5:
    *(_DWORD *)(a1 + 696) |= 2u;
    return 0;
  }
  *(_DWORD *)(a1 + 600) |= 2u;
  *(_DWORD *)(a1 + 632) |= 2u;
  *(_DWORD *)(a1 + 728) |= 2u;
  *(_DWORD *)(a1 + 56) |= 2u;
  *(_DWORD *)(a1 + 824) |= 2u;
  *(_DWORD *)(a1 + 760) |= 2u;
  *(_DWORD *)(a1 + 952) |= 2u;
  *(_DWORD *)(a1 + 984) |= 2u;
  *(_DWORD *)(a1 + 1016) |= 2u;
  *(_DWORD *)(a1 + 1080) |= 2u;
  v6 = -1LL;
  if ( (int)sub_140A18474(&v10, a2) < 0 )
  {
    *(_DWORD *)(a1 + 664) |= 2u;
  }
  else
  {
    v4 = sub_140841E14(v10);
    if ( v4 < 0 )
      goto LABEL_2;
    *(_DWORD *)(a1 + 640) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 664) |= 5u;
    *(_QWORD *)(a1 + 648) = v8;
    *(_QWORD *)(a1 + 656) = v7;
  }
  if ( (int)sub_140A18558(&v11, a2) < 0 )
    goto LABEL_5;
  v4 = sub_140841E14(v11);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 672) = 4;
    do
      ++v6;
    while ( *(_WORD *)(v9 + 2 * v6) );
    *(_DWORD *)(a1 + 696) |= 5u;
    *(_QWORD *)(a1 + 680) = v6;
    *(_QWORD *)(a1 + 688) = v9;
    return 0;
  }
LABEL_2:
  sub_1406E0C3C(1LL, (__int64)"AslpFileGetHeaderAttributesNE");
  return (unsigned int)v4;
}
