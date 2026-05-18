/*
 * XREFs of sub_18005EFFC @ 0x18005EFFC
 * Callers:
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18005EB8C @ 0x18005EB8C (sub_18005EB8C.c)
 *     sub_18005FBC0 @ 0x18005FBC0 (sub_18005FBC0.c)
 */

__int64 __fastcall sub_18005EFFC(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v15 = 0;
  v4 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  v14 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = a3[1];
    do
    {
      v14 = v8;
      if ( *(_QWORD *)(v8 + 40) >= v9 )
      {
        v7 = v8;
        v15 = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v15 = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || a3[1] < *(_QWORD *)(v7 + 40) )
  {
    if ( a1[1] == 0x555555555555555LL )
      sub_18001DDFC();
    v10 = sub_18005EB8C(v13, (__int64)a1, v4, a3);
    v11 = v10[1];
    v10[1] = 0LL;
    sub_18005FBC0(v13);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
