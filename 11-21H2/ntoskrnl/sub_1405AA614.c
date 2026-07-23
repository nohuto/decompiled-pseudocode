/*
 * XREFs of sub_1405AA614 @ 0x1405AA614
 * Callers:
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_1405B07F4 @ 0x1405B07F4 (sub_1405B07F4.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 */

__int64 __fastcall sub_1405AA614(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx

  v6 = 0LL;
  v7 = sub_140317A10(a2);
  v9 = 1;
  if ( (v7 & 1) != 0 )
  {
    v6 = 1LL;
    v10 = sub_1405AB030(a1, v8, 1LL, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL));
    v12 = v11;
    if ( v10 )
      v12 = v10;
    if ( v12 == 16 )
      v6 = v11;
  }
  v13 = sub_1405ACB84(a1, 0, v9, 0, a2, 0);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v15 = v13;
    while ( v14 )
    {
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 16);
    }
    *(_QWORD *)(v15 + 16) = *a3;
    *a3 = v13;
  }
  return v6;
}
