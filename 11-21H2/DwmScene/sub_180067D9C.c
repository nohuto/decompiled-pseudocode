/*
 * XREFs of sub_180067D9C @ 0x180067D9C
 * Callers:
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_180069260 @ 0x180069260 (sub_180069260.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180032BB8 @ 0x180032BB8 (sub_180032BB8.c)
 *     sub_180066AF8 @ 0x180066AF8 (sub_180066AF8.c)
 */

__int64 __fastcall sub_180067D9C(__int64 *a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rsi
  char *v9; // rbx
  char v11[8]; // [rsp+30h] [rbp-38h] BYREF
  char *v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  v14 = 0;
  v3 = *a1;
  v4 = v3;
  v5 = *(_QWORD *)(v3 + 8);
  v13 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *a2;
    do
    {
      v13 = v5;
      if ( *(_DWORD *)(v5 + 32) >= v6 )
      {
        v4 = v5;
        v14 = 1;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        v14 = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v4 + 25) || *a2 < *(_DWORD *)(v4 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001F56C();
    v7 = sub_180066AF8((__int64)v11, (__int64)a1, v3);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = 0LL;
    v9 = v12;
    if ( v12 )
    {
      sub_180029C94((__int64 *)v12 + 7);
      sub_180032BB8((char **)v9 + 5);
      if ( v12 )
        sub_180010884(v12, 0x48uLL);
    }
    v4 = sub_18001F31C(a1, (__int64)&v13, v8);
  }
  return v4 + 40;
}
