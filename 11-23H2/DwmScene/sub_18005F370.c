/*
 * XREFs of sub_18005F370 @ 0x18005F370
 * Callers:
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060AF4 @ 0x180060AF4 (sub_180060AF4.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18005E928 @ 0x18005E928 (sub_18005E928.c)
 *     sub_18005FB90 @ 0x18005FB90 (sub_18005FB90.c)
 */

__int64 __fastcall sub_18005F370(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  _DWORD *v15; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0;
  v5 = *a1;
  v7 = v5;
  v8 = *(_QWORD *)(v5 + 8);
  v13 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    a4 = (unsigned int)*a3;
    do
    {
      v13 = v8;
      if ( *(_DWORD *)(v8 + 32) >= (int)a4 )
      {
        v7 = v8;
        v14 = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v14 = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_DWORD *)(v7 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v15 = a3;
    v9 = sub_18005E928(v12, (__int64)a1, v5, a4, &v15);
    v10 = v9[1];
    v9[1] = 0LL;
    sub_18005FB90(v12);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v13, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
