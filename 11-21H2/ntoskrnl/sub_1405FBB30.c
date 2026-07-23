/*
 * XREFs of sub_1405FBB30 @ 0x1405FBB30
 * Callers:
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 * Callees:
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1405FBB30(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          sub_14042A5E0(a1, *(_QWORD *)(a3 + 8));
      }
      else if ( *(int *)(a3 + 40) >= 0 )
      {
        sub_140379C24(*(PMDL *)(a3 + 24), *(_QWORD *)(a1 + 120), a1);
        sub_14037AE58(*(_QWORD *)(a1 + 120), 2, a1, *(struct _MDL **)(a3 + 24));
      }
    }
  }
  else if ( *(int *)(a3 + 40) >= 0 )
  {
    v8 = *(_DWORD *)(a3 + 32);
    v9[0] = *(_QWORD *)(a3 + 24);
    v9[1] = *(_QWORD *)(a3 + 8);
    LODWORD(v10) = ((unsigned __int8)v10 ^ (unsigned __int8)v8) & 1 ^ v10;
    sub_14037DAEC(a1, 3, (__int64)v9);
  }
}
