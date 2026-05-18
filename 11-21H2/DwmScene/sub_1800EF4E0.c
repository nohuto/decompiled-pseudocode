/*
 * XREFs of sub_1800EF4E0 @ 0x1800EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 */

_QWORD *__fastcall sub_1800EF4E0(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  _QWORD *v6; // rax
  int v7; // esi
  int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF

  v4 = a3 - 1;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v6 = sub_18005E29C(*(_QWORD *)(a1 + 144), v15, *(_DWORD *)(a1 + 88));
      v7 = 1;
      goto LABEL_13;
    }
    v8 = 2;
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      v6 = sub_18005E29C(*(_QWORD *)(a1 + 176), v15, *(_DWORD *)(a1 + 88));
      v7 = 16;
      goto LABEL_13;
    }
    v8 = 32;
LABEL_15:
    v14 = 0LL;
    v9 = v13;
    v10 = 0LL;
    v7 = 0;
    goto LABEL_16;
  }
  if ( v5 != 1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v8 = 8;
    goto LABEL_15;
  }
  v6 = sub_18005E29C(*(_QWORD *)(a1 + 192), v15, *(_DWORD *)(a1 + 88));
  v7 = 4;
LABEL_13:
  v9 = v6;
  v8 = 0;
  v10 = *v6;
LABEL_16:
  *a2 = v10;
  v11 = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  a2[1] = v11;
  if ( v8 )
    sub_180010910((__int64)v13);
  if ( v7 )
    sub_180010910((__int64)v15);
  return a2;
}
