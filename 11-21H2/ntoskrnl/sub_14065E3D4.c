/*
 * XREFs of sub_14065E3D4 @ 0x14065E3D4
 * Callers:
 *     sub_14065E1EC @ 0x14065E1EC (sub_14065E1EC.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E3D4(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // rax
  int *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r11
  int v10; // ecx
  int v11; // edx
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v13 = -1;
  v3 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v14 = 0;
  if ( v3 )
    v6 = sub_1407C9820(a1);
  else
    v6 = sub_1406BF400(a1, a2);
  v7 = (int *)(v6 + 20);
  v8 = a3 - v6;
  v9 = 2LL;
  do
  {
    v10 = v7[2];
    v11 = *v7;
    v7[2] = *(int *)((char *)v7 + v8 - 8);
    *v7 = *(int *)((char *)v7 + v8 - 16);
    *(int *)((char *)v7 + v8 - 8) = v10;
    *(int *)((char *)v7++ + v8 - 16) = v11;
    --v9;
  }
  while ( v9 );
  if ( !(*(_DWORD *)(v6 + 20) + *(_DWORD *)(v6 + 24)) )
  {
    *(_WORD *)(v6 + 52) = 0;
    *(_DWORD *)(v6 + 56) = 0;
  }
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    return sub_1406BF450(a1, &v13);
  else
    return sub_1407C97C0(a1, &v13);
}
